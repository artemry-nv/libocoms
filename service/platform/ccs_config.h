/* service/platform/ccs_config.h.  Generated from ccs_config.h.in by configure.  */
/* service/platform/ccs_config.h.in.  Generated from configure.ac by autoheader.  */

/* -*- c -*-
 *
 * Copyright (c) 2004-2005 The Trustees of Indiana University.
 *                         All rights reserved.
 * Copyright (c) 2004-2005 The Trustees of the University of Tennessee.
 *                         All rights reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 *
 * Function: - OS, CPU and compiler dependent configuration
 */

#ifndef CCS_CONFIG_H
#define CCS_CONFIG_H

/*#include "ccs_config_top.h" */



/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Alignment of type _Bool */
#define CCS_ALIGNMENT_BOOL 1

/* Alignment of type char */
#define CCS_ALIGNMENT_CHAR 1

/* Alignment of type double */
#define CCS_ALIGNMENT_DOUBLE 8

/* Alignment of type double _Complex */
#define CCS_ALIGNMENT_DOUBLE_COMPLEX 8

/* Alignment of type float */
#define CCS_ALIGNMENT_FLOAT 4

/* Alignment of type float _Complex */
#define CCS_ALIGNMENT_FLOAT_COMPLEX 4

/* Alignment of type int */
#define CCS_ALIGNMENT_INT 4

/* Alignment of type int128_t */
/* #undef CCS_ALIGNMENT_INT128 */

/* Alignment of type int16_t */
#define CCS_ALIGNMENT_INT16 2

/* Alignment of type int32_t */
#define CCS_ALIGNMENT_INT32 4

/* Alignment of type int64_t */
#define CCS_ALIGNMENT_INT64 8

/* Alignment of type int8_t */
#define CCS_ALIGNMENT_INT8 1

/* Alignment of type long */
#define CCS_ALIGNMENT_LONG 8

/* Alignment of type long double */
#define CCS_ALIGNMENT_LONG_DOUBLE 16

/* Alignment of type long double _Complex */
#define CCS_ALIGNMENT_LONG_DOUBLE_COMPLEX 16

/* Alignment of type long long */
#define CCS_ALIGNMENT_LONG_LONG 8

/* Alignment of type short */
#define CCS_ALIGNMENT_SHORT 2

/* Alignment of type void * */
#define CCS_ALIGNMENT_VOID_P 8

/* Alignment of type wchar_t */
#define CCS_ALIGNMENT_WCHAR 4

/* set to 1 if word-size integers must be aligned to word-size padding to
   prevent bus errors */
#define CCS_ALIGN_WORD_SIZE_INTEGERS 0

/* CCS architecture string */
#define CCS_ARCH "x86_64-unknown-linux-gnu"

/* Assembly align directive expects logarithmic value */
#define CCS_ASM_ALIGN_LOG 

/* Assembly directive for exporting symbols */
#define CCS_ASM_GLOBAL ".globl"

/* Assembly prefix for gsym labels */
#define CCS_ASM_GSYM ""

/* Assembly suffix for labels */
#define CCS_ASM_LABEL_SUFFIX ":"

/* Assembly prefix for lsym labels */
#define CCS_ASM_LSYM ".L"

/* Do we need to give a .size directive */
#define CCS_ASM_SIZE "1"

/* Whether we can do 64bit assembly operations or not. Should not be used
   outside of the assembly header files */
#define CCS_ASM_SUPPORT_64BIT 1

/* Assembly directive for setting text section */
#define CCS_ASM_TEXT ".text"

/* How to set function type in .type directive */
#define CCS_ASM_TYPE "@"

/* Architecture type of assembly to use for atomic operations */
#define CCS_ASSEMBLY_ARCH CCS_AMD64

/* Format of assembly file */
#define CCS_ASSEMBLY_FORMAT "default-.text-.globl-:--.L-@-1-0-1-1-1"

/* The compiler $lower which OMPI was built with */
#define CCS_BUILD_PLATFORM_COMPILER_FAMILYID 0

/* The compiler $lower which OMPI was built with */
#define CCS_BUILD_PLATFORM_COMPILER_FAMILYNAME UNKNOWN

/* The compiler $lower which OMPI was built with */
#define CCS_BUILD_PLATFORM_COMPILER_VERSION 0

/* The compiler $lower which OMPI was built with */
#define CCS_BUILD_PLATFORM_COMPILER_VERSION_STR UNKNOWN

/* OMPI underlying C compiler */
#define CCS_CC "gcc"

/* Use static const char[] strings for C files */
#define CCS_CC_USE_CONST_CHAR_IDENT 0

/* Use #ident strings for C files */
#define CCS_CC_USE_IDENT 1

/* Use #pragma comment for C files */
#define CCS_CC_USE_PRAGMA_COMMENT 

/* Use #pragma ident strings for C files */
#define CCS_CC_USE_PRAGMA_IDENT 0

/* Whether we want cuda device pointer support */
#define CCS_CUDA_SUPPORT 0

/* Whether C compiler supports DEC style inline assembly */
#define CCS_C_DEC_INLINE_ASSEMBLY 0

/* Whether C compiler supports GCC style inline assembly */
#define CCS_C_GCC_INLINE_ASSEMBLY 1

/* Whether C compiler supports __builtin_expect */
#define CCS_C_HAVE_BUILTIN_EXPECT 1

/* Whether C compiler supports __builtin_prefetch */
#define CCS_C_HAVE_BUILTIN_PREFETCH 1

/* Whether C compiler supports XLC style inline assembly */
#define CCS_C_XLC_INLINE_ASSEMBLY 0

/* Whether we want checkpoint/restart enabled debugging functionality or not
   */
#define CCS_ENABLE_CRDEBUG 0

/* Whether we want developer-level debugging code or not */
#define CCS_ENABLE_DEBUG 0

/* Enable fault tolerance general components and logic */
#define CCS_ENABLE_FT 0

/* Enable fault tolerance checkpoint/restart components and logic */
#define CCS_ENABLE_FT_CR 0

/* Enable fault tolerance thread in Open PAL */
#define CCS_ENABLE_FT_THREAD 0

/* Enable features required for heterogeneous support */
#define CCS_ENABLE_HETEROGENEOUS_SUPPORT 0

/* Enable IPv6 support, but only if the underlying system supports it */
#define CCS_ENABLE_IPV6 0

/* Whether we want the memory profiling or not */
#define CCS_ENABLE_MEM_DEBUG 0

/* Whether we want the memory profiling or not */
#define CCS_ENABLE_MEM_PROFILE 0

/* Whether we should enable thread support within the CCS code base */
#define CCS_ENABLE_MULTI_THREADS 0

/* Hardcode the CCS progress thread to be off */
#define CCS_ENABLE_PROGRESS_THREADS 0

/* Whether user wants PTY support or not */
#define CCS_ENABLE_PTY_SUPPORT 1

/* Enable run-time tracing of internal functions */
#define CCS_ENABLE_TRACE 0

/* Bogus type for CCS */
#define CCS_FORTRAN_HANDLE_MAX 128

/* Whether there is an atomic assembly file available */
#define CCS_HAVE_ASM_FILE 0

/* Whether your compiler has __attribute__ or not */
#define CCS_HAVE_ATTRIBUTE 1

/* Whether your compiler has __attribute__ aligned or not */
#define CCS_HAVE_ATTRIBUTE_ALIGNED 1

/* Whether your compiler has __attribute__ always_inline or not */
#define CCS_HAVE_ATTRIBUTE_ALWAYS_INLINE 1

/* Whether your compiler has __attribute__ cold or not */
#define CCS_HAVE_ATTRIBUTE_COLD 1

/* Whether your compiler has __attribute__ const or not */
#define CCS_HAVE_ATTRIBUTE_CONST 1

/* Whether your compiler has __attribute__ deprecated or not */
#define CCS_HAVE_ATTRIBUTE_DEPRECATED 1

/* Whether your compiler has __attribute__ deprecated with optional argument
   */
#define CCS_HAVE_ATTRIBUTE_DEPRECATED_ARGUMENT 0

/* Whether your compiler has __attribute__ format or not */
#define CCS_HAVE_ATTRIBUTE_FORMAT 0

/* Whether your compiler has __attribute__ format and it works on function
   pointers */
#define CCS_HAVE_ATTRIBUTE_FORMAT_FUNCPTR 0

/* Whether your compiler has __attribute__ hot or not */
#define CCS_HAVE_ATTRIBUTE_HOT 1

/* Whether your compiler has __attribute__ malloc or not */
#define CCS_HAVE_ATTRIBUTE_MALLOC 1

/* Whether your compiler has __attribute__ may_alias or not */
#define CCS_HAVE_ATTRIBUTE_MAY_ALIAS 1

/* Whether your compiler has __attribute__ nonnull or not */
#define CCS_HAVE_ATTRIBUTE_NONNULL 0

/* Whether your compiler has __attribute__ noreturn or not */
#define CCS_HAVE_ATTRIBUTE_NORETURN 1

/* Whether your compiler has __attribute__ noreturn and it works on function
   pointers */
#define CCS_HAVE_ATTRIBUTE_NORETURN_FUNCPTR 1

/* Whether your compiler has __attribute__ no_instrument_function or not */
#define CCS_HAVE_ATTRIBUTE_NO_INSTRUMENT_FUNCTION 1

/* Whether your compiler has __attribute__ packed or not */
#define CCS_HAVE_ATTRIBUTE_PACKED 1

/* Whether your compiler has __attribute__ pure or not */
#define CCS_HAVE_ATTRIBUTE_PURE 1

/* Whether your compiler has __attribute__ sentinel or not */
#define CCS_HAVE_ATTRIBUTE_SENTINEL 0

/* Whether your compiler has __attribute__ unused or not */
#define CCS_HAVE_ATTRIBUTE_UNUSED 1

/* Whether your compiler has __attribute__ visibility or not */
#define CCS_HAVE_ATTRIBUTE_VISIBILITY 1

/* Whether your compiler has __attribute__ warn unused result or not */
#define CCS_HAVE_ATTRIBUTE_WARN_UNUSED_RESULT 1

/* Whether your compiler has __attribute__ weak alias or not */
#define CCS_HAVE_ATTRIBUTE_WEAK_ALIAS 1

/* whether qsort is broken or not */
#define CCS_HAVE_BROKEN_QSORT 0

/* Do not use outside of mpi.h. Define to 1 if the system has the type `long
   long'. */
#define CCS_HAVE_LONG_LONG 1

/* Whether libltdl appears to have the lt_dladvise interface */
#define CCS_HAVE_LTDL_ADVISE 1

/* Do we have POSIX threads */
#define CCS_HAVE_POSIX_THREADS 1

/* If PTHREADS implementation supports PTHREAD_MUTEX_ERRORCHECK */
#define CCS_HAVE_PTHREAD_MUTEX_ERRORCHECK 1

/* If PTHREADS implementation supports PTHREAD_MUTEX_ERRORCHECK_NP */
#define CCS_HAVE_PTHREAD_MUTEX_ERRORCHECK_NP 1

/* Whether we have SA_RESTART in <signal.h> or not */
#define CCS_HAVE_SA_RESTART 1

/* Do we have native Solaris threads */
#define CCS_HAVE_SOLARIS_THREADS 0

/* Do not use outside of mpi.h. Define to 1 if you have the <sys/synch.h>
   header file. */
/* #undef CCS_HAVE_SYS_SYNCH_H */

/* Do not use outside of mpi.h. Define to 1 if you have the <sys/time.h>
   header file. */
#define CCS_HAVE_SYS_TIME_H 1

/* Whether we have __va_copy or not */
#define CCS_HAVE_UNDERSCORE_VA_COPY 1

/* Whether we have va_copy or not */
#define CCS_HAVE_VA_COPY 1

/* Whether we have weak symbols or not */
#define CCS_HAVE_WEAK_SYMBOLS 1

/* Define to 1 ifyou have the declaration of _SC_NPROCESSORS_ONLN, and to 0
   otherwise */
#define CCS_HAVE__SC_NPROCESSORS_ONLN 1

/* ident string for Open MPI */
#define CCS_IDENT_STRING ""

/* Whether we are using the internal libltdl or not */
#define CCS_LIBLTDL_INTERNAL 1

/* Maximum length of datarep strings (default is 128) */
#define CCS_MAX_DATAREP_STRING 128

/* Maximum length of error strings (default is 256) */
#define CCS_MAX_ERROR_STRING 256

/* Maximum length of info keys (default is 36) */
#define CCS_MAX_INFO_KEY 36

/* Maximum length of info vals (default is 256) */
#define CCS_MAX_INFO_VAL 256

/* Maximum length of object names (default is 64) */
#define CCS_MAX_OBJECT_NAME 64

/* Maximum length of port names (default is 1024) */
#define CCS_MAX_PORT_NAME 1024

/* Maximum length of processor names (default is 256) */
#define CCS_MAX_PROCESSOR_NAME 256

/* Size of the MPI_Offset */
#define CCS_MPI_OFFSET_SIZE 8

/* Type of MPI_Offset -- has to be defined here and typedef'ed later because
   mpi.h does not get AC SUBST's */
#define CCS_MPI_OFFSET_TYPE long long

/* Whether the C compiler supports "bool" without any other help (such as
   <stdbool.h>) */
#define CCS_NEED_C_BOOL 1

/* MPI datatype corresponding to MPI_Offset */
#define CCS_OFFSET_DATATYPE MPI_LONG_LONG

/* package/branding string for Open MPI */
#define CCS_PACKAGE_STRING "Open MPI igoru@hpc-mtr-nfs Distribution"

/* Whether r notation is used for ppc registers */
/* #undef CCS_POWERPC_R_REGISTERS */

/* type to use for ptrdiff_t */
#define CCS_PTRDIFF_TYPE ptrdiff_t

/* Do not use outside of mpi.h. Define to 1 if you have the ANSI C header
   files. */
#define CCS_STDC_HEADERS 1

/* Do threads have different pids (pthreads on linux) */
/* #undef CCS_THREADS_HAVE_DIFFERENT_PIDS */

/* Whether to use <stdbool.h> or not */
#define CCS_USE_STDBOOL_H 1

/* Enable per-user config files */
#define CCS_WANT_HOME_CONFIG_FILES 1

/* Whether to include support for libltdl or not */
#define CCS_WANT_LIBLTDL 1

/* if want pretty-print stack trace feature */
#define CCS_WANT_PRETTY_PRINT_STACKTRACE 1

/* whether we want to have smp locks in atomic ops or not */
#define CCS_WANT_SMP_LOCKS 1

/* Define to 1 if you have the <aio.h> header file. */
#define HAVE_AIO_H 1

/* Define to 1 if you have the <alloca.h> header file. */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if you have the `ceil' function. */
#define HAVE_CEIL 1

/* Define to 1 if you have the <crt_externs.h> header file. */
/* #undef HAVE_CRT_EXTERNS_H */

/* Define to 1 if you have the `dbm_open' function. */
/* #undef HAVE_DBM_OPEN */

/* Define to 1 if you have the `dbopen' function. */
/* #undef HAVE_DBOPEN */

/* Define to 1 if you have the <db.h> header file. */
/* #undef HAVE_DB_H */

/* Define to 1 if you have the declaration of `AF_INET6', and to 0 if you
   don't. */
#define HAVE_DECL_AF_INET6 1

/* Define to 1 if you have the declaration of `AF_UNSPEC', and to 0 if you
   don't. */
#define HAVE_DECL_AF_UNSPEC 1

/* Define to 1 if you have the declaration of `PF_INET6', and to 0 if you
   don't. */
#define HAVE_DECL_PF_INET6 1

/* Define to 1 if you have the declaration of `PF_UNSPEC', and to 0 if you
   don't. */
#define HAVE_DECL_PF_UNSPEC 1

/* Define to 1 if you have the declaration of `RLIMIT_MEMLOCK', and to 0 if
   you don't. */
#define HAVE_DECL_RLIMIT_MEMLOCK 1

/* Define to 1 if you have the declaration of `RLIMIT_NPROC', and to 0 if you
   don't. */
#define HAVE_DECL_RLIMIT_NPROC 1

/* Define to 1 if you have the declaration of `__func__', and to 0 if you
   don't. */
#define HAVE_DECL___FUNC__ 1

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirname' function. */
#define HAVE_DIRNAME 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if the system has the type `double _Complex'. */
#define HAVE_DOUBLE__COMPLEX 1

/* Define to 1 if you have the <err.h> header file. */
#define HAVE_ERR_H 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the `execve' function. */
#define HAVE_EXECVE 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if the system has the type `float _Complex'. */
#define HAVE_FLOAT__COMPLEX 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `getpwuid' function. */
#define HAVE_GETPWUID 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define to 1 if you have the <hostLib.h> header file. */
/* #undef HAVE_HOSTLIB_H */

/* Define to 1 if you have the <ifaddrs.h> header file. */
#define HAVE_IFADDRS_H 1

/* Define to 1 if the system has the type `int128_t'. */
/* #undef HAVE_INT128_T */

/* Define to 1 if the system has the type `int16_t'. */
#define HAVE_INT16_T 1

/* Define to 1 if the system has the type `int32_t'. */
#define HAVE_INT32_T 1

/* Define to 1 if the system has the type `int64_t'. */
#define HAVE_INT64_T 1

/* Define to 1 if the system has the type `int8_t'. */
#define HAVE_INT8_T 1

/* Define to 1 if the system has the type `intptr_t'. */
#define HAVE_INTPTR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <ioLib.h> header file. */
/* #undef HAVE_IOLIB_H */

/* Define to 1 if you have the `isatty' function. */
#define HAVE_ISATTY 1

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define HAVE_LIBNSL 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if the system has the type `long double'. */
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if the system has the type `long double _Complex'. */
#define HAVE_LONG_DOUBLE__COMPLEX 1

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkfifo' function. */
#define HAVE_MKFIFO 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if the system has the type `mode_t'. */
#define HAVE_MODE_T 1

/* Define to 1 if you have the <ndbm.h> header file. */
/* #undef HAVE_NDBM_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the <net/uio.h> header file. */
/* #undef HAVE_NET_UIO_H */

/* Define to 1 if you have the `openpty' function. */
#define HAVE_OPENPTY 1

/* Define to 1 if you have the `pipe' function. */
#define HAVE_PIPE 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the `ptsname' function. */
#define HAVE_PTSNAME 1

/* Define to 1 if you have the <pty.h> header file. */
#define HAVE_PTY_H 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `regcmp' function. */
/* #undef HAVE_REGCMP */

/* Define to 1 if you have the `regexec' function. */
#define HAVE_REGEXEC 1

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the `regfree' function. */
#define HAVE_REGFREE 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the `sched_yield' function. */
#define HAVE_SCHED_YIELD 1

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the <shlwapi.h> header file. */
/* #undef HAVE_SHLWAPI_H */

/* Define to 1 if `si_band' is a member of `siginfo_t'. */
#define HAVE_SIGINFO_T_SI_BAND 1

/* Define to 1 if `si_fd' is a member of `siginfo_t'. */
#define HAVE_SIGINFO_T_SI_FD 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `socketpair' function. */
#define HAVE_SOCKETPAIR 1

/* Define to 1 if the system has the type `socklen_t'. */
#define HAVE_SOCKLEN_T 1

/* Define to 1 if you have the <sockLib.h> header file. */
/* #undef HAVE_SOCKLIB_H */

/* Define to 1 if the system has the type `ssize_t'. */
#define HAVE_SSIZE_T 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdbool.h> header file. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncpy_s' function. */
/* #undef HAVE_STRNCPY_S */

/* Define to 1 if you have the <stropts.h> header file. */
/* #undef HAVE_STROPTS_H */

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if `d_type' is a member of `struct dirent'. */
#define HAVE_STRUCT_DIRENT_D_TYPE 1

/* Define to 1 if the system has the type `struct sockaddr_in'. */
#define HAVE_STRUCT_SOCKADDR_IN 1

/* Define to 1 if the system has the type `struct sockaddr_in6'. */
#define HAVE_STRUCT_SOCKADDR_IN6 1

/* Define to 1 if `sa_len' is a member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the `syslog' function. */
#define HAVE_SYSLOG 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/fcntl.h> header file. */
#define HAVE_SYS_FCNTL_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ipc.h> header file. */
#define HAVE_SYS_IPC_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/queue.h> header file. */
#define HAVE_SYS_QUEUE_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/synch.h> header file. */
/* #undef HAVE_SYS_SYNCH_H */

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/tree.h> header file. */
/* #undef HAVE_SYS_TREE_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `tcgetpgrp' function. */
#define HAVE_TCGETPGRP 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if the system has the type `uint128_t'. */
/* #undef HAVE_UINT128_T */

/* Define to 1 if the system has the type `uint16_t'. */
#define HAVE_UINT16_T 1

/* Define to 1 if the system has the type `uint32_t'. */
#define HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint64_t'. */
#define HAVE_UINT64_T 1

/* Define to 1 if the system has the type `uint8_t'. */
#define HAVE_UINT8_T 1

/* Define to 1 if the system has the type `uintptr_t'. */
#define HAVE_UINTPTR_T 1

/* Define to 1 if you have the <ulimit.h> header file. */
#define HAVE_ULIMIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* whether unix byteswap routines -- htonl, htons, nothl, ntohs -- are
   available */
#define HAVE_UNIX_BYTESWAP 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `vsyslog' function. */
#define HAVE_VSYSLOG 1

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* Define to 1 if you have the `_NSGetEnviron' function. */
/* #undef HAVE__NSGETENVIRON */

/* Define to 1 if you have the `_strdup' function. */
/* #undef HAVE__STRDUP */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Hardcode the ORTE progress thread to be off */
#define ORTE_ENABLE_PROGRESS_THREADS 0

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "Common Communication Substrate"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Common Communication Substrate 0.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libservice"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.1"

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `double _Complex', as computed by sizeof. */
#define SIZEOF_DOUBLE__COMPLEX 16

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `float _Complex', as computed by sizeof. */
#define SIZEOF_FLOAT__COMPLEX 8

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long double', as computed by sizeof. */
#define SIZEOF_LONG_DOUBLE 16

/* The size of `long double _Complex', as computed by sizeof. */
#define SIZEOF_LONG_DOUBLE__COMPLEX 32

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `pid_t', as computed by sizeof. */
#define SIZEOF_PID_T 4

/* The size of `ptrdiff_t', as computed by sizeof. */
#define SIZEOF_PTRDIFF_T 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* The size of `ssize_t', as computed by sizeof. */
#define SIZEOF_SSIZE_T 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T 4

/* The size of `_Bool', as computed by sizeof. */
#define SIZEOF__BOOL 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


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

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#define inline __inline__
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif


#include "service/platform/service_config_bottom.h"
#endif /* CCS_CONFIG_H */

