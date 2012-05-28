/* win32/config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */


#define GHBN_R_SOLARIS  2
#define GHBN_R_AIX      3
#define GHBN_R_GLIBC    4


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define the brk() argument type. */
/* #undef BRK_ARG_TYPE */

/* Define the brk() return type. */
/* #undef BRK_RET_TYPE */

/* Define if you do not have a high-res. timer & want to use times() instead
   */
/* #undef CORRECT_USING_TIMES */

/* Modern style mcontext_t in MacOSX */
/* #undef DARWIN_MODERN_MCONTEXT */

/* Define if you need to include rpc/types.h to get INADDR_LOOPBACK defined */
/* #undef DEF_INADDR_LOOPBACK_IN_RPC_TYPES_H */

/* Define if you need to include winsock2.h to get INADDR_LOOPBACK defined */
#define DEF_INADDR_LOOPBACK_IN_WINSOCK2_H /**/

/* Define if you want to disable child waiter thread */
#define DISABLE_CHILD_WAITER_THREAD 1

/* Define if you want to disable vfork. */
#define DISABLE_VFORK 1

/* Define if you want to enable child waiter thread */
/* #undef ENABLE_CHILD_WAITER_THREAD */

/* Define if sbrk()/brk() wrappers can track malloc()s core memory use */
/* #undef ERTS_BRK_WRAPPERS_CAN_TRACK_MALLOC */

/* The only reason ERTS_EMU_CMDLINE_FLAGS exists is to force modification of
   config.h when the emulator command line flags are modified by configure */
#define ERTS_EMU_CMDLINE_FLAGS " -O2 -I/home/hl/otp_src_R15B01/erts/win32   -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -DERTS_MIXED_CYGWIN_VC -g  -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -DERTS_MIXED_CYGWIN_VC -I/home/hl/otp_src_R15B01/erts/win32   -DUSE_THREADS -DWIN32_THREADS  "

/* Define if you have kernel poll and want to use it */
/* #undef ERTS_ENABLE_KERNEL_POLL */

/* Define if the hybrid emulator is built */
/* #undef ERTS_HAVE_HYBRID_EMU */

/* Define if the smp emulator is built */
#define ERTS_HAVE_SMP_EMU 1

/* Define if dlopen() needs to be called before first call to dlerror() */
/* #undef ERTS_NEED_DLOPEN_BEFORE_DLERROR */

/* Define if poll() should be used instead of select() */
/* #undef ERTS_USE_POLL */

/* Define if __after_morecore_hook can track malloc()s core memory use. */
/* #undef ERTS___AFTER_MORECORE_HOOK_CAN_TRACK_MALLOC */

/* Define if bigendian */
/* #undef ETHR_BIGENDIAN */

/* Define if you get a register shortage with cmpxchg8b and position
   independent code */
/* #undef ETHR_CMPXCHG8B_REGISTER_SHORTAGE */

/* Define if you want to disable native ethread implementations */
/* #undef ETHR_DISABLE_NATIVE_IMPLS */

/* Define if you want to force usage of pthread rwlocks */
/* #undef ETHR_FORCE_PTHREAD_RWLOCK */

/* Define if you use a gcc that supports the double word cmpxchg instruction
   */
/* #undef ETHR_GCC_HAVE_DW_CMPXCHG_ASM_SUPPORT */

/* Define if you use a gcc that supports -msse2 and understand sse2 specific
   asm statements */
/* #undef ETHR_GCC_HAVE_SSE2_ASM_SUPPORT */

/* Define if you have all ethread defines */
#define ETHR_HAVE_ETHREAD_DEFINES 1

/* Define if you have libatomic_ops atomic operations */
/* #undef ETHR_HAVE_LIBATOMIC_OPS */

/* Define if you have a linux futex implementation. */
/* #undef ETHR_HAVE_LINUX_FUTEX */

/* Define if the pthread.h header file is in pthread/mit directory. */
/* #undef ETHR_HAVE_MIT_PTHREAD_H */

/* Define if you have the pthread_attr_setguardsize function. */
/* #undef ETHR_HAVE_PTHREAD_ATTR_SETGUARDSIZE */

/* Define if you have the <pthread.h> header file. */
/* #undef ETHR_HAVE_PTHREAD_H */

/* Define if you have the pthread_rwlockattr_setkind_np() function. */
/* #undef ETHR_HAVE_PTHREAD_RWLOCKATTR_SETKIND_NP */

/* Define if you have the PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP rwlock
   attribute. */
/* #undef ETHR_HAVE_PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP */

/* Define if you have the pthread_spin_lock function. */
/* #undef ETHR_HAVE_PTHREAD_SPIN_LOCK */

/* Define if you have the pthread_yield() function. */
/* #undef ETHR_HAVE_PTHREAD_YIELD */

/* Define if you have the <sched.h> header file. */
/* #undef ETHR_HAVE_SCHED_H */

/* Define if you have the sched_yield() function. */
/* #undef ETHR_HAVE_SCHED_YIELD */

/* Define if you have the <sys/time.h> header file. */
/* #undef ETHR_HAVE_SYS_TIME_H */

/* Define if you have _InterlockedAnd() */
#define ETHR_HAVE__INTERLOCKEDAND 1

/* Define if you have _InterlockedAnd64() */
/* #undef ETHR_HAVE__INTERLOCKEDAND64 */

/* Define if you have _InterlockedCompareExchange() */
#define ETHR_HAVE__INTERLOCKEDCOMPAREEXCHANGE 1

/* Define if you have _InterlockedCompareExchange128() */
/* #undef ETHR_HAVE__INTERLOCKEDCOMPAREEXCHANGE128 */

/* Define if you have _InterlockedCompareExchange64() */
#define ETHR_HAVE__INTERLOCKEDCOMPAREEXCHANGE64 1

/* Define if you have _InterlockedCompareExchange64_acq() */
/* #undef ETHR_HAVE__INTERLOCKEDCOMPAREEXCHANGE64_ACQ */

/* Define if you have _InterlockedCompareExchange64_rel() */
/* #undef ETHR_HAVE__INTERLOCKEDCOMPAREEXCHANGE64_REL */

/* Define if you have _InterlockedCompareExchange_acq() */
/* #undef ETHR_HAVE__INTERLOCKEDCOMPAREEXCHANGE_ACQ */

/* Define if you have _InterlockedCompareExchange_rel() */
/* #undef ETHR_HAVE__INTERLOCKEDCOMPAREEXCHANGE_REL */

/* Define if you have _InterlockedDecrement() */
#define ETHR_HAVE__INTERLOCKEDDECREMENT 1

/* Define if you have _InterlockedDecrement64() */
/* #undef ETHR_HAVE__INTERLOCKEDDECREMENT64 */

/* Define if you have _InterlockedDecrement64_rel() */
/* #undef ETHR_HAVE__INTERLOCKEDDECREMENT64_REL */

/* Define if you have _InterlockedDecrement_rel() */
/* #undef ETHR_HAVE__INTERLOCKEDDECREMENT_REL */

/* Define if you have _InterlockedExchange() */
#define ETHR_HAVE__INTERLOCKEDEXCHANGE 1

/* Define if you have _InterlockedExchange64() */
/* #undef ETHR_HAVE__INTERLOCKEDEXCHANGE64 */

/* Define if you have _InterlockedExchangeAdd() */
#define ETHR_HAVE__INTERLOCKEDEXCHANGEADD 1

/* Define if you have _InterlockedExchangeAdd64() */
/* #undef ETHR_HAVE__INTERLOCKEDEXCHANGEADD64 */

/* Define if you have _InterlockedExchangeAdd64_acq() */
/* #undef ETHR_HAVE__INTERLOCKEDEXCHANGEADD64_ACQ */

/* Define if you have _InterlockedExchangeAdd_acq() */
/* #undef ETHR_HAVE__INTERLOCKEDEXCHANGEADD_ACQ */

/* Define if you have _InterlockedIncrement() */
#define ETHR_HAVE__INTERLOCKEDINCREMENT 1

/* Define if you have _InterlockedIncrement64() */
/* #undef ETHR_HAVE__INTERLOCKEDINCREMENT64 */

/* Define if you have _InterlockedIncrement64_acq() */
/* #undef ETHR_HAVE__INTERLOCKEDINCREMENT64_ACQ */

/* Define if you have _InterlockedIncrement_acq() */
/* #undef ETHR_HAVE__INTERLOCKEDINCREMENT_ACQ */

/* Define if you have _InterlockedOr() */
#define ETHR_HAVE__INTERLOCKEDOR 1

/* Define if you have _InterlockedOr64() */
/* #undef ETHR_HAVE__INTERLOCKEDOR64 */

/* Define if you have __sync_add_and_fetch() for 32-bit integers */
/* #undef ETHR_HAVE___SYNC_ADD_AND_FETCH32 */

/* Define if you have __sync_add_and_fetch() for 64-bit integers */
/* #undef ETHR_HAVE___SYNC_ADD_AND_FETCH64 */

/* Define if you have __sync_fetch_and_and() for 32-bit integers */
/* #undef ETHR_HAVE___SYNC_FETCH_AND_AND32 */

/* Define if you have __sync_fetch_and_and() for 64-bit integers */
/* #undef ETHR_HAVE___SYNC_FETCH_AND_AND64 */

/* Define if you have __sync_fetch_and_or() for 32-bit integers */
/* #undef ETHR_HAVE___SYNC_FETCH_AND_OR32 */

/* Define if you have __sync_fetch_and_or() for 64-bit integers */
/* #undef ETHR_HAVE___SYNC_FETCH_AND_OR64 */

/* Define if you have __sync_val_compare_and_swap() for 128-bit integers */
/* #undef ETHR_HAVE___SYNC_VAL_COMPARE_AND_SWAP128 */

/* Define if you have __sync_val_compare_and_swap() for 32-bit integers */
/* #undef ETHR_HAVE___SYNC_VAL_COMPARE_AND_SWAP32 */

/* Define if you have __sync_val_compare_and_swap() for 64-bit integers */
/* #undef ETHR_HAVE___SYNC_VAL_COMPARE_AND_SWAP64 */

/* Define if you want to modify the default stack size */
/* #undef ETHR_MODIFIED_DEFAULT_STACK_SIZE */

/* Define if you need the <nptl/pthread.h> header file. */
/* #undef ETHR_NEED_NPTL_PTHREAD_H */

/* Define if you prefer gcc native ethread implementations */
/* #undef ETHR_PREFER_GCC_NATIVE_IMPLS */

/* Define if you prefer libatomic_ops native ethread implementations */
/* #undef ETHR_PREFER_LIBATOMIC_OPS_NATIVE_IMPLS */

/* Define if you have pthreads */
/* #undef ETHR_PTHREADS */

/* Define if pthread_yield() returns an int. */
/* #undef ETHR_PTHREAD_YIELD_RET_INT */

/* Define if sched_yield() returns an int. */
/* #undef ETHR_SCHED_YIELD_RET_INT */

/* Define to the size of AO_t if libatomic_ops is used */
/* #undef ETHR_SIZEOF_AO_T */

/* Define to the size of int */
#define ETHR_SIZEOF_INT 4

/* Define to the size of long */
#define ETHR_SIZEOF_LONG 4

/* Define to the size of long long */
#define ETHR_SIZEOF_LONG_LONG 8

/* Define to the size of pointers */
#define ETHR_SIZEOF_PTR 4

/* Define to the size of __int128_t */
#define ETHR_SIZEOF___INT128_T 0

/* Define to the size of __int64 */
#define ETHR_SIZEOF___INT64 8

/* Define if only run in Sparc PSO, or TSO mode */
/* #undef ETHR_SPARC_PSO */

/* Define if run in Sparc RMO, PSO, or TSO mode */
/* #undef ETHR_SPARC_RMO */

/* Define if only run in Sparc TSO mode */
/* #undef ETHR_SPARC_TSO */

/* Define if you can safely include both <sys/time.h> and <time.h>. */
/* #undef ETHR_TIME_WITH_SYS_TIME */

/* Define if you have win32 threads */
#define ETHR_WIN32_THREADS 1

/* Define if x86/x86_64 out of order instructions should be synchronized */
/* #undef ETHR_X86_OUT_OF_ORDER */

/* Define if you want to use clock_gettime to simulate gethrtime */
/* #undef GETHRTIME_WITH_CLOCK_GETTIME */

/* Define if building a halfword-heap 64bit emulator */
/* #undef HALFWORD_HEAP_EMULATOR */

/* Define to 1 if you have the <arpa/nameser.h> header file. */
/* #undef HAVE_ARPA_NAMESER_H */

/* Define to 1 if you have the `brk' function. */
/* #undef HAVE_BRK */

/* define if clock_gettime() works for getting process time */
/* #undef HAVE_CLOCK_GETTIME */

/* Define if you have a decl of fread that conflicts with int fread */
/* #undef HAVE_CONFLICTING_FREAD_DECLARATION */

/* Define if you have a putenv() that stores a copy of the key-value pair */
#define HAVE_COPYING_PUTENV 1

/* Define if you have cpuset_getaffinity/cpuset_setaffinity */
/* #undef HAVE_CPUSET_xETAFFINITY */

/* Define to 1 if you have the declaration of `getrlimit', and to 0 if you
   don't. */
/* #undef HAVE_DECL_GETRLIMIT */

/* Define to 1 if you have the declaration of `posix2time', and to 0 if you
   don't. */
#define HAVE_DECL_POSIX2TIME 0

/* Define to 1 if you have the declaration of `RLIMIT_STACK', and to 0 if you
   don't. */
/* #undef HAVE_DECL_RLIMIT_STACK */

/* Define to 1 if you have the declaration of `SCTPS_BOUND', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTPS_BOUND */

/* Define to 1 if you have the declaration of `SCTPS_COOKIE_ECHOED', and to 0
   if you don't. */
/* #undef HAVE_DECL_SCTPS_COOKIE_ECHOED */

/* Define to 1 if you have the declaration of `SCTPS_COOKIE_WAIT', and to 0 if
   you don't. */
/* #undef HAVE_DECL_SCTPS_COOKIE_WAIT */

/* Define to 1 if you have the declaration of `SCTPS_ESTABLISHED', and to 0 if
   you don't. */
/* #undef HAVE_DECL_SCTPS_ESTABLISHED */

/* Define to 1 if you have the declaration of `SCTPS_IDLE', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTPS_IDLE */

/* Define to 1 if you have the declaration of `SCTPS_LISTEN', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTPS_LISTEN */

/* Define to 1 if you have the declaration of `SCTPS_SHUTDOWN_ACK_SENT', and
   to 0 if you don't. */
/* #undef HAVE_DECL_SCTPS_SHUTDOWN_ACK_SENT */

/* Define to 1 if you have the declaration of `SCTPS_SHUTDOWN_PENDING', and to
   0 if you don't. */
/* #undef HAVE_DECL_SCTPS_SHUTDOWN_PENDING */

/* Define to 1 if you have the declaration of `SCTPS_SHUTDOWN_RECEIVED', and
   to 0 if you don't. */
/* #undef HAVE_DECL_SCTPS_SHUTDOWN_RECEIVED */

/* Define to 1 if you have the declaration of `SCTPS_SHUTDOWN_SENT', and to 0
   if you don't. */
/* #undef HAVE_DECL_SCTPS_SHUTDOWN_SENT */

/* Define to 1 if you have the declaration of `SCTP_ABORT', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTP_ABORT */

/* Define to 1 if you have the declaration of `SCTP_ADDR_CONFIRMED', and to 0
   if you don't. */
/* #undef HAVE_DECL_SCTP_ADDR_CONFIRMED */

/* Define to 1 if you have the declaration of `SCTP_ADDR_OVER', and to 0 if
   you don't. */
/* #undef HAVE_DECL_SCTP_ADDR_OVER */

/* Define to 1 if you have the declaration of `SCTP_BOUND', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTP_BOUND */

/* Define to 1 if you have the declaration of `SCTP_CLOSED', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTP_CLOSED */

/* Define to 1 if you have the declaration of `SCTP_COOKIE_ECHOED', and to 0
   if you don't. */
/* #undef HAVE_DECL_SCTP_COOKIE_ECHOED */

/* Define to 1 if you have the declaration of `SCTP_COOKIE_WAIT', and to 0 if
   you don't. */
/* #undef HAVE_DECL_SCTP_COOKIE_WAIT */

/* Define to 1 if you have the declaration of `SCTP_DELAYED_ACK_TIME', and to
   0 if you don't. */
/* #undef HAVE_DECL_SCTP_DELAYED_ACK_TIME */

/* Define to 1 if you have the declaration of `SCTP_EMPTY', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTP_EMPTY */

/* Define to 1 if you have the declaration of `SCTP_EOF', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTP_EOF */

/* Define to 1 if you have the declaration of `SCTP_ESTABLISHED', and to 0 if
   you don't. */
/* #undef HAVE_DECL_SCTP_ESTABLISHED */

/* Define to 1 if you have the declaration of `SCTP_LISTEN', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTP_LISTEN */

/* Define to 1 if you have the declaration of `SCTP_SENDALL', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SCTP_SENDALL */

/* Define to 1 if you have the declaration of `SCTP_SHUTDOWN_ACK_SENT', and to
   0 if you don't. */
/* #undef HAVE_DECL_SCTP_SHUTDOWN_ACK_SENT */

/* Define to 1 if you have the declaration of `SCTP_SHUTDOWN_PENDING', and to
   0 if you don't. */
/* #undef HAVE_DECL_SCTP_SHUTDOWN_PENDING */

/* Define to 1 if you have the declaration of `SCTP_SHUTDOWN_RECEIVED', and to
   0 if you don't. */
/* #undef HAVE_DECL_SCTP_SHUTDOWN_RECEIVED */

/* Define to 1 if you have the declaration of `SCTP_SHUTDOWN_SENT', and to 0
   if you don't. */
/* #undef HAVE_DECL_SCTP_SHUTDOWN_SENT */

/* Define to 1 if you have the declaration of `SCTP_UNORDERED', and to 0 if
   you don't. */
/* #undef HAVE_DECL_SCTP_UNORDERED */

/* Define to 1 if you have the declaration of `setrlimit', and to 0 if you
   don't. */
/* #undef HAVE_DECL_SETRLIMIT */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_DIRENT_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the `dlopen' function. */
/* #undef HAVE_DLOPEN */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define if you have the 'end' symbol */
/* #undef HAVE_END_SYMBOL */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdatasync' function. */
/* #undef HAVE_FDATASYNC */

/* Define to 1 if you have the `finite' function. */
/* #undef HAVE_FINITE */

/* Define to 1 if you have the `flockfile' function. */
/* #undef HAVE_FLOCKFILE */

/* Define to 1 if you have the `fork' function. */
/* #undef HAVE_FORK */

/* Define to 1 if you have the `fpsetmask' function. */
/* #undef HAVE_FPSETMASK */

/* Define to 1 if you have the `fstat' function. */
#define HAVE_FSTAT 1

/* Define if you have fwrite_unlocked */
/* #undef HAVE_FWRITE_UNLOCKED */

/* Define to 1 if you have a good `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `gethostbyname2' function. */
/* #undef HAVE_GETHOSTBYNAME2 */

/* Define to flavour of gethostbyname_r */
/* #undef HAVE_GETHOSTBYNAME_R */

/* Define to 1 if you have the `gethrtime' function. */
/* #undef HAVE_GETHRTIME */

/* define if gethrvtime() works and uses ioctl() to /proc/self */
/* #undef HAVE_GETHRVTIME_PROCFS_IOCTL */

/* Define to 1 if you have the `getifaddrs' function. */
/* #undef HAVE_GETIFADDRS */

/* Define to 1 if you have the `getipnodebyaddr' function. */
/* #undef HAVE_GETIPNODEBYADDR */

/* Define to 1 if you have the `getipnodebyname' function. */
/* #undef HAVE_GETIPNODEBYNAME */

/* Define to 1 if you have a good `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define to 1 if you have the `gmtime_r' function. */
/* #undef HAVE_GMTIME_R */

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* Define to 1 if you have the `ieee_handler' function. */
/* #undef HAVE_IEEE_HANDLER */

/* Define to 1 if you have the <ifaddrs.h> header file. */
/* #undef HAVE_IFADDRS_H */

/* Define if ipv6 is present */
#define HAVE_IN6 1

/* Define to 1 if you have the `inet_pton' function. */
/* #undef HAVE_INET_PTON */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Early linux used in_addr6 instead of in6_addr, define if you have this */
/* #undef HAVE_IN_ADDR6_STRUCT */

/* Define to 1 if you have the `isinf' function. */
/* #undef HAVE_ISINF */

/* Define to 1 if you have the `isnan' function. */
/* #undef HAVE_ISNAN */

/* Define if you have kstat */
/* #undef HAVE_KSTAT */

/* Define to 1 if you have the <langinfo.h> header file. */
/* #undef HAVE_LANGINFO_H */

/* Define to 1 if you have the `dl' library (-ldl). */
/* #undef HAVE_LIBDL */

/* Define to 1 if you have the `dlpi' library (-ldlpi). */
/* #undef HAVE_LIBDLPI */

/* Define to 1 if you have the <libdlpi.h> header file. */
/* #undef HAVE_LIBDLPI_H */

/* Define to 1 if you have the `inet' library (-linet). */
/* #undef HAVE_LIBINET */

/* Define to 1 if you have the `m' library (-lm). */
/* #undef HAVE_LIBM */

/* Define to 1 if you have the `util' library (-lutil). */
/* #undef HAVE_LIBUTIL */

/* Define to 1 if you have the `z' library (-lz). */
/* #undef HAVE_LIBZ */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `mallopt' function. */
/* #undef HAVE_MALLOPT */

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if the pthread.h header file is in pthread/mit directory. */
/* #undef HAVE_MIT_PTHREAD_H */

/* Define to 1 if you have the `mmap' function. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the `mremap' function. */
/* #undef HAVE_MREMAP */

/* Define if setsockopt() accepts multicast options */
/* #undef HAVE_MULTICAST_SUPPORT */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netpacket/packet.h> header file. */
/* #undef HAVE_NETPACKET_PACKET_H */

/* Define to 1 if you have the <net/errno.h> header file. */
/* #undef HAVE_NET_ERRNO_H */

/* Define to 1 if you have the <net/if_dl.h> header file. */
/* #undef HAVE_NET_IF_DL_H */

/* Define to 1 if you have the `nl_langinfo' function. */
/* #undef HAVE_NL_LANGINFO */

/* Define if you don't have a definition of INADDR_LOOPBACK */
/* #undef HAVE_NO_INADDR_LOOPBACK */

/* Define to 1 if you have the `openpty' function. */
/* #undef HAVE_OPENPTY */

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Define to 1 if you have the <poll.h> header file. */
/* #undef HAVE_POLL_H */

/* Define to 1 if you have the `posix2time' function. */
/* #undef HAVE_POSIX2TIME */

/* Define to 1 if you have the `posix_fadvise' function. */
/* #undef HAVE_POSIX_FADVISE */

/* Define to 1 if you have the `pread' function. */
/* #undef HAVE_PREAD */

/* Define if you have processor_bind functionality */
/* #undef HAVE_PROCESSOR_BIND */

/* Define if you have pset functionality */
/* #undef HAVE_PSET */

/* Define if you have the <pthread.h> header file. */
/* #undef HAVE_PTHREAD_H */

/* Define to 1 if you have the <pty.h> header file. */
/* #undef HAVE_PTY_H */

/* Define if you have putc_unlocked */
/* #undef HAVE_PUTC_UNLOCKED */

/* Define to 1 if you have the `pwrite' function. */
/* #undef HAVE_PWRITE */

/* Define to 1 if you have the `res_gethostbyname' function. */
/* #undef HAVE_RES_GETHOSTBYNAME */

/* Define to 1 if you have the `sbrk' function. */
/* #undef HAVE_SBRK */

/* Define if you have sched_getaffinity/sched_setaffinity */
/* #undef HAVE_SCHED_xETAFFINITY */

/* Define to 1 if you have the `sctp_bindx' function. */
/* #undef HAVE_SCTP_BINDX */

/* Define to 1 if you have the <netinet/sctp.h> header file */
/* #undef HAVE_SCTP_H */

/* Define to 1 if you have the `sctp_peeloff' function. */
/* #undef HAVE_SCTP_PEELOFF */

/* Define to 1 if you have the <sdkddkver.h> header file. */
#define HAVE_SDKDDKVER_H 1

/* Define to 1 if you have the `sendfile' function. */
/* #undef HAVE_SENDFILE */

/* Define to 1 if you have the `sendfilev' function. */
/* #undef HAVE_SENDFILEV */

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setsid' function. */
/* #undef HAVE_SETSID */

/* Define if we have socklen_t */
/* #undef HAVE_SOCKLEN_T */

/* define if you have the Solaris/ultrasparc /dev/perfmon interface */
/* #undef HAVE_SOLARIS_SPARC_PERFMON */

/* Define if you have SO_BSDCOMPAT flag on sockets */
/* #undef HAVE_SO_BSDCOMPAT */

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strncasecmp' function. */
/* #undef HAVE_STRNCASECMP */

/* Define to 1 if `ifr_enaddr' is a member of `struct ifreq'. */
/* #undef HAVE_STRUCT_IFREQ_IFR_ENADDR */

/* Define to 1 if `ifr_hwaddr' is a member of `struct ifreq'. */
/* #undef HAVE_STRUCT_IFREQ_IFR_HWADDR */

/* Define to 1 if `spp_flags' is a member of `struct sctp_paddrparams'. */
/* #undef HAVE_STRUCT_SCTP_PADDRPARAMS_SPP_FLAGS */

/* Define to 1 if `spp_pathmtu' is a member of `struct sctp_paddrparams'. */
/* #undef HAVE_STRUCT_SCTP_PADDRPARAMS_SPP_PATHMTU */

/* Define to 1 if `spp_sackdelay' is a member of `struct sctp_paddrparams'. */
/* #undef HAVE_STRUCT_SCTP_PADDRPARAMS_SPP_SACKDELAY */

/* Define to 1 if `sre_data' is a member of `struct sctp_remote_error'. */
/* #undef HAVE_STRUCT_SCTP_REMOTE_ERROR_SRE_DATA */

/* Define to 1 if `ssf_data' is a member of `struct sctp_send_failed'. */
/* #undef HAVE_STRUCT_SCTP_SEND_FAILED_SSF_DATA */

/* Define to 1 if you have the <syslog.h> header file. */
/* #undef HAVE_SYSLOG_H */

/* Define if you have <sys/devpoll.h> header file. */
/* #undef HAVE_SYS_DEVPOLL_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define if you have the <sys/epoll.h> header file. */
/* #undef HAVE_SYS_EPOLL_H */

/* Define if you have <sys/event.h> header file. */
/* #undef HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/resource.h> header file */
/* #undef HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/sdt.h> header file. */
/* #undef HAVE_SYS_SDT_H */

/* Define to 1 if you have the <sys/socketio.h> header file. */
/* #undef HAVE_SYS_SOCKETIO_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stropts.h> header file. */
/* #undef HAVE_SYS_STROPTS_H */

/* Define to 1 if you have the <sys/sysctl.h> header file. */
/* #undef HAVE_SYS_SYSCTL_H */

/* Define to 1 if you have the <sys/time.h> header file. */
/* #undef HAVE_SYS_TIME_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef HAVE_SYS_UIO_H */

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
/* #undef HAVE_SYS_WAIT_H */

/* Define if termcap functions exists */
/* #undef HAVE_TERMCAP */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the <utmp.h> header file. */
/* #undef HAVE_UTMP_H */

/* Define to 1 if you have the `vfork' function. */
/* #undef HAVE_VFORK */

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the <windows.h> header file. */
#define HAVE_WINDOWS_H 1

/* Define to 1 if you have the <winsock2.h> header file. */
#define HAVE_WINSOCK2_H 1

/* Define to 1 if `fork' works. */
/* #undef HAVE_WORKING_FORK */

/* Define if you have a working posix_openpt implementation */
/* #undef HAVE_WORKING_POSIX_OPENPT */

/* Define to 1 if `vfork' works. */
/* #undef HAVE_WORKING_VFORK */

/* Define to 1 if you have the `writev' function. */
/* #undef HAVE_WRITEV */

/* Define to 1 if you have the <ws2tcpip.h> header file. */
#define HAVE_WS2TCPIP_H 1

/* Define to 1 if you have the `_brk' function. */
/* #undef HAVE__BRK */

/* Define if you have the '_end' symbol */
/* #undef HAVE__END_SYMBOL */

/* Define to 1 if you have the `_sbrk' function. */
/* #undef HAVE__SBRK */

/* Define to 1 if you have the `__brk' function. */
/* #undef HAVE___BRK */

/* Define to 1 if you have the `__sbrk' function. */
/* #undef HAVE___SBRK */

/* Define to enable HiPE */
/* #undef HIPE */

/* define if h_errno is declared (in some way) in a system header file */
/* #undef H_ERRNO_DECLARED */

/* Define if netdb.h needs struct sockaddr_in ans in.h CAN be included before
   */
/* #undef NETDB_H_NEEDS_IN_H */

/* Define if floating points exceptions are non-existing/not reliable */
#define NO_FPE_SIGNALS /**/

/* Defined if no found C compiler can handle jump tables */
/* #undef NO_JUMP_TABLE */

/* Define if you dont have salen */
#define NO_SA_LEN 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define if you wish to redefine FD_SETSIZE to be able to select on more fd
   */
/* #undef REDEFINE_FD_SETSIZE */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define the sbrk() argument type. */
/* #undef SBRK_ARG_TYPE */

/* Define the sbrk() return type. */
/* #undef SBRK_RET_TYPE */

/* The size of `AO_t', as computed by sizeof. */
/* #undef SIZEOF_AO_T */

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 4

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* The size of `__int128_t', as computed by sizeof. */
#define SIZEOF___INT128_T 0

/* The size of `__int64', as computed by sizeof. */
#define SIZEOF___INT64 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* define if the variable sys_errlist is declared in a system header file */
/* #undef SYS_ERRLIST_DECLARED */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
/* #undef TIME_WITH_SYS_TIME */

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define if you want to use dtrace for dynamic tracing */
/* #undef USE_DTRACE */

/* Define if you want to use dynamic tracing */
/* #undef USE_DYNAMIC_TRACE */

/* Define if you have matherr() function and struct exception type */
/* #undef USE_MATHERR */

/* Define to enable hrvtime() on Linux systems with perfctr extension */
/* #undef USE_PERFCTR */

/* Define if select() should be used instead of poll() */
#define USE_SELECT 1

/* Define if you want to use systemtap for dynamic tracing */
/* #undef USE_SYSTEMTAP */

/* Define to enable VM dynamic trace probes */
/* #undef USE_VM_PROBES */

/* Define if windows.h includes winsock2.h */
/* #undef WINDOWS_H_INCLUDES_WINSOCK2_H */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
#define pid_t int

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define as `fork' if `vfork' does not work. */
#define vfork fork


/* Redefine in6_addr. XXX this should be moved to the files where it's used? */
#ifdef HAVE_IN_ADDR6_STRUCT
#define in6_addr in_addr6
#endif

/* Define a reasonable default for INADDR_LOOPBACK */
/* XXX this should be moved to the files where it's used? */
#ifdef HAVE_NO_INADDR_LOOPBACK
#define INADDR_LOOPBACK (u_long)0x7F000001
#endif

#ifdef REDEFINE_FD_SETSIZE
#define FD_SETSIZE 1024
#endif
 
#ifdef HAVE_GETHRVTIME_PROCFS_IOCTL
#define HAVE_GETHRVTIME
#endif

#ifndef HAVE_FINITE
# if defined(HAVE_ISINF) && defined(HAVE_ISNAN)
#  define USE_ISINF_ISNAN
# endif
#endif

#if defined(DEBUG) && defined(USE_THREADS) && !defined(ERTS_ENABLE_LOCK_CHECK)
#define ERTS_ENABLE_LOCK_CHECK 1
#endif
