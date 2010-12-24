/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef F77_DUMMY_MAIN */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#define F77_FUNC(name,NAME) name ## _

/* As F77_FUNC, but for C identifiers containing underscores. */
#define F77_FUNC_(name,NAME) name ## _

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef FC_DUMMY_MAIN_EQ_F77 */

/* FreeFem prefix dir */
#define FF_PREFIX_DIR "/usr/lib/ff++/3.11"

/* FreeFem prefix dir */
/* #undef FF_PREFIX_DIR_APPLE */

/* Define to 1 if you have the `acosh' function. */
#define HAVE_ACOSH 1

/* Define to 1 if you have the `asinh' function. */
#define HAVE_ASINH 1

/* Define to 1 if you have the `atanh' function. */
#define HAVE_ATANH 1

/* Define to 1 if you have the <atlas/cblas.h> header file. */
/* #undef HAVE_ATLAS_CBLAS_H */

/* If umfpack.h is located in UMFPACK subdir */
/* #undef HAVE_BIG_UMFPACK_UMFPACK_H */

/* freecadna is use to evalute the round-off error propagation */
/* #undef HAVE_CADNA */

/* Define to 1 if you have the <cblas.h> header file. */
#define HAVE_CBLAS_H 1

/* Dynamic loading - not mandatory */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `erfc' function. */
#define HAVE_ERFC 1

/* Define to 1 if you have the <fftw3.h> header file. */
#define HAVE_FFTW3_H 1

/* Define to 1 if you have the `getenv' function. */
#define HAVE_GETENV 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <GLUT/glut.h> header file. */
/* #undef HAVE_GLUT_GLUT_H */

/* Define to 1 if you have the <GL/glut.h> header file. */
#define HAVE_GL_GLUT_H 1

/* Define to 1 if you have the <GL/glx.h> header file. */
#define HAVE_GL_GLX_H 1

/* Define to 1 if you have the <GL/gl.h> header file. */
#define HAVE_GL_GL_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `jn' function. */
#define HAVE_JN 1

/* Arpack is used for eigenvalue computation */
#define HAVE_LIBARPACK 1

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* UMFPACK */
#define HAVE_LIBUMFPACK 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <OpenGL/gl.h> header file. */
/* #undef HAVE_OPENGL_GL_H */

/* Define to 1 if you have the `second_' function. */
/* #undef HAVE_SECOND_ */

/* Define to 1 if you have the `srandomdev' function. */
/* #undef HAVE_SRANDOMDEV */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <suitesparse/umfpack.h> header file. */
#define HAVE_SUITESPARSE_UMFPACK_H 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* tetgen is compute tetrahedralize volume of an enclosed surface */
/* #undef HAVE_TETGEN */

/* Define to 1 if you have the <tetgen.h> header file. */
/* #undef HAVE_TETGEN_H */

/* Define to 1 if you have the `tgamma' function. */
#define HAVE_TGAMMA 1

/* Define to 1 if you have the `times' function. */
#define HAVE_TIMES 1

/* Define to 1 if you have the <ufsparse/umfpack.h> header file. */
/* #undef HAVE_UFSPARSE_UMFPACK_H */

/* Define to 1 if you have the <umfpack.h> header file. */
/* #undef HAVE_UMFPACK_H */

/* Define to 1 if you have the <umfpack/umfpack.h> header file. */
/* #undef HAVE_UMFPACK_UMFPACK_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <vecLib/cblas.h> header file. */
/* #undef HAVE_VECLIB_CBLAS_H */

/* Name of package */
#define PACKAGE "freefem++"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "hecht@ann.jussieu.fr"

/* Define to the full name of this package. */
#define PACKAGE_NAME "FreeFem++"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "FreeFem++ 3.11"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "freefem++"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.11"

/* the ffglut application for the new graphics */
#define PROG_FFGLUT "ffglut"

/* A pure windows applications no cygwin dll */
/* #undef PURE_WIN32 */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "3.11"

/* FreeFem++ build date */
#define VersionFreeFemDate "Fri Dec 24 17:04:19 UTC 2010"

/* FreeFem++ version as a float */
#define VersionFreeFempp 3.11

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1
