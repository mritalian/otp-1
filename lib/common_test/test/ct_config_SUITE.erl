%%
%% %CopyrightBegin%
%%
%% Copyright Ericsson AB 2010-2011. All Rights Reserved.
%%
%% The contents of this file are subject to the Erlang Public License,
%% Version 1.1, (the "License"); you may not use this file except in
%% compliance with the License. You should have received a copy of the
%% Erlang Public License along with this software. If not, it can be
%% retrieved online at http://www.erlang.org/.
%%
%% Software distributed under the License is distributed on an "AS IS"
%% basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
%% the License for the specific language governing rights and limitations
%% under the License.
%%
%% %CopyrightEnd%
%%

%%%-------------------------------------------------------------------
%%% File: ct_config_SUITE
%%%
%%% Description:
%%% Test configuration handling in Common Test suites.
%%%
%%% The suites used for the test are located in the data directory.
%%%-------------------------------------------------------------------
-module(ct_config_SUITE).

-compile(export_all).

-include_lib("common_test/include/ct.hrl").
-include_lib("common_test/include/ct_event.hrl").

-define(eh, ct_test_support_eh).

%%--------------------------------------------------------------------
%% TEST SERVER CALLBACK FUNCTIONS
%%--------------------------------------------------------------------

%%--------------------------------------------------------------------
%% Description: Since Common Test starts another Test Server
%% instance, the tests need to be performed on a separate node (or
%% there will be clashes with logging processes etc).
%%--------------------------------------------------------------------
init_per_suite(Config) ->
    DataDir = ?config(data_dir, Config),
    PathDir = filename:join(DataDir, "config/test"),
    Config1 = ct_test_support:init_per_suite([{path_dirs,[PathDir]} | Config]),
    PrivDir = ?config(priv_dir, Config1),
    ConfigDir = filename:join(PrivDir, "config"),
    ok = file:make_dir(ConfigDir),
    [{config_dir,ConfigDir} | Config1].

end_per_suite(Config) ->
    ct_test_support:end_per_suite(Config).

init_per_testcase(TestCase, Config) ->
    ct_test_support:init_per_testcase(TestCase, Config).

end_per_testcase(install_config = TestCase, Config) ->
    ok = rpc:call(proplists:get_value(ct_node, Config), ct_config, stop, []),
    ct_test_support:end_per_testcase(TestCase, Config);
end_per_testcase(TestCase, Config) ->
    ct_test_support:end_per_testcase(TestCase, Config).

suite() -> [{ct_hooks,[ts_install_cth]}].

all() -> 
    [require, install_config, userconfig_static,
     userconfig_dynamic, testspec_legacy, testspec_static,
     testspec_dynamic].

groups() -> 
    [].

init_per_group(_GroupName, Config) ->
	Config.

end_per_group(_GroupName, Config) ->
	Config.


%%--------------------------------------------------------------------
%% TEST CASES
%%--------------------------------------------------------------------
require(Config) when is_list(Config) ->
    DataDir = ?config(data_dir, Config),
    run_test(config_static_SUITE,
	     Config,
	     {config, filename:join(DataDir, "config/config.txt")},
             ["config_static_SUITE"]).

install_config(Config) when is_list(Config) ->
    DataDir = ?config(data_dir, Config),
    CTNode = proplists:get_value(ct_node, Config),
    rpc:call(CTNode, ct, install,
	     [[{config, [filename:join(DataDir, "config/config.txt")]}]]),
    case rpc:call(CTNode, ct_config, start, [interactive]) of
	Pid when is_pid(Pid) ->
	    ok
    end.


userconfig_static(Config) when is_list(Config) ->
    DataDir = ?config(data_dir, Config),
    run_test(config_static_SUITE,
	     Config,
	     {userconfig, {ct_config_xml, filename:join(DataDir, "config/config.xml")}},
             ["config_static_SUITE"]).

userconfig_dynamic(Config) when is_list(Config) ->
    run_test(config_dynamic_SUITE,
	     Config,
	     {userconfig, {config_driver, "config_server"}},
             ["config_dynamic_SUITE"]).

testspec_legacy(Config) when is_list(Config) ->
    DataDir = ?config(data_dir, Config),
    ConfigDir = ?config(config_dir, Config),
    make_spec(DataDir, ConfigDir,
	      "spec_legacy.spec",
	      [config_static_SUITE],
	      [{config, filename:join(DataDir, "config/config.txt")}]),
    run_test(config_static_SUITE,
	     Config,
	     {spec, filename:join(ConfigDir, "spec_legacy.spec")},
             []),
    file:delete(filename:join(ConfigDir, "spec_legacy.spec")).

testspec_static(Config) when is_list(Config) ->
    DataDir = ?config(data_dir, Config),
    ConfigDir = ?config(config_dir, Config),
    make_spec(DataDir, ConfigDir,
	      "spec_static.spec",
	      [config_static_SUITE],
	      [{userconfig, {ct_config_xml, filename:join(DataDir, "config/config.xml")}}]),
    run_test(config_static_SUITE,
	     Config,
	     {spec, filename:join(ConfigDir, "spec_static.spec")},
             []),
    file:delete(filename:join(ConfigDir, "spec_static.spec")).

testspec_dynamic(Config) when is_list(Config) ->
    DataDir = ?config(data_dir, Config),
    ConfigDir = ?config(config_dir, Config),
    make_spec(DataDir, ConfigDir, "spec_dynamic.spec",
	      [config_dynamic_SUITE],
	      [{userconfig, {config_driver, "config_server"}}]),
    run_test(config_dynamic_SUITE,
	     Config,
	     {spec, filename:join(ConfigDir, "spec_dynamic.spec")},
             []),
    file:delete(filename:join(ConfigDir, "spec_dynamic.spec")).



%%%-----------------------------------------------------------------
%%% HELP FUNCTIONS
%%%-----------------------------------------------------------------
make_spec(DataDir, ConfigDir, Filename, Suites, Config)->
    {ok, Fd} = file:open(filename:join(ConfigDir, Filename), [write]),
    ok = file:write(Fd,
		    io_lib:format("{suites, \"~sconfig/test/\", ~p}.~n", [DataDir, Suites])),
    lists:foreach(fun(C)-> ok=file:write(Fd, io_lib:format("~p.~n", [C])) end, Config),
    ok = file:close(Fd).

run_test(Name, Config, CTConfig, SuiteNames)->
    DataDir = ?config(data_dir, Config),
    Joiner = fun(Suite) -> filename:join(DataDir, "config/test/"++Suite) end,
    Suites = lists:map(Joiner, SuiteNames),
    {Opts,ERPid} = setup_env({suite,Suites}, Config, CTConfig),
    ok = ct_test_support:run(Opts, Config),
    TestEvents = ct_test_support:get_events(ERPid, Config),
    ct_test_support:log_events(Name,
			       reformat_events(TestEvents, ?eh),
			       ?config(config_dir, Config),
			       Opts),
    ExpEvents = events_to_check(Name),
    ok = ct_test_support:verify_events(ExpEvents, TestEvents, Config).

setup_env(Test, Config, CTConfig) ->
    Opts0 = ct_test_support:get_opts(Config),
    Level = ?config(trace_level, Config),
    EvHArgs = [{cbm,ct_test_support},{trace_level,Level}],
    Opts = Opts0 ++ [Test,{event_handler,{?eh,EvHArgs}}, CTConfig],
    ERPid = ct_test_support:start_event_receiver(Config),
    {Opts,ERPid}.

reformat_events(Events, EH) ->
    ct_test_support:reformat(Events, EH).

%%%-----------------------------------------------------------------
%%% TEST EVENTS
%%%-----------------------------------------------------------------
events_to_check(Test) ->
    %% 2 tests (ct:run_test + script_start) is default
    events_to_check(Test, 2).

events_to_check(_, 0) ->
    [];
events_to_check(Test, N) ->
    expected_events(Test) ++ events_to_check(Test, N-1).

expected_events(config_static_SUITE)->
    [
     {?eh,start_logging,{'DEF','RUNDIR'}},
     {?eh,test_start,{'DEF',{'START_TIME','LOGDIR'}}},
     {?eh,start_info,{1,1,8}},
     {?eh,tc_start,{config_static_SUITE,init_per_suite}},
     {?eh,tc_done,{config_static_SUITE,init_per_suite,ok}},
     {?eh,tc_start,{config_static_SUITE,test_get_config_simple}},
     {?eh,tc_done,{config_static_SUITE,test_get_config_simple,ok}},
     {?eh,test_stats,{1,0,{0,0}}},
     {?eh,tc_start,{config_static_SUITE,test_get_config_nested}},
     {?eh,tc_done,{config_static_SUITE,test_get_config_nested,ok}},
     {?eh,test_stats,{2,0,{0,0}}},
     {?eh,tc_start,{config_static_SUITE,test_default_suitewide}},
     {?eh,tc_done,{config_static_SUITE,test_default_suitewide,ok}},
     {?eh,test_stats,{3,0,{0,0}}},
     {?eh,tc_start,{config_static_SUITE,test_config_name_already_in_use1}},
     {?eh,tc_done,
      {config_static_SUITE,test_config_name_already_in_use1,{skipped,{config_name_already_in_use,[x1]}}}},
     {?eh,test_stats,{3,0,{1,0}}},
     {?eh,tc_start,{config_static_SUITE,test_default_tclocal}},
     {?eh,tc_done,{config_static_SUITE,test_default_tclocal,ok}},
     {?eh,test_stats,{4,0,{1,0}}},
     {?eh,tc_start,{config_static_SUITE,test_config_name_already_in_use2}},
     {?eh,tc_done,
      {config_static_SUITE,test_config_name_already_in_use2,
       {skipped,{config_name_already_in_use,[alias,x1]}}}},
     {?eh,test_stats,{4,0,{2,0}}},
     {?eh,tc_start,{config_static_SUITE,test_alias_tclocal}},
     {?eh,tc_done,{config_static_SUITE,test_alias_tclocal,ok}},
     {?eh,test_stats,{5,0,{2,0}}},
     {?eh,tc_start,{config_static_SUITE,test_get_config_undefined}},
     {?eh,tc_done,{config_static_SUITE,test_get_config_undefined,ok}},
     {?eh,test_stats,{6,0,{2,0}}},
     {?eh,tc_start,{config_static_SUITE,end_per_suite}},
     {?eh,tc_done,{config_static_SUITE,end_per_suite,ok}},
     {?eh,test_done,{'DEF','STOP_TIME'}},
     {?eh,stop_logging,[]}
    ];

expected_events(config_dynamic_SUITE)->
    [
     {?eh,start_logging,{'DEF','RUNDIR'}},
     {?eh,test_start,{'DEF',{'START_TIME','LOGDIR'}}},
     {?eh,start_info,{1,1,5}},
     {?eh,tc_start,{config_dynamic_SUITE,init_per_suite}},
     {?eh,tc_done,{config_dynamic_SUITE,init_per_suite,ok}},
     {?eh,tc_start,{config_dynamic_SUITE,test_get_known_variable}},
     {?eh,tc_done,
      {config_dynamic_SUITE,test_get_known_variable,ok}},
     {?eh,test_stats,{1,0,{0,0}}},
     {?eh,tc_start,{config_dynamic_SUITE,test_localtime_update}},
     {?eh,tc_done,{config_dynamic_SUITE,test_localtime_update,ok}},
     {?eh,test_stats,{2,0,{0,0}}},
     {?eh,tc_start,{config_dynamic_SUITE,test_server_pid}},
     {?eh,tc_done,{config_dynamic_SUITE,test_server_pid,ok}},
     {?eh,test_stats,{3,0,{0,0}}},
     {?eh,tc_start,
      {config_dynamic_SUITE,test_disappearable_variable}},
     {?eh,tc_done,
      {config_dynamic_SUITE,test_disappearable_variable,ok}},
     {?eh,test_stats,{4,0,{0,0}}},
     {?eh,tc_start,
      {config_dynamic_SUITE,test_disappearable_variable_alias}},
     {?eh,tc_done,
      {config_dynamic_SUITE,test_disappearable_variable_alias,ok}},
     {?eh,test_stats,{5,0,{0,0}}},
     {?eh,tc_start,{config_dynamic_SUITE,end_per_suite}},
     {?eh,tc_done,{config_dynamic_SUITE,end_per_suite,ok}},
     {?eh,test_done,{'DEF','STOP_TIME'}},
     {?eh,stop_logging,[]}
    ].
