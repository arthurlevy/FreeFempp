/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABS = 258,
     R3 = 259,
     APPEND = 260,
     ABSERROR = 261,
     ACOS = 262,
     ACOSH = 263,
     ADAPTMESH = 264,
     ANDAND = 265,
     ANISOMAX = 266,
     RESIZE = 267,
     AREA = 268,
     ARG = 269,
     ASIN = 270,
     ASINH = 271,
     ASPECTRATIO = 272,
     ASSERT = 273,
     ATAN = 274,
     ATAN2 = 275,
     ATANH = 276,
     AVERAGE = 277,
     BB = 278,
     BFGS = 279,
     BIG_N = 280,
     BINSIDE = 281,
     BMAT = 282,
     BOOL = 283,
     BORDER = 284,
     BOUNDARYPROBLEM = 285,
     BREAK = 286,
     BROADCAST = 287,
     BUILDMESH = 288,
     BUILDMESHBORDER = 289,
     BW = 290,
     CADNA = 291,
     CG = 292,
     CHECKMOVEMESH = 293,
     CHOLESKY = 294,
     CIN = 295,
     CLEAN = 296,
     CLOCK = 297,
     CMM = 298,
     COEF = 299,
     COMPLEX = 300,
     CONJ = 301,
     CONSTANT_STRING = 302,
     CONTINUE = 303,
     CONVECT = 304,
     COS = 305,
     COSH = 306,
     COUT = 307,
     CROUT = 308,
     CUTOFF = 309,
     DIMKRYLOV = 310,
     DN = 311,
     DOTSLASH = 312,
     DOTSTAR = 313,
     DIAG = 314,
     DUMPTABLE = 315,
     DX = 316,
     DXX = 317,
     DXY = 318,
     DY = 319,
     DYX = 320,
     DYY = 321,
     DZ = 322,
     ELSE = 323,
     EMPTYMESH = 324,
     END = 325,
     ENDL = 326,
     EPS = 327,
     EQEQ = 328,
     ERR = 329,
     ERRG = 330,
     EXEC = 331,
     EXIT = 332,
     EXP = 333,
     FACTORIZE = 334,
     FESPACE = 335,
     FF_FALSE = 336,
     FF_TRUE = 337,
     FILL = 338,
     FOR = 339,
     FUNC = 340,
     GE = 341,
     GMRES = 342,
     GREY = 343,
     GTGT = 344,
     HAVEUMFPACK = 345,
     HMAX = 346,
     HMIN = 347,
     HTRIANGLE = 348,
     I = 349,
     IF = 350,
     IFSTREAM = 351,
     IMAG = 352,
     INCLUDE = 353,
     INIT = 354,
     INQUIRE = 355,
     INSIDE = 356,
     INT = 357,
     INT1D = 358,
     INT2D = 359,
     INTALLEDGES = 360,
     INTERPOLATE = 361,
     ISMETRIC = 362,
     HSV = 363,
     ISO = 364,
     IVALUE = 365,
     JUMP = 366,
     KEEPBACKVERTICES = 367,
     LABEL = 368,
     LE = 369,
     LENEDGE = 370,
     LINEARCG = 371,
     EIGENVALUE = 372,
     LINEARGMRES = 373,
     LOAD = 374,
     LOG = 375,
     LOG10 = 376,
     LTLT = 377,
     LU = 378,
     M = 379,
     MATRIX = 380,
     MAX = 381,
     MAXIT = 382,
     MAXSUBDIV = 383,
     MEAN = 384,
     MESH = 385,
     METRIC = 386,
     MIN = 387,
     MINUSEQ = 388,
     MINUSMINUS = 389,
     MOVEMESH = 390,
     MPIRANK = 391,
     MPISIZE = 392,
     NAME = 393,
     NBARROW = 394,
     NBEV = 395,
     NBISO = 396,
     NBITER = 397,
     NBITERLINE = 398,
     NBJACOBY = 399,
     NBSMOOTH = 400,
     NBVX = 401,
     NCV = 402,
     NDOF = 403,
     NDOFK = 404,
     NE = 405,
     NEWTON = 406,
     NLCG = 407,
     NOMESHGENERATION = 408,
     NORM = 409,
     NOUSEOFWAIT = 410,
     NT = 411,
     NTONEDGE = 412,
     NUEDGE = 413,
     NUMBER = 414,
     NUTRIANGLE = 415,
     NV = 416,
     OFSTREAM = 417,
     OMEGA = 418,
     ON = 419,
     OP = 420,
     OPTIMIZE = 421,
     OROR = 422,
     OTHERSIDE = 423,
     P = 424,
     P0 = 425,
     P0edge = 426,
     P1 = 427,
     P1B = 428,
     P1DC = 429,
     P1NC = 430,
     P2 = 431,
     P2DC = 432,
     P2H = 433,
     P2B = 434,
     PERIODIC = 435,
     PI = 436,
     PLOT = 437,
     PLUSEQ = 438,
     PLUSPLUS = 439,
     POLAR = 440,
     POW = 441,
     POWER = 442,
     PRECISION = 443,
     PRECON = 444,
     PROBLEM = 445,
     PROCESSOR = 446,
     PS = 447,
     QFE = 448,
     QFNBPE = 449,
     QFNBPT = 450,
     QFORDER = 451,
     QFT = 452,
     QF1PE = 453,
     QF1PELUMP = 454,
     QF1PT = 455,
     QF1PTLUMP = 456,
     QF2PE = 457,
     QF2PT = 458,
     QF2PT4P1 = 459,
     QF3PE = 460,
     QF5PT = 461,
     QF7PT = 462,
     QF9PT = 463,
     RATIO = 464,
     READMESH = 465,
     REAL = 466,
     REGION = 467,
     RESCALING = 468,
     RETURN = 469,
     RT0 = 470,
     RT0ORTHO = 471,
     SAVE = 472,
     SAVEMESH = 473,
     SET = 474,
     SIGMA = 475,
     SIN = 476,
     SINH = 477,
     SLASHEQ = 478,
     SMALL_N = 479,
     SOLVE = 480,
     SOLVER = 481,
     SPLIT = 482,
     SPLITIN2 = 483,
     SPLITMESH = 484,
     SPLITPBEDGE = 485,
     SQRT = 486,
     SQUARE = 487,
     STAREQ = 488,
     STRATEGY = 489,
     STRING = 490,
     SUM = 491,
     SYM = 492,
     T = 493,
     TAN = 494,
     TANH = 495,
     TGV = 496,
     THETAMAX = 497,
     TOL = 498,
     TRIANGULATE = 499,
     TRUNC = 500,
     UMFPACK = 501,
     USER_BORDER = 502,
     USER_FUNCTION = 503,
     USER_PROBLEM = 504,
     USER_TYPE = 505,
     USER_VARF = 506,
     USER_VARIABLE = 507,
     VALUE = 508,
     VARF = 509,
     VARROW = 510,
     VECTOR = 511,
     VEPS = 512,
     VERBOSITY = 513,
     VERSION = 514,
     VISO = 515,
     WAIT = 516,
     WHILE = 517,
     X = 518,
     Y = 519,
     Z = 520,
     NBCOEF = 521,
     TOLPIVOT = 522,
     TOLPIVOTSYM = 523,
     L1 = 524,
     L2 = 525,
     LINFTY = 526,
     TRY = 527,
     CATCH = 528,
     THROW = 529,
     FFEOF = 530,
     GOOD = 531,
     SCIENTIFIC = 532,
     FIXED = 533,
     SHOWBASE = 534,
     NOSHOWBASE = 535,
     SHOWPOS = 536,
     NOSHOWPOS = 537,
     DEFAULT = 538,
     IM = 539,
     RE = 540
   };
#endif
/* Tokens.  */
#define ABS 258
#define R3 259
#define APPEND 260
#define ABSERROR 261
#define ACOS 262
#define ACOSH 263
#define ADAPTMESH 264
#define ANDAND 265
#define ANISOMAX 266
#define RESIZE 267
#define AREA 268
#define ARG 269
#define ASIN 270
#define ASINH 271
#define ASPECTRATIO 272
#define ASSERT 273
#define ATAN 274
#define ATAN2 275
#define ATANH 276
#define AVERAGE 277
#define BB 278
#define BFGS 279
#define BIG_N 280
#define BINSIDE 281
#define BMAT 282
#define BOOL 283
#define BORDER 284
#define BOUNDARYPROBLEM 285
#define BREAK 286
#define BROADCAST 287
#define BUILDMESH 288
#define BUILDMESHBORDER 289
#define BW 290
#define CADNA 291
#define CG 292
#define CHECKMOVEMESH 293
#define CHOLESKY 294
#define CIN 295
#define CLEAN 296
#define CLOCK 297
#define CMM 298
#define COEF 299
#define COMPLEX 300
#define CONJ 301
#define CONSTANT_STRING 302
#define CONTINUE 303
#define CONVECT 304
#define COS 305
#define COSH 306
#define COUT 307
#define CROUT 308
#define CUTOFF 309
#define DIMKRYLOV 310
#define DN 311
#define DOTSLASH 312
#define DOTSTAR 313
#define DIAG 314
#define DUMPTABLE 315
#define DX 316
#define DXX 317
#define DXY 318
#define DY 319
#define DYX 320
#define DYY 321
#define DZ 322
#define ELSE 323
#define EMPTYMESH 324
#define END 325
#define ENDL 326
#define EPS 327
#define EQEQ 328
#define ERR 329
#define ERRG 330
#define EXEC 331
#define EXIT 332
#define EXP 333
#define FACTORIZE 334
#define FESPACE 335
#define FF_FALSE 336
#define FF_TRUE 337
#define FILL 338
#define FOR 339
#define FUNC 340
#define GE 341
#define GMRES 342
#define GREY 343
#define GTGT 344
#define HAVEUMFPACK 345
#define HMAX 346
#define HMIN 347
#define HTRIANGLE 348
#define I 349
#define IF 350
#define IFSTREAM 351
#define IMAG 352
#define INCLUDE 353
#define INIT 354
#define INQUIRE 355
#define INSIDE 356
#define INT 357
#define INT1D 358
#define INT2D 359
#define INTALLEDGES 360
#define INTERPOLATE 361
#define ISMETRIC 362
#define HSV 363
#define ISO 364
#define IVALUE 365
#define JUMP 366
#define KEEPBACKVERTICES 367
#define LABEL 368
#define LE 369
#define LENEDGE 370
#define LINEARCG 371
#define EIGENVALUE 372
#define LINEARGMRES 373
#define LOAD 374
#define LOG 375
#define LOG10 376
#define LTLT 377
#define LU 378
#define M 379
#define MATRIX 380
#define MAX 381
#define MAXIT 382
#define MAXSUBDIV 383
#define MEAN 384
#define MESH 385
#define METRIC 386
#define MIN 387
#define MINUSEQ 388
#define MINUSMINUS 389
#define MOVEMESH 390
#define MPIRANK 391
#define MPISIZE 392
#define NAME 393
#define NBARROW 394
#define NBEV 395
#define NBISO 396
#define NBITER 397
#define NBITERLINE 398
#define NBJACOBY 399
#define NBSMOOTH 400
#define NBVX 401
#define NCV 402
#define NDOF 403
#define NDOFK 404
#define NE 405
#define NEWTON 406
#define NLCG 407
#define NOMESHGENERATION 408
#define NORM 409
#define NOUSEOFWAIT 410
#define NT 411
#define NTONEDGE 412
#define NUEDGE 413
#define NUMBER 414
#define NUTRIANGLE 415
#define NV 416
#define OFSTREAM 417
#define OMEGA 418
#define ON 419
#define OP 420
#define OPTIMIZE 421
#define OROR 422
#define OTHERSIDE 423
#define P 424
#define P0 425
#define P0edge 426
#define P1 427
#define P1B 428
#define P1DC 429
#define P1NC 430
#define P2 431
#define P2DC 432
#define P2H 433
#define P2B 434
#define PERIODIC 435
#define PI 436
#define PLOT 437
#define PLUSEQ 438
#define PLUSPLUS 439
#define POLAR 440
#define POW 441
#define POWER 442
#define PRECISION 443
#define PRECON 444
#define PROBLEM 445
#define PROCESSOR 446
#define PS 447
#define QFE 448
#define QFNBPE 449
#define QFNBPT 450
#define QFORDER 451
#define QFT 452
#define QF1PE 453
#define QF1PELUMP 454
#define QF1PT 455
#define QF1PTLUMP 456
#define QF2PE 457
#define QF2PT 458
#define QF2PT4P1 459
#define QF3PE 460
#define QF5PT 461
#define QF7PT 462
#define QF9PT 463
#define RATIO 464
#define READMESH 465
#define REAL 466
#define REGION 467
#define RESCALING 468
#define RETURN 469
#define RT0 470
#define RT0ORTHO 471
#define SAVE 472
#define SAVEMESH 473
#define SET 474
#define SIGMA 475
#define SIN 476
#define SINH 477
#define SLASHEQ 478
#define SMALL_N 479
#define SOLVE 480
#define SOLVER 481
#define SPLIT 482
#define SPLITIN2 483
#define SPLITMESH 484
#define SPLITPBEDGE 485
#define SQRT 486
#define SQUARE 487
#define STAREQ 488
#define STRATEGY 489
#define STRING 490
#define SUM 491
#define SYM 492
#define T 493
#define TAN 494
#define TANH 495
#define TGV 496
#define THETAMAX 497
#define TOL 498
#define TRIANGULATE 499
#define TRUNC 500
#define UMFPACK 501
#define USER_BORDER 502
#define USER_FUNCTION 503
#define USER_PROBLEM 504
#define USER_TYPE 505
#define USER_VARF 506
#define USER_VARIABLE 507
#define VALUE 508
#define VARF 509
#define VARROW 510
#define VECTOR 511
#define VEPS 512
#define VERBOSITY 513
#define VERSION 514
#define VISO 515
#define WAIT 516
#define WHILE 517
#define X 518
#define Y 519
#define Z 520
#define NBCOEF 521
#define TOLPIVOT 522
#define TOLPIVOTSYM 523
#define L1 524
#define L2 525
#define LINFTY 526
#define TRY 527
#define CATCH 528
#define THROW 529
#define FFEOF 530
#define GOOD 531
#define SCIENTIFIC 532
#define FIXED 533
#define SHOWBASE 534
#define NOSHOWBASE 535
#define SHOWPOS 536
#define NOSHOWPOS 537
#define DEFAULT 538
#define IM 539
#define RE 540




/* Copy the first part of user declarations.  */
#line 6 "hl_yacc.y++"

#include <cstdio>
#include <cstring>
#include <cassert>
#include <string>
#include <iostream>
using namespace std;
#include "highlight.hpp"
#include "hl_lexyacc.hpp"
#include "tostring.hpp"

// YYSTYPE represents an index in the words[] array
// (see hl_lexyacc.hpp).

#define YYSTYPE int

// Standard lex/yacc defines
extern char *yytext;
extern "C" int yywrap(){return 1;}
extern int yydebug;
#define YYLEX_PARAM &yylval,&yylloc
extern int yylex (YYSTYPE * yylval_param,YYLTYPE * yylloc_param);

// Just gives a special color to any erroneous token.
void yyerror(const char *str){
	colorize(yylloc,highlight_error);
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 718 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  332
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8757

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  311
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  409
/* YYNRULES -- Number of states.  */
#define YYNSTATES  583

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   540

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   303,     2,     2,     2,   309,   298,   305,
     287,   288,   306,   301,   292,   302,   293,   308,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   299,   286,
     296,   291,   297,   300,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   294,     2,   295,   307,   304,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   289,   310,   290,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    10,    12,    14,    16,
      18,    20,    22,    24,    26,    28,    30,    32,    34,    36,
      38,    40,    42,    44,    46,    48,    50,    52,    54,    56,
      58,    60,    62,    64,    66,    68,    70,    72,    74,    76,
      78,    80,    82,    84,    86,    88,    90,    92,    94,    96,
      98,   100,   102,   104,   106,   108,   110,   112,   114,   116,
     118,   120,   122,   124,   126,   128,   130,   132,   134,   136,
     138,   140,   142,   144,   146,   148,   150,   152,   154,   156,
     158,   160,   162,   164,   166,   168,   170,   172,   174,   176,
     178,   180,   182,   184,   186,   188,   190,   192,   194,   196,
     198,   200,   202,   204,   206,   208,   210,   212,   214,   216,
     218,   220,   222,   224,   226,   228,   230,   232,   234,   236,
     238,   240,   242,   244,   246,   248,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     278,   280,   282,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   308,   310,   312,   314,   316,
     318,   320,   322,   324,   326,   328,   330,   332,   334,   336,
     338,   340,   342,   344,   346,   348,   350,   352,   354,   356,
     358,   360,   362,   364,   366,   368,   370,   372,   374,   376,
     378,   380,   382,   384,   386,   388,   390,   392,   394,   396,
     398,   400,   402,   404,   406,   408,   410,   412,   414,   416,
     418,   420,   422,   424,   426,   428,   430,   432,   434,   436,
     438,   440,   442,   444,   446,   448,   450,   452,   454,   456,
     458,   460,   463,   465,   467,   470,   480,   486,   494,   500,
     506,   508,   510,   513,   515,   526,   534,   536,   540,   541,
     543,   545,   547,   550,   553,   561,   569,   575,   583,   589,
     598,   601,   603,   607,   612,   620,   628,   636,   641,   652,
     654,   659,   660,   662,   666,   669,   673,   675,   680,   682,
     686,   690,   696,   700,   707,   709,   714,   719,   721,   725,
     727,   729,   731,   733,   735,   737,   739,   741,   743,   745,
     747,   749,   751,   753,   755,   757,   759,   761,   763,   765,
     767,   769,   771,   773,   775,   777,   779,   781,   783,   787,
     790,   793,   797,   799,   801,   803,   805,   807,   811,   813,
     817,   819,   823,   827,   829,   833,   835,   837,   839,   841,
     843,   851,   859,   867,   873,   878,   885,   893,   898,   904,
     906,   910,   915,   917,   919,   921,   922,   924,   926,   930,
     934,   935,   939,   941,   943,   945,   947,   949,   951,   953,
     955,   957,   960,   964,   967,   971,   973,   975,   977,   979,
     981,   983,   985,   987,   989,   991,   993,   995,   997,   999,
    1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,  1017,  1019,
    1022,  1024,  1026,  1028,  1032,  1034,  1036,  1038,  1040,  1044
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     312,     0,    -1,    -1,   318,    -1,    37,    -1,    39,    -1,
      53,    -1,    87,    -1,   123,    -1,   116,    -1,   118,    -1,
     152,    -1,   246,    -1,    24,    -1,     9,    -1,   117,    -1,
      30,    -1,   232,    -1,    90,    -1,     3,    -1,     7,    -1,
       8,    -1,    14,    -1,    15,    -1,    16,    -1,    18,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    32,    -1,
      34,    -1,    38,    -1,    42,    -1,    46,    -1,    49,    -1,
      50,    -1,    51,    -1,    60,    -1,    56,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    -1,    69,    -1,    70,    -1,    76,    -1,    77,    -1,
      78,    -1,    97,    -1,   129,    -1,   111,    -1,   119,    -1,
     120,    -1,   121,    -1,   135,    -1,   136,    -1,   137,    -1,
     154,    -1,   168,    -1,   182,    -1,   185,    -1,   186,    -1,
     191,    -1,   210,    -1,   212,    -1,   218,    -1,   219,    -1,
     221,    -1,   222,    -1,   229,    -1,   231,    -1,   239,    -1,
     240,    -1,   244,    -1,   245,    -1,   151,    -1,    13,    -1,
      40,    -1,    52,    -1,    71,    -1,    81,    -1,    93,    -1,
     115,    -1,   157,    -1,   158,    -1,   160,    -1,    59,    -1,
     188,    -1,   236,    -1,   148,    -1,   149,    -1,   181,    -1,
      82,    -1,   124,    -1,   224,    -1,    25,    -1,   161,    -1,
     156,    -1,   132,    -1,   126,    -1,    12,    -1,   270,    -1,
     266,    -1,   269,    -1,   271,    -1,   198,    -1,   199,    -1,
     200,    -1,   201,    -1,   202,    -1,   203,    -1,   204,    -1,
     205,    -1,   206,    -1,   207,    -1,   208,    -1,   284,    -1,
     285,    -1,   277,    -1,   278,    -1,   279,    -1,   280,    -1,
     281,    -1,   282,    -1,   283,    -1,   275,    -1,   276,    -1,
     107,    -1,   108,    -1,     5,    -1,     6,    -1,    11,    -1,
      17,    -1,    23,    -1,    26,    -1,    27,    -1,    35,    -1,
      36,    -1,    41,    -1,    43,    -1,    44,    -1,    54,    -1,
      55,    -1,    72,    -1,    74,    -1,    75,    -1,    79,    -1,
      83,    -1,    88,    -1,    91,    -1,    92,    -1,    99,    -1,
     100,    -1,   101,    -1,   109,    -1,   110,    -1,   112,    -1,
     127,    -1,   128,    -1,   131,    -1,   139,    -1,   140,    -1,
     141,    -1,   142,    -1,   143,    -1,   144,    -1,   145,    -1,
     146,    -1,   147,    -1,   153,    -1,   163,    -1,   165,    -1,
     166,    -1,   180,    -1,   187,    -1,   189,    -1,   192,    -1,
     193,    -1,   194,    -1,   195,    -1,   196,    -1,   197,    -1,
     209,    -1,   213,    -1,   217,    -1,   220,    -1,   226,    -1,
     227,    -1,   228,    -1,   230,    -1,   234,    -1,   237,    -1,
     238,    -1,   241,    -1,   242,    -1,   243,    -1,   253,    -1,
     255,    -1,   256,    -1,   257,    -1,   260,    -1,   261,    -1,
     267,    -1,   268,    -1,   170,    -1,   171,    -1,     4,    -1,
     172,    -1,   173,    -1,   174,    -1,   175,    -1,   176,    -1,
     177,    -1,   178,    -1,   179,    -1,   215,    -1,   216,    -1,
      28,    -1,    45,    -1,    96,    -1,   102,    -1,   125,    -1,
     130,    -1,   162,    -1,   211,    -1,   235,    -1,   319,    -1,
     318,   319,    -1,     1,    -1,   322,    -1,   323,   286,    -1,
      84,   287,   323,   286,   323,   286,   323,   288,   319,    -1,
     262,   287,   344,   288,   319,    -1,    95,   287,   344,   288,
     319,    68,   319,    -1,    95,   287,   344,   288,   319,    -1,
     272,   289,   318,   290,   320,    -1,    31,    -1,    48,    -1,
      98,    47,    -1,   327,    -1,    29,   343,   287,   321,   291,
     344,   292,   344,   288,   322,    -1,   273,   287,   293,   293,
     293,   288,   319,    -1,   336,    -1,   289,   318,   290,    -1,
      -1,   324,    -1,   344,    -1,   249,    -1,   214,   344,    -1,
      80,   325,    -1,   190,   340,   287,   354,   288,   291,   344,
      -1,   225,   340,   287,   354,   288,   291,   344,    -1,   339,
     294,   339,   295,   332,    -1,   339,   294,   339,   292,   339,
     295,   332,    -1,   339,   296,   339,   297,   332,    -1,   339,
     296,   339,   297,   294,   339,   295,   332,    -1,   339,   332,
      -1,   326,    -1,   325,   292,   326,    -1,   338,   287,   344,
     288,    -1,   338,   287,   344,   292,   339,   355,   288,    -1,
     338,   287,   344,   292,   347,   355,   288,    -1,    85,   328,
     341,   287,   329,   288,   322,    -1,    85,   341,   291,   344,
      -1,   254,   342,   287,   333,   292,   333,   355,   288,   291,
     344,    -1,   339,    -1,   339,   294,   339,   295,    -1,    -1,
     330,    -1,   329,   292,   330,    -1,   331,   333,    -1,   331,
     298,   333,    -1,   339,    -1,   339,   294,   339,   295,    -1,
     333,    -1,   332,   292,   332,    -1,   335,   291,   344,    -1,
     294,   334,   295,   291,   344,    -1,   294,   334,   295,    -1,
     294,   334,   295,   287,   354,   288,    -1,   335,    -1,   335,
     294,   344,   295,    -1,   335,   287,   354,   288,    -1,   335,
      -1,   334,   292,   335,    -1,   337,    -1,   315,    -1,   314,
      -1,   316,    -1,   313,    -1,   252,    -1,   248,    -1,   249,
      -1,   251,    -1,   247,    -1,   258,    -1,   259,    -1,   155,
      -1,   113,    -1,    94,    -1,   169,    -1,   263,    -1,   264,
      -1,   265,    -1,   138,    -1,   336,    -1,   337,    -1,   339,
      -1,   250,    -1,   317,    -1,   337,    -1,   337,    -1,   337,
      -1,   337,    -1,   287,   344,   288,    -1,   356,   344,    -1,
     344,   357,    -1,   344,   358,   344,    -1,   345,    -1,   350,
      -1,    47,    -1,   359,    -1,   336,    -1,   339,   293,   336,
      -1,   299,    -1,   294,   346,   295,    -1,   344,    -1,   346,
     292,   344,    -1,   294,   348,   295,    -1,   339,    -1,   348,
     292,   339,    -1,   291,    -1,   183,    -1,   133,    -1,   233,
      -1,   223,    -1,   353,   287,   354,   288,   287,   344,   288,
      -1,   251,   287,   344,   292,   339,   355,   288,    -1,   251,
     287,   339,   292,   339,   355,   288,    -1,    33,   287,   351,
     355,   288,    -1,    33,   287,   344,   288,    -1,   164,   287,
     361,   292,   363,   288,    -1,   106,   287,   339,   292,   339,
     355,   288,    -1,   339,   287,   354,   288,    -1,   344,   300,
     344,   299,   344,    -1,   352,    -1,   351,   301,   352,    -1,
     247,   287,   344,   288,    -1,   103,    -1,   104,    -1,   105,
      -1,    -1,   344,    -1,   299,    -1,   354,   292,   344,    -1,
     354,   292,   299,    -1,    -1,   355,   292,   344,    -1,   302,
      -1,   301,    -1,   303,    -1,   184,    -1,   134,    -1,   304,
      -1,   305,    -1,   184,    -1,   134,    -1,   294,   295,    -1,
     294,   344,   295,    -1,   287,   288,    -1,   287,   354,   288,
      -1,   306,    -1,   299,    -1,   293,    -1,   307,    -1,    58,
      -1,    57,    -1,   308,    -1,   309,    -1,   301,    -1,   302,
      -1,   122,    -1,    89,    -1,   298,    -1,    10,    -1,   310,
      -1,   167,    -1,   296,    -1,   114,    -1,   297,    -1,    86,
      -1,    73,    -1,   150,    -1,   349,    -1,   360,    -1,   159,
     360,    -1,   159,    -1,   336,    -1,   362,    -1,   361,   292,
     362,    -1,   159,    -1,   247,    -1,   252,    -1,   364,    -1,
     363,   292,   364,    -1,   336,   291,   344,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   326,   326,   328,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     576,   577,   578,   587,   588,   589,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   605,   608,   613,   616,   618,
     619,   620,   621,   625,   626,   627,   628,   629,   630,   631,
     632,   636,   637,   641,   642,   643,   647,   648,   649,   654,
     655,   658,   660,   661,   665,   666,   670,   671,   675,   676,
     680,   681,   682,   683,   684,   685,   686,   690,   691,   695,
     700,   701,   702,   703,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,   714,   715,   716,   717,   721,   722,
     737,   739,   744,   745,   749,   754,   758,   763,   768,   769,
     770,   771,   772,   773,   774,   775,   776,   777,   778,   782,
     786,   787,   791,   795,   796,   800,   801,   802,   803,   804,
     808,   809,   810,   811,   812,   813,   814,   815,   816,   820,
     821,   825,   829,   830,   831,   834,   836,   837,   838,   839,
     842,   844,   848,   849,   850,   851,   852,   856,   857,   858,
     859,   860,   861,   862,   863,   867,   868,   869,   870,   871,
     872,   873,   874,   875,   876,   877,   878,   879,   880,   881,
     882,   883,   884,   885,   886,   887,   888,   889,   893,   894,
     895,   900,   904,   905,   909,   910,   911,   915,   916,   920
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABS", "R3", "APPEND", "ABSERROR",
  "ACOS", "ACOSH", "ADAPTMESH", "ANDAND", "ANISOMAX", "RESIZE", "AREA",
  "ARG", "ASIN", "ASINH", "ASPECTRATIO", "ASSERT", "ATAN", "ATAN2",
  "ATANH", "AVERAGE", "BB", "BFGS", "BIG_N", "BINSIDE", "BMAT", "BOOL",
  "BORDER", "BOUNDARYPROBLEM", "BREAK", "BROADCAST", "BUILDMESH",
  "BUILDMESHBORDER", "BW", "CADNA", "CG", "CHECKMOVEMESH", "CHOLESKY",
  "CIN", "CLEAN", "CLOCK", "CMM", "COEF", "COMPLEX", "CONJ",
  "CONSTANT_STRING", "CONTINUE", "CONVECT", "COS", "COSH", "COUT", "CROUT",
  "CUTOFF", "DIMKRYLOV", "DN", "DOTSLASH", "DOTSTAR", "DIAG", "DUMPTABLE",
  "DX", "DXX", "DXY", "DY", "DYX", "DYY", "DZ", "ELSE", "EMPTYMESH", "END",
  "ENDL", "EPS", "EQEQ", "ERR", "ERRG", "EXEC", "EXIT", "EXP", "FACTORIZE",
  "FESPACE", "FF_FALSE", "FF_TRUE", "FILL", "FOR", "FUNC", "GE", "GMRES",
  "GREY", "GTGT", "HAVEUMFPACK", "HMAX", "HMIN", "HTRIANGLE", "I", "IF",
  "IFSTREAM", "IMAG", "INCLUDE", "INIT", "INQUIRE", "INSIDE", "INT",
  "INT1D", "INT2D", "INTALLEDGES", "INTERPOLATE", "ISMETRIC", "HSV", "ISO",
  "IVALUE", "JUMP", "KEEPBACKVERTICES", "LABEL", "LE", "LENEDGE",
  "LINEARCG", "EIGENVALUE", "LINEARGMRES", "LOAD", "LOG", "LOG10", "LTLT",
  "LU", "M", "MATRIX", "MAX", "MAXIT", "MAXSUBDIV", "MEAN", "MESH",
  "METRIC", "MIN", "MINUSEQ", "MINUSMINUS", "MOVEMESH", "MPIRANK",
  "MPISIZE", "NAME", "NBARROW", "NBEV", "NBISO", "NBITER", "NBITERLINE",
  "NBJACOBY", "NBSMOOTH", "NBVX", "NCV", "NDOF", "NDOFK", "NE", "NEWTON",
  "NLCG", "NOMESHGENERATION", "NORM", "NOUSEOFWAIT", "NT", "NTONEDGE",
  "NUEDGE", "NUMBER", "NUTRIANGLE", "NV", "OFSTREAM", "OMEGA", "ON", "OP",
  "OPTIMIZE", "OROR", "OTHERSIDE", "P", "P0", "P0edge", "P1", "P1B",
  "P1DC", "P1NC", "P2", "P2DC", "P2H", "P2B", "PERIODIC", "PI", "PLOT",
  "PLUSEQ", "PLUSPLUS", "POLAR", "POW", "POWER", "PRECISION", "PRECON",
  "PROBLEM", "PROCESSOR", "PS", "QFE", "QFNBPE", "QFNBPT", "QFORDER",
  "QFT", "QF1PE", "QF1PELUMP", "QF1PT", "QF1PTLUMP", "QF2PE", "QF2PT",
  "QF2PT4P1", "QF3PE", "QF5PT", "QF7PT", "QF9PT", "RATIO", "READMESH",
  "REAL", "REGION", "RESCALING", "RETURN", "RT0", "RT0ORTHO", "SAVE",
  "SAVEMESH", "SET", "SIGMA", "SIN", "SINH", "SLASHEQ", "SMALL_N", "SOLVE",
  "SOLVER", "SPLIT", "SPLITIN2", "SPLITMESH", "SPLITPBEDGE", "SQRT",
  "SQUARE", "STAREQ", "STRATEGY", "STRING", "SUM", "SYM", "T", "TAN",
  "TANH", "TGV", "THETAMAX", "TOL", "TRIANGULATE", "TRUNC", "UMFPACK",
  "USER_BORDER", "USER_FUNCTION", "USER_PROBLEM", "USER_TYPE", "USER_VARF",
  "USER_VARIABLE", "VALUE", "VARF", "VARROW", "VECTOR", "VEPS",
  "VERBOSITY", "VERSION", "VISO", "WAIT", "WHILE", "X", "Y", "Z", "NBCOEF",
  "TOLPIVOT", "TOLPIVOTSYM", "L1", "L2", "LINFTY", "TRY", "CATCH", "THROW",
  "FFEOF", "GOOD", "SCIENTIFIC", "FIXED", "SHOWBASE", "NOSHOWBASE",
  "SHOWPOS", "NOSHOWPOS", "DEFAULT", "IM", "RE", "';'", "'('", "')'",
  "'{'", "'}'", "'='", "','", "'.'", "'['", "']'", "'<'", "'>'", "'&'",
  "':'", "'?'", "'+'", "'-'", "'!'", "'_'", "'''", "'*'", "'^'", "'/'",
  "'%'", "'|'", "$accept", "program", "solverchoice", "keyword", "global",
  "builtinparameter", "builtintype", "instructions", "instruction",
  "catch", "parametert", "block", "statement", "declaration",
  "newfespaces", "newfespace", "functiondefinition", "functiontype",
  "parameterdefinitions", "parameterdefinition", "parametertype",
  "newvariables", "newvariable", "newvariableslist", "newvariablename",
  "object", "newname", "newtype", "type", "newproblem", "newfunction",
  "newvarf", "newborder", "operation", "enumeratedvector",
  "enumeratedvectorelements", "enumeratedtypevector",
  "enumeratedtypevectorelements", "assignmentoperator", "specialfunction",
  "buildmeshborderlist", "buildmeshborder", "integralsign", "commalist",
  "commalistend", "prefixoperator", "postfixoperator", "binaryoperator",
  "number", "imaginary", "borderslist", "bordertag", "borderassignments",
  "borderassignment", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,    59,    40,    41,   123,
     125,    61,    44,    46,    91,    93,    60,    62,    38,    58,
      63,    43,    45,    33,    95,    39,    42,    94,    47,    37,
     124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   311,   312,   312,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     318,   318,   318,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   320,   321,   322,   323,   323,
     323,   323,   323,   324,   324,   324,   324,   324,   324,   324,
     324,   325,   325,   326,   326,   326,   327,   327,   327,   328,
     328,   329,   329,   329,   330,   330,   331,   331,   332,   332,
     333,   333,   333,   333,   333,   333,   333,   334,   334,   335,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   337,   337,
     338,   338,   339,   339,   340,   341,   342,   343,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   345,
     346,   346,   347,   348,   348,   349,   349,   349,   349,   349,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   351,
     351,   352,   353,   353,   353,   354,   354,   354,   354,   354,
     355,   355,   356,   356,   356,   356,   356,   357,   357,   357,
     357,   357,   357,   357,   357,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   359,   359,
     359,   360,   361,   361,   362,   362,   362,   363,   363,   364
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     2,     9,     5,     7,     5,     5,
       1,     1,     2,     1,    10,     7,     1,     3,     0,     1,
       1,     1,     2,     2,     7,     7,     5,     7,     5,     8,
       2,     1,     3,     4,     7,     7,     7,     4,    10,     1,
       4,     0,     1,     3,     2,     3,     1,     4,     1,     3,
       3,     5,     3,     6,     1,     4,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     3,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       7,     7,     7,     5,     4,     6,     7,     4,     5,     1,
       3,     4,     1,     1,     1,     0,     1,     1,     3,     3,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     1,     1,     1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   232,    19,   210,   133,   134,    20,    21,    14,   135,
     104,    80,    22,    23,    24,   136,    25,    26,    27,    28,
      29,   137,    13,    99,   138,   139,   221,     0,    16,   240,
      30,     0,    31,   140,   141,     4,    32,     5,    81,   142,
      33,   143,   144,   222,    34,   324,   241,    35,    36,    37,
      82,     6,   145,   146,    39,    90,    38,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    83,   147,   148,   149,
      49,    50,    51,   150,     0,    84,    96,   151,     0,     0,
       7,   152,    18,   153,   154,    85,   303,     0,   223,    52,
       0,   155,   156,   157,   224,   352,   353,   354,     0,   131,
     132,   158,   159,    54,   160,   302,    86,     9,    15,    10,
      55,    56,    57,     8,    97,   225,   103,   161,   162,    53,
     226,   163,   102,   366,    58,    59,    60,   164,   165,   166,
     167,   168,   169,   170,   171,   172,    93,    94,    79,    11,
     173,    61,   301,   101,    87,    88,   400,    89,   100,   227,
     174,     0,   175,   176,    62,   304,   208,   209,   211,   212,
     213,   214,   215,   216,   217,   218,   177,    95,    63,   365,
      64,    65,   178,    91,   179,     0,    66,   180,   181,   182,
     183,   184,   185,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   186,    67,   228,    68,   187,     0,
     219,   220,   188,    69,    70,   189,    71,    72,    98,     0,
     190,   191,   192,    73,   193,    74,    17,   194,   229,    92,
     195,   196,    75,    76,   197,   198,   199,    77,    78,    12,
     298,   295,   296,   312,   297,   294,   200,     0,   201,   202,
     203,   299,   300,   204,   205,     0,   305,   306,   307,   106,
     206,   207,   107,   105,   108,     0,   129,   130,   122,   123,
     124,   125,   126,   127,   128,   120,   121,     0,     0,     0,
     328,   363,   362,   364,     0,   293,   291,   290,   292,   313,
       3,   230,   233,     0,   249,   243,   326,     0,   250,   322,
     323,     0,     0,   325,   398,   308,   296,   297,   309,   317,
       0,     0,   253,   261,   310,     0,   311,   248,     0,   315,
     269,     0,     0,   242,     0,   401,   399,     0,   314,     0,
       0,   252,     0,     0,   316,     0,     0,     0,     0,   248,
     330,     0,     1,   231,   234,   355,     0,     0,     0,   260,
     278,   284,   289,   388,   380,   379,   395,   394,   386,   392,
     385,   337,   370,   396,   390,   336,   369,   339,   338,   355,
     335,   377,     0,   391,   393,   387,   376,     0,   383,   384,
     367,   368,   375,   378,   381,   382,   389,   397,   320,     0,
     355,   319,     0,   298,     0,   360,   349,     0,     0,     0,
       0,     0,     0,     0,     0,   404,   405,   406,     0,   402,
     355,   355,     0,     0,     0,     0,   248,   318,   247,     0,
     329,   328,   356,     0,   327,     0,   287,     0,     0,     0,
     355,     0,     0,   373,     0,   371,     0,     0,   321,     0,
       0,   246,     0,   344,     0,     0,   262,     0,   248,   271,
       0,   267,   248,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     0,   331,   347,     0,     0,   282,     0,     0,
       0,   279,     0,   280,     0,   374,   372,     0,     0,     0,
       0,     0,   350,   343,     0,   263,     0,     0,     0,   272,
       0,   276,   270,   238,   360,   298,   294,     0,   403,     0,
     407,     0,     0,   360,   360,     0,   236,     0,   239,   328,
     358,   288,   355,     0,     0,   256,     0,   258,   286,   285,
     348,     0,     0,   351,   361,     0,   360,   360,   248,     0,
       0,     0,   274,     0,   248,     0,     0,   345,     0,     0,
       0,     0,     0,   360,     0,     0,   281,     0,     0,     0,
       0,   333,     0,     0,     0,     0,   266,   273,   275,     0,
     237,   346,   409,   408,   254,   255,   342,   341,     0,     0,
     283,   257,     0,   340,     0,     0,   332,   264,   265,   248,
     277,     0,     0,   259,     0,   334,   235,     0,     0,   244,
     268,   248,   245
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   274,   275,   276,   277,   278,   279,   280,   281,   498,
     430,   282,   283,   284,   302,   303,   285,   308,   478,   479,
     480,   339,   340,   415,   341,   286,   342,   305,   320,   319,
     311,   325,   300,   288,   289,   331,   517,   542,   377,   290,
     385,   386,   291,   413,   435,   292,   378,   379,   293,   294,
     398,   399,   489,   490
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -512
static const yytype_int16 yypact[] =
{
     571,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  7906,  -512,  -512,
    -512,  -249,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  7623,  -512,  -512,  -512,  -228,  7623,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -207,  -512,  -512,
     -33,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -192,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  8472,  -512,  -512,  -512,
    -512,  -187,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  7906,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  3282,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  7906,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -244,  -512,  -186,  -512,  -512,  7906,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -185,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -232,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  3282,   874,  3282,
    -512,  -512,  -512,  -512,    23,  -512,  -512,  -512,  -512,  -512,
    1175,  -512,  -512,  -195,  -512,  -512,  -512,  6540,  5914,  -512,
    -512,  -184,  3282,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -182,  3583,  -188,  -512,  -512,  -181,  -512,  2379,  7906,  -512,
    -180,  -179,  3282,  -512,  4477,  -512,  -512,  -154,  -512,  -177,
    -275,  5914,  -176,  3282,  -512,  -174,  3282,   874,  4461,  1476,
    5914,  -243,  -512,  -512,  -512,  3884,  8472,  7623,  4477,  -175,
    -512,  -274,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  2680,
    -512,  -512,  2981,  -512,  -512,  -512,  -512,  3282,  -512,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  3282,
    3884,  5914,  8472,  -171,  4716,  -194,  -512,  7623,  3282,  -178,
    -168,  4477,  3282,  4740,  -167,  -512,  -512,  -512,  -166,  -512,
    3884,  3884,  -266,  4775,  6832,  5033,  1777,  -512,  -512,  3282,
    -512,  -512,  5914,  -273,  -512,  -225,  -512,  -217,  -173,  6832,
    3884,  3282,  3282,  -512,  -264,  -512,  5060,  5938,  5914,  -259,
    -170,  -512,  3282,  -512,  -120,  -258,  -512,  4437,  2379,  4477,
    -165,  5914,  2078,  4477,  8189,  -253,  -252,  4477,  4477,  7906,
    -161,  2078,  -141,  5914,  -512,  4185,  7906,  -250,  4477,  6832,
    7116,  -175,  -245,  5914,  5315,  -512,  -512,  3282,  -153,  3282,
    5339,  -171,  -512,  -512,  3282,  -512,  7362,  -151,  -230,  -512,
    6246,  -158,  -512,    70,  -512,  -150,  -148,  -152,  -512,  -224,
    -512,  -146,  -145,  -512,  -512,  6832,  -512,  -139,  -512,  -512,
    5914,  -512,  3884,  3282,  -144,  -175,  7623,  -175,  -512,  -512,
    5914,  3282,  5374,  -512,  5914,  4477,  -512,  -512,  2379,  -135,
    4477,  6832,  -512,  4477,  2078,  -219,  3282,  -512,  8472,  3282,
    3282,  -216,  -211,  -512,  -143,  -205,  5914,  6832,  -140,  5632,
    3282,  -512,  -196,  -203,  -200,  -147,  -512,  -512,  -512,  -137,
    -512,  -512,  5914,  -512,  5914,  5914,  -512,  -512,  -198,  -134,
    -512,  -175,  6832,  -512,  5659,  4477,  -512,  -512,  -512,  2078,
    -512,  -131,  -132,  -175,  -135,  -512,  -512,  3282,  -126,  -512,
    5914,  2078,  -512
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -261,  -269,  -512,
    -512,  -511,  -305,  -512,  -512,  -231,  -512,  -512,  -512,  -357,
    -512,  -409,  -398,  -512,  -334,   -26,   -18,  -512,     0,   -45,
    -142,  -512,  -512,  -183,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -267,  -512,  -355,  -462,  -512,  -512,  -512,  -512,    19,
    -512,  -276,  -512,  -359
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -407
static const yytype_int16 yytable[] =
{
     287,   298,   389,   416,   424,   395,   450,   329,   546,   299,
     461,   333,   335,   420,   313,   454,   321,   421,   336,   455,
     422,   335,   525,   332,   465,   429,   447,   336,   455,   468,
     473,   531,   532,   455,   474,   491,   492,   502,   301,   455,
     455,   503,  -251,   508,  -251,   445,   446,   455,   298,   409,
     505,   507,   410,   298,   543,   544,   304,   327,   519,   307,
     333,   309,   520,   579,   527,   462,   406,   456,   528,   551,
     457,   558,   556,   474,   306,   458,   474,   557,   459,   310,
     312,   474,   522,   560,   328,   567,   330,   455,   568,   474,
     571,   334,   474,   396,   474,   314,   565,   533,   397,   566,
     317,   323,   326,   380,   387,   382,   388,   434,   438,   381,
     400,   401,   392,   404,   391,   416,   432,   419,   384,   439,
     315,   469,   501,   548,   460,   443,   444,   471,   561,   393,
     482,   495,   497,   477,   511,   518,   523,   333,   524,   526,
     403,   569,  -405,   405,  -406,   529,   530,   535,   534,   298,
     559,   537,   412,   573,   268,   562,   436,   318,   570,   572,
     577,   578,   581,   547,   322,   316,   390,   472,   488,   553,
       0,     0,   416,   483,     0,     0,   412,     0,     0,   426,
       0,     0,   496,   298,   427,     0,     0,     0,     0,     0,
       0,   318,     0,     0,     0,     0,   428,   412,     0,     0,
       0,     0,     0,     0,     0,   437,     0,     0,     0,   441,
       0,   298,     0,   545,     0,     0,     0,   412,   412,   324,
       0,     0,     0,     0,     0,     0,   453,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   412,   463,   464,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   470,
       0,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,   298,     0,     0,     0,     0,     0,     0,   287,     0,
       0,     0,   500,     0,     0,     0,     0,     0,     0,     0,
     287,     0,   298,     0,   510,     0,   512,     0,     0,     0,
     309,   514,     0,     0,     0,     0,     0,     0,     0,     0,
     576,     0,     0,     0,     0,     0,     0,   287,     0,     0,
     414,   298,   582,     0,   394,     0,     0,     0,     0,   412,
     536,     0,     0,   402,     0,     0,     0,   287,   539,   287,
       0,     0,     0,     0,     0,     0,     0,   417,   418,     0,
       0,     0,     0,   552,     0,     0,   554,   555,     0,     0,
       0,     0,     0,     0,     0,     0,   431,   564,     0,     0,
       0,   298,     0,     0,     0,     0,     0,     0,     0,   304,
       0,     0,     0,     0,     0,     0,     0,     0,   298,     0,
       0,     0,     0,     0,     0,     0,     0,   306,     0,     0,
       0,   440,     0,   298,   580,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   487,     0,
       0,     0,     0,   298,     0,     0,     0,     0,     0,     0,
     298,     0,     0,   298,   298,     0,     0,     0,   287,   481,
       0,     0,   287,   484,     0,     0,     0,   493,   494,     0,
       0,   287,     0,     0,   298,     0,     0,     0,   504,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   298,
       0,     0,     0,     0,     0,     0,   516,     0,     0,     0,
     298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   298,     0,     0,     0,     0,
       0,     0,   487,     0,     0,     0,   538,     0,     0,     0,
       0,   298,     0,     0,     0,   541,     0,     0,   287,     0,
     481,     0,     0,   549,   287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   298,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   575,     0,     0,     0,   287,
       0,    -2,     1,     0,     2,     3,     4,     5,     6,     7,
       8,   287,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,    80,    81,
       0,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,     0,   123,   124,   125,   126,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,   209,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,     0,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,  -248,   267,     0,
     268,     0,     0,     0,     0,   269,     0,     0,     0,     0,
     270,     0,   271,   272,   273,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,     0,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,     0,   123,   124,
     125,   126,     0,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
    -248,   267,     0,   268,     0,     0,     0,     0,   269,     0,
       0,     0,     0,   270,     0,   271,   272,   273,     2,     3,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     0,
     106,   107,   108,   109,   110,   111,   112,     0,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,     0,   123,
     124,   125,   126,     0,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
     209,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,  -248,   267,     0,   268,     0,     0,     0,     0,   269,
       0,     0,     0,     0,   270,     0,   271,   272,   273,     2,
       3,     4,     5,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,     0,
     123,   124,   125,   126,     0,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,   209,   210,   211,   212,   213,   214,   215,   216,     0,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,     0,   267,     0,   268,   408,     0,     0,     0,
     269,     0,     0,     0,     0,   270,     0,   271,   272,   273,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     0,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
       0,   123,   124,   125,   126,     0,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,     0,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,     0,   267,     0,   268,   452,     0,     0,
       0,   269,     0,     0,     0,     0,   270,     0,   271,   272,
     273,     2,     3,     4,     5,     6,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,     0,   106,   107,   108,   109,   110,   111,   112,
       0,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,     0,   123,   124,   125,   126,     0,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,     0,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     0,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,     0,   267,     0,   268,     0,     0,
       0,     0,   269,     0,     0,     0,     0,   270,     0,   271,
     272,   273,     2,     3,     4,     5,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    28,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
      66,    67,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,    80,    81,     0,    82,
      83,    84,    85,    86,     0,    88,    89,     0,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,     0,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,     0,   123,   124,   125,   126,     0,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     0,   238,   239,   240,   241,   242,   243,
     244,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,     0,     0,     0,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,     0,   267,     0,     0,     0,
       0,     0,     0,   269,     0,     0,     0,     0,   270,     0,
     271,   272,   273,     2,     3,     4,     5,     6,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      28,     0,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,     0,    68,    69,    70,    71,    72,    73,
       0,    75,    76,    77,     0,     0,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,    88,    89,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,   106,   107,   108,   109,   110,
     111,   112,     0,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,     0,   123,   124,   125,   126,     0,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,     0,   169,   170,   171,   172,   173,   174,
       0,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,     0,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,   210,   211,   212,   213,
     214,   215,   216,     0,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   296,
     233,   234,   235,   236,     0,   238,   239,   240,   241,   242,
     243,   244,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,     0,     0,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,     0,   267,   423,     0,
       0,     0,     0,     0,   269,     0,     0,     0,     0,   411,
       0,   271,   272,   273,     2,     3,     4,     5,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    28,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,     0,    75,    76,    77,     0,     0,     0,    80,    81,
       0,    82,    83,    84,    85,    86,     0,    88,    89,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,     0,   123,   124,   125,   126,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,   169,   170,   171,   172,   173,
     174,     0,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,     0,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,     0,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     296,   233,   234,   235,   236,     0,   238,   239,   240,   241,
     242,   243,   244,     0,   246,   247,   248,   249,   250,   251,
     252,   253,   254,     0,     0,     0,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,     0,   267,     0,
       0,     0,     0,     0,     0,   269,   425,     0,     0,     0,
     270,     0,   271,   272,   273,     2,     3,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    28,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,     0,    75,    76,    77,     0,     0,     0,    80,
      81,     0,    82,    83,    84,    85,    86,     0,    88,    89,
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     0,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,     0,   123,   124,   125,   126,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,     0,   169,   170,   171,   172,
     173,   174,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,     0,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,   210,   211,
     212,   213,   214,   215,   216,     0,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   296,   233,   234,   235,   236,     0,   238,   239,   240,
     241,   242,   243,   244,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,     0,     0,     0,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,     0,   267,
       0,     0,     0,     0,     0,     0,   269,     0,     0,     0,
       0,   270,     0,   271,   272,   273,     2,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    28,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,     0,    75,    76,    77,     0,     0,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    88,
      89,     0,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,     0,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,     0,   123,   124,   125,
     126,     0,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       0,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,   169,   170,   171,
     172,   173,   174,     0,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,     0,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,     0,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     383,   231,   296,   233,   234,   235,   236,     0,   238,   239,
     240,   241,   242,   243,   244,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,     0,     0,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,     0,
     267,     0,     0,     0,     0,     0,     0,   269,     0,     0,
       0,     0,   270,     0,   271,   272,   273,     2,     3,     4,
       5,     6,     7,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    28,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,     0,    68,    69,
      70,    71,    72,    73,     0,    75,    76,    77,     0,     0,
       0,    80,    81,     0,    82,    83,    84,    85,    86,     0,
      88,    89,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,     0,   106,
     107,   108,   109,   110,   111,   112,     0,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,     0,   123,   124,
     125,   126,     0,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,     0,   169,   170,
     171,   172,   173,   174,     0,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,     0,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   296,   233,   234,   235,   236,     0,   238,
     239,   240,   241,   242,   243,   244,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,     0,     0,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
       0,   267,     0,     0,     0,     0,     0,     0,   269,     0,
       0,     0,     0,   411,     0,   271,   272,   273,     2,     3,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    28,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,    75,    76,    77,     0,
       0,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    88,    89,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     0,
     106,   107,   108,   109,   110,   111,   112,     0,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,     0,   123,
     124,   125,   126,     0,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,   169,
     170,   171,   172,   173,   174,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,     0,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
       0,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   296,   233,   234,   235,   236,     0,
     238,   239,   240,   241,   242,   243,   244,   343,   246,   247,
     248,   249,   250,   251,   252,   253,   254,     0,     0,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   343,   267,     0,     0,     0,     0,     0,     0,   269,
       0,     3,     0,     0,   499,     0,   271,   272,   273,     0,
       0,     0,     0,     0,   344,   345,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
     346,     0,     0,     0,     0,     0,     0,     0,   344,   345,
       0,     0,    43,   347,     0,     0,   348,     0,     0,     0,
       0,     0,     0,     0,   346,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
     348,   349,     0,     0,     0,     0,     0,     0,     0,   350,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,   352,     0,    88,     0,   349,     0,     0,     0,    94,
       0,     0,     0,   350,     0,     0,     0,   353,     0,     0,
       0,     0,     0,     0,   351,   352,     0,     0,     0,     0,
       0,     0,   115,     0,   354,     0,     0,   120,     0,     0,
       0,   353,     0,     0,     0,     0,     0,     0,     0,     0,
     355,   356,     0,     0,     0,     0,     0,     0,   354,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
       0,     0,     0,     0,   355,   356,     0,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,     0,     0,     0,
     357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   357,     0,     0,     0,   196,     0,
       0,     0,   200,   201,   358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   359,   475,   343,   233,   360,   476,
     361,   362,     0,   363,   364,   365,   366,   367,   368,   369,
       0,   370,   371,   372,   373,   374,   375,   376,   359,   407,
     343,     0,   360,     0,   361,   362,     0,   363,   364,   365,
     366,   367,   368,   369,     0,   370,   371,   372,   373,   374,
     375,   376,     0,   344,   345,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,     0,   344,   345,     0,
       0,     0,   347,     0,     0,   348,     0,     0,     0,     0,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   347,     0,     0,   348,
     349,     0,   344,   345,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   346,   351,
     352,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,   347,   350,     0,   348,     0,   353,     0,     0,     0,
       0,     0,     0,   351,   352,     0,     0,     0,     0,     0,
       0,     0,     0,   354,     0,     0,     0,     0,     0,   349,
     353,     0,     0,     0,     0,     0,     0,   350,     0,   355,
     356,     0,     0,     0,     0,     0,     0,   354,   351,   352,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,   356,   353,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   357,
       0,     0,   354,     0,     0,     0,     0,     0,     0,   358,
       0,     0,     0,     0,     0,     0,     0,     0,   355,   356,
       0,     0,     0,   357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   357,     0,
       0,     0,     0,   359,   433,     0,     0,   360,   358,   361,
     362,     0,   363,   364,   365,   366,   367,   368,   369,     0,
     370,   371,   372,   373,   374,   375,   376,   359,   442,     0,
       0,   360,     0,   361,   362,     0,   363,   364,   365,   366,
     367,   368,   369,   343,   370,   371,   372,   373,   374,   375,
     376,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   359,     0,     0,     0,   360,   448,   361,   362,
     343,   363,   364,   365,   366,   367,   368,   369,     0,   370,
     371,   372,   373,   374,   375,   376,     0,     0,     0,     0,
     344,   345,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   346,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   344,   345,   347,
       0,     0,   348,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   347,   349,     0,   348,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   351,   352,     0,     0,
       0,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,     0,   350,   353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   351,   352,     0,     0,     0,     0,     0,
     354,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     353,     0,     0,     0,     0,     0,   355,   356,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,   356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   357,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     359,   451,     0,     0,   360,   343,   361,   362,     0,   363,
     364,   365,   366,   367,   368,   369,     0,   370,   371,   372,
     373,   374,   375,   376,     0,     0,     0,   359,     0,   343,
       0,   360,     0,   361,   362,   466,   363,   364,   365,   366,
     367,   368,   369,     0,   370,   371,   372,   373,   374,   375,
     376,     0,   344,   345,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,     0,     0,     0,   346,     0,
       0,     0,     0,     0,     0,     0,   344,   345,     0,     0,
       0,   347,     0,     0,   348,     0,     0,     0,     0,     0,
       0,     0,   346,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,   348,   349,
       0,   344,   345,     0,     0,     0,     0,   350,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   346,   351,   352,
       0,     0,     0,   349,     0,     0,     0,     0,     0,     0,
     347,   350,     0,   348,     0,   353,     0,     0,     0,     0,
       0,     0,   351,   352,     0,     0,     0,     0,     0,     0,
       0,     0,   354,     0,     0,     0,     0,     0,   349,   353,
       0,     0,     0,     0,     0,     0,   350,     0,   355,   356,
       0,     0,     0,     0,     0,     0,   354,   351,   352,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   355,   356,   353,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   357,     0,
       0,   354,     0,     0,     0,     0,     0,     0,   358,     0,
       0,     0,     0,     0,     0,     0,     0,   355,   356,     0,
       0,     0,   357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   357,     0,     0,
       0,     0,   359,     0,     0,     0,   360,   358,   361,   362,
     509,   363,   364,   365,   366,   367,   368,   369,     0,   370,
     371,   372,   373,   374,   375,   376,   359,   513,     0,     0,
     360,     0,   361,   362,     0,   363,   364,   365,   366,   367,
     368,   369,   343,   370,   371,   372,   373,   374,   375,   376,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   359,     0,     0,     0,   360,   540,   361,   362,   343,
     363,   364,   365,   366,   367,   368,   369,     0,   370,   371,
     372,   373,   374,   375,   376,     0,     0,     0,     0,   344,
     345,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,   345,   347,     0,
       0,   348,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   346,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,   349,     0,   348,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   351,   352,     0,     0,     0,
       0,     0,     0,   349,     0,     0,     0,     0,     0,     0,
       0,   350,   353,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,   352,     0,     0,     0,     0,     0,   354,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   353,
       0,     0,     0,     0,     0,   355,   356,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   355,   356,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   359,
     563,     0,     0,   360,   343,   361,   362,     0,   363,   364,
     365,   366,   367,   368,   369,     0,   370,   371,   372,   373,
     374,   375,   376,     0,     0,     0,   359,   574,   343,     0,
     360,     0,   361,   362,     0,   363,   364,   365,   366,   367,
     368,   369,     0,   370,   371,   372,   373,   374,   375,   376,
       0,   344,   345,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   346,     0,     0,
       0,     0,     0,     0,     0,   344,   345,     0,     0,     0,
     347,     0,     0,   348,     0,     0,     0,     0,     0,     0,
       0,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   347,     0,     0,   348,   349,     0,
       0,     0,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   351,   352,     0,
       0,     0,   349,     0,     0,     0,     0,     0,     0,     0,
     350,     0,     0,     0,   353,     0,     0,     0,     0,     0,
       0,   351,   352,     0,     0,     0,     0,     0,     0,     0,
       0,   354,     0,     0,     0,     0,     0,     0,   353,     0,
       0,     0,     0,     0,     0,     0,     0,   355,   356,     0,
       0,     0,     0,     0,     0,   354,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   355,   356,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   357,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   359,     0,     0,     0,   360,     0,   361,   362,     0,
     363,   364,   365,   366,   367,   368,   369,     0,   370,   371,
     372,   373,   374,   375,   376,   359,     0,     0,     0,   360,
       0,   361,   362,     0,   363,   364,   365,   467,   367,   368,
     369,     0,   370,   371,   372,   373,   374,   375,   376,     2,
       0,     4,     5,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,    28,     0,    30,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    44,     0,     0,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,     0,    75,    76,    77,
       0,     0,     0,    80,    81,     0,    82,    83,    84,    85,
      86,     0,     0,    89,     0,    91,    92,    93,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   105,
       0,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,     0,   116,   117,   118,   119,     0,   121,   122,     0,
       0,   124,   125,   126,   295,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
     141,   142,   143,   144,   145,     0,   147,   148,     0,   150,
       0,   152,   153,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   168,     0,
       0,   170,   171,   172,   173,   174,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     0,   197,   198,
       0,     0,     0,   202,   203,   204,   205,   206,   207,     0,
     208,     0,   210,   211,   212,   213,   214,   215,   216,     0,
     217,     0,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   296,     0,   297,   235,   236,
       0,   238,   239,   240,   241,   242,   243,   244,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,     0,     0,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,     0,     0,     0,     0,     0,     0,     0,     0,
     449,     0,     0,     2,   521,     4,     5,     6,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
      28,     0,    30,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,    44,     0,     0,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,     0,    68,    69,    70,    71,    72,    73,
       0,    75,    76,    77,     0,     0,     0,    80,    81,     0,
      82,    83,    84,    85,    86,     0,     0,    89,     0,    91,
      92,    93,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,   105,     0,   106,   107,   108,   109,   110,
     111,   112,     0,   113,   114,     0,   116,   117,   118,   119,
       0,   121,   122,     0,     0,   124,   125,   126,   295,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,   141,   142,   143,   144,   145,     0,
     147,   148,     0,   150,     0,   152,   153,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   167,   168,     0,     0,   170,   171,   172,   173,   174,
       0,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,     0,   197,   198,     0,     0,     0,   202,   203,   204,
     205,   206,   207,     0,   208,     0,   210,   211,   212,   213,
     214,   215,   216,     0,   217,     0,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   296,
       0,   297,   235,   236,     0,   238,   239,   240,   241,   242,
     243,   244,     0,   246,   247,   248,   249,   250,   251,   252,
     253,   254,     0,     0,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,     0,   335,     0,     0,
       0,     0,     0,   336,   337,     2,   338,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,    28,     0,    30,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    44,     0,
       0,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,     0,    75,    76,    77,     0,     0,     0,    80,
      81,     0,    82,    83,    84,    85,    86,     0,     0,    89,
       0,    91,    92,    93,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,     0,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,     0,   116,   117,
     118,   119,     0,   121,   122,     0,     0,   124,   125,   126,
     295,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,   141,   142,   143,   144,
     145,     0,   147,   148,     0,   150,     0,   152,   153,     0,
     154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,   167,   168,     0,     0,   170,   171,   172,
     173,   174,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,   197,   198,     0,     0,     0,   202,
     203,   204,   205,   206,   207,     0,   208,     0,   210,   211,
     212,   213,   214,   215,   216,     0,   217,     0,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   296,     0,   297,   235,   236,     0,   238,   239,   240,
     241,   242,   243,   244,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,     0,     0,     0,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,     0,     2,
       0,     4,     5,     6,     7,     8,   449,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,    28,     0,    30,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    44,     0,     0,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,     0,    75,    76,    77,
       0,     0,     0,    80,    81,     0,    82,    83,    84,    85,
      86,     0,     0,    89,     0,    91,    92,    93,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   105,
       0,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,     0,   116,   117,   118,   119,     0,   121,   122,     0,
       0,   124,   125,   126,   295,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
     141,   142,   143,   144,   145,     0,   147,   148,     0,   150,
       0,   152,   153,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   168,     0,
       0,   170,   171,   172,   173,   174,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     0,   197,   198,
       0,     0,     0,   202,   203,   204,   205,   206,   207,     0,
     208,     0,   210,   211,   212,   213,   214,   215,   216,     0,
     217,     0,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   296,     3,   297,   235,   236,
       0,   238,   239,   240,   241,   242,   243,   244,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,     0,     0,
      26,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,     0,     0,     0,     0,     0,    43,     0,     0,
     506,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   149,     0,     0,     0,     0,     0,
       0,     0,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,     0,     0,     0,   200,   201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    28,     0,    30,   515,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,     0,    75,    76,    77,     0,     0,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,    88,
      89,     0,    91,    92,    93,    94,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,     0,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,     0,     0,   124,   125,
     126,   295,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,   141,   142,   143,
     144,   145,     0,   147,   148,   149,   150,     0,   152,   153,
       0,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,     0,   170,   171,
     172,   173,   174,     0,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,     0,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,     0,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   296,   233,   297,   235,   236,     0,   238,   239,
     240,   241,   242,   243,   244,     0,   246,   247,   248,   249,
     250,   251,   252,   253,   254,     0,     0,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,     2,
       0,     4,     5,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,    28,     0,    30,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    44,     0,     0,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,     0,    75,    76,    77,
       0,     0,     0,    80,    81,     0,    82,    83,    84,    85,
      86,     0,     0,    89,     0,    91,    92,    93,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   105,
       0,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,     0,   116,   117,   118,   119,     0,   121,   122,     0,
       0,   124,   125,   126,   295,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
     141,   142,   143,   144,   145,     0,   147,   148,     0,   150,
       0,   152,   153,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   167,   168,     0,
       0,   170,   171,   172,   173,   174,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,     0,   197,   198,
       0,     0,     0,   202,   203,   204,   205,   206,   207,     0,
     208,     0,   210,   211,   212,   213,   214,   215,   216,     0,
     217,     0,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   296,     0,   297,   235,   236,
       0,   238,   239,   240,   241,   242,   243,   244,     0,   246,
     247,   248,   249,   250,   251,   252,   253,   254,     0,     0,
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,     2,     0,     4,     5,     6,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    28,
       0,    30,     0,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     0,    44,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     0,    64,    65,
      66,    67,     0,    68,    69,    70,    71,    72,    73,     0,
      75,    76,    77,     0,     0,     0,    80,    81,     0,    82,
      83,    84,    85,    86,     0,     0,    89,     0,    91,    92,
      93,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   105,     0,   106,   107,   108,   109,   110,   111,
     112,     0,   113,   114,     0,   116,   117,   118,   119,     0,
     121,   122,     0,     0,   124,   125,   126,     0,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,   141,   142,   143,   144,   145,   395,   147,
     148,     0,   150,     0,   152,   153,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   168,     0,     0,   170,   171,   172,   173,   174,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
       0,   197,   198,     0,     0,     0,   202,   203,   204,   205,
     206,   207,     0,   208,     0,   210,   211,   212,   213,   214,
     215,   216,     0,   217,     0,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   485,   231,   296,     0,
     297,   486,   236,     0,   238,   239,   240,   241,   242,   243,
     244,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,     0,     0,     0,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,     2,     0,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,    28,     0,    30,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    44,     0,
       0,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,     0,    75,    76,    77,     0,     0,     0,    80,
      81,     0,    82,    83,    84,    85,    86,     0,     0,    89,
       0,    91,    92,    93,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,     0,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,     0,   116,   117,
     118,   119,     0,   121,   122,     0,     0,   124,   125,   126,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,   141,   142,   143,   144,
     145,     0,   147,   148,     0,   150,     0,   152,   153,     0,
     154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,   167,   168,     0,     0,   170,   171,   172,
     173,   174,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,   197,   198,     0,     0,     0,   202,
     203,   204,   205,   206,   207,     0,   208,     0,   210,   211,
     212,   213,   214,   215,   216,     0,   217,     0,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   296,     0,   297,   235,   236,     0,   238,   239,   240,
     241,   242,   243,   244,     0,   246,   247,   248,   249,   250,
     251,   252,   253,   254,     0,     0,     0,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266
};

static const yytype_int16 yycheck[] =
{
       0,    27,   307,   337,   359,   159,   404,   268,   519,    27,
     419,   280,   287,   287,    47,   288,   199,   291,   293,   292,
     294,   287,   484,     0,   288,   380,   292,   293,   292,   288,
     288,   493,   494,   292,   292,   288,   288,   287,   287,   292,
     292,   291,   286,   288,   288,   400,   401,   292,    74,   292,
     459,   460,   295,    79,   516,   517,    74,   289,   288,   287,
     329,    79,   292,   574,   288,   420,   327,   292,   292,   288,
     295,   533,   288,   292,    74,   292,   292,   288,   295,    79,
     287,   292,   480,   288,   267,   288,   269,   292,   288,   292,
     288,   286,   292,   247,   292,   287,   292,   495,   252,   295,
     287,   287,   287,   287,   292,   287,   287,   301,   286,   292,
     287,   287,   291,   287,   294,   449,   287,   292,   301,   287,
     146,   291,   456,   521,   297,   292,   292,   247,   537,   312,
     295,   292,   273,   438,   287,   286,   294,   406,    68,   291,
     323,   288,   292,   326,   292,   291,   291,   502,   287,   175,
     293,   295,   335,   562,   289,   295,   387,   175,   295,   293,
     291,   293,   288,   520,   209,   146,   308,   434,   444,   528,
      -1,    -1,   506,   442,    -1,    -1,   359,    -1,    -1,   362,
      -1,    -1,   451,   209,   367,    -1,    -1,    -1,    -1,    -1,
      -1,   209,    -1,    -1,    -1,    -1,   379,   380,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,   392,
      -1,   237,    -1,   518,    -1,    -1,    -1,   400,   401,   237,
      -1,    -1,    -1,    -1,    -1,    -1,   409,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   420,   421,   422,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   432,
      -1,    -1,    -1,    -1,    -1,   524,    -1,    -1,    -1,    -1,
      -1,   287,    -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,
      -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     280,    -1,   308,    -1,   467,    -1,   469,    -1,    -1,    -1,
     308,   474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     569,    -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,
     336,   337,   581,    -1,   314,    -1,    -1,    -1,    -1,   502,
     503,    -1,    -1,   323,    -1,    -1,    -1,   327,   511,   329,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,   338,    -1,
      -1,    -1,    -1,   526,    -1,    -1,   529,   530,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   382,   540,    -1,    -1,
      -1,   387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,    -1,    -1,
      -1,   391,    -1,   419,   577,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,
      -1,    -1,    -1,   449,    -1,    -1,    -1,    -1,    -1,    -1,
     456,    -1,    -1,   459,   460,    -1,    -1,    -1,   438,   439,
      -1,    -1,   442,   443,    -1,    -1,    -1,   447,   448,    -1,
      -1,   451,    -1,    -1,   480,    -1,    -1,    -1,   458,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,
      -1,    -1,    -1,    -1,    -1,    -1,   476,    -1,    -1,    -1,
     506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   521,    -1,    -1,    -1,    -1,
      -1,    -1,   528,    -1,    -1,    -1,   506,    -1,    -1,    -1,
      -1,   537,    -1,    -1,    -1,   515,    -1,    -1,   518,    -1,
     520,    -1,    -1,   523,   524,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   562,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   565,    -1,    -1,    -1,   569,
      -1,     0,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,   581,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    72,    -1,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,    -1,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,    -1,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    -1,
     289,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,
     299,    -1,   301,   302,   303,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    -1,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,    -1,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,    -1,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,   289,    -1,    -1,    -1,    -1,   294,    -1,
      -1,    -1,    -1,   299,    -1,   301,   302,   303,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,    -1,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,    -1,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,    -1,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    -1,   289,    -1,    -1,    -1,    -1,   294,
      -1,    -1,    -1,    -1,   299,    -1,   301,   302,   303,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,    -1,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,    -1,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,    -1,   287,    -1,   289,   290,    -1,    -1,    -1,
     294,    -1,    -1,    -1,    -1,   299,    -1,   301,   302,   303,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,   135,   136,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,    -1,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      -1,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      -1,    -1,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,    -1,   287,    -1,   289,   290,    -1,    -1,
      -1,   294,    -1,    -1,    -1,    -1,   299,    -1,   301,   302,
     303,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    -1,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,    -1,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,    -1,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,    -1,   287,    -1,   289,    -1,    -1,
      -1,    -1,   294,    -1,    -1,    -1,    -1,   299,    -1,   301,
     302,   303,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    87,    88,    -1,    90,
      91,    92,    93,    94,    -1,    96,    97,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,   134,   135,   136,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,    -1,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    -1,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,    -1,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    -1,   255,   256,   257,   258,   259,   260,
     261,    -1,   263,   264,   265,   266,   267,   268,   269,   270,
     271,    -1,    -1,    -1,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,    -1,   287,    -1,    -1,    -1,
      -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,   299,    -1,
     301,   302,   303,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    -1,    -1,    -1,    87,    88,    -1,
      90,    91,    92,    93,    94,    -1,    96,    97,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    -1,   184,   185,   186,   187,   188,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,    -1,   215,   216,   217,   218,   219,
     220,   221,   222,    -1,   224,    -1,   226,   227,   228,   229,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
     260,   261,    -1,   263,   264,   265,   266,   267,   268,   269,
     270,   271,    -1,    -1,    -1,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,    -1,   287,   288,    -1,
      -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,   299,
      -1,   301,   302,   303,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    72,    -1,    74,    75,    76,    77,    78,
      79,    -1,    81,    82,    83,    -1,    -1,    -1,    87,    88,
      -1,    90,    91,    92,    93,    94,    -1,    96,    97,    -1,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,    -1,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,   184,   185,   186,   187,   188,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   215,   216,   217,   218,
     219,   220,   221,   222,    -1,   224,    -1,   226,   227,   228,
     229,   230,   231,   232,    -1,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    -1,   255,   256,   257,   258,
     259,   260,   261,    -1,   263,   264,   265,   266,   267,   268,
     269,   270,   271,    -1,    -1,    -1,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,    -1,   287,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,    -1,    -1,    -1,
     299,    -1,   301,   302,   303,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    -1,    90,    91,    92,    93,    94,    -1,    96,    97,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,   184,   185,   186,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,    -1,   215,   216,   217,
     218,   219,   220,   221,   222,    -1,   224,    -1,   226,   227,
     228,   229,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,    -1,   263,   264,   265,   266,   267,
     268,   269,   270,   271,    -1,    -1,    -1,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,    -1,   287,
      -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,
      -1,   299,    -1,   301,   302,   303,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    72,    -1,    74,    75,    76,
      77,    78,    79,    -1,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    -1,    90,    91,    92,    93,    94,    -1,    96,
      97,    -1,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,    -1,   134,   135,   136,
     137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
      -1,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
     187,   188,   189,    -1,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,   215,   216,
     217,   218,   219,   220,   221,   222,    -1,   224,    -1,   226,
     227,   228,   229,   230,   231,   232,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    -1,   255,   256,
     257,   258,   259,   260,   261,    -1,   263,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,    -1,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,    -1,
     287,    -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,
      -1,    -1,   299,    -1,   301,   302,   303,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    -1,    90,    91,    92,    93,    94,    -1,
      96,    97,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    -1,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,    -1,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,   184,   185,
     186,   187,   188,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,    -1,   215,
     216,   217,   218,   219,   220,   221,   222,    -1,   224,    -1,
     226,   227,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,    -1,   263,   264,   265,
     266,   267,   268,   269,   270,   271,    -1,    -1,    -1,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
      -1,   287,    -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,
      -1,    -1,    -1,   299,    -1,   301,   302,   303,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    -1,
      -1,    -1,    87,    88,    -1,    90,    91,    92,    93,    94,
      -1,    96,    97,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
     135,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,    -1,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,    -1,   184,
     185,   186,   187,   188,   189,    -1,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
     215,   216,   217,   218,   219,   220,   221,   222,    -1,   224,
      -1,   226,   227,   228,   229,   230,   231,   232,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    -1,
     255,   256,   257,   258,   259,   260,   261,    10,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    -1,    -1,    -1,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    10,   287,    -1,    -1,    -1,    -1,    -1,    -1,   294,
      -1,     4,    -1,    -1,   299,    -1,   301,   302,   303,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    -1,    45,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,    -1,    96,    -1,   114,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   122,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,   167,    -1,    -1,   130,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,   184,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,   183,   184,    -1,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,    -1,    -1,    -1,
     223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   211,    -1,
      -1,    -1,   215,   216,   233,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   287,   288,    10,   250,   291,   292,
     293,   294,    -1,   296,   297,   298,   299,   300,   301,   302,
      -1,   304,   305,   306,   307,   308,   309,   310,   287,   288,
      10,    -1,   291,    -1,   293,   294,    -1,   296,   297,   298,
     299,   300,   301,   302,    -1,   304,   305,   306,   307,   308,
     309,   310,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
     114,    -1,    57,    58,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,   133,
     134,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    86,   122,    -1,    89,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,   114,
     150,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,   167,   133,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,   184,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
      -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,    -1,    -1,   287,   288,    -1,    -1,   291,   233,   293,
     294,    -1,   296,   297,   298,   299,   300,   301,   302,    -1,
     304,   305,   306,   307,   308,   309,   310,   287,   288,    -1,
      -1,   291,    -1,   293,   294,    -1,   296,   297,   298,   299,
     300,   301,   302,    10,   304,   305,   306,   307,   308,   309,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   287,    -1,    -1,    -1,   291,   292,   293,   294,
      10,   296,   297,   298,   299,   300,   301,   302,    -1,   304,
     305,   306,   307,   308,   309,   310,    -1,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,   114,    -1,    89,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,   134,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,   134,    -1,    -1,    -1,    -1,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     287,   288,    -1,    -1,   291,    10,   293,   294,    -1,   296,
     297,   298,   299,   300,   301,   302,    -1,   304,   305,   306,
     307,   308,   309,   310,    -1,    -1,    -1,   287,    -1,    10,
      -1,   291,    -1,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,    -1,   304,   305,   306,   307,   308,   309,
     310,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,   114,
      -1,    57,    58,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,   133,   134,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      86,   122,    -1,    89,    -1,   150,    -1,    -1,    -1,    -1,
      -1,    -1,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,   114,   150,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   183,   184,
      -1,    -1,    -1,    -1,    -1,    -1,   167,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,
      -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,
      -1,    -1,   287,    -1,    -1,    -1,   291,   233,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    -1,   304,
     305,   306,   307,   308,   309,   310,   287,   288,    -1,    -1,
     291,    -1,   293,   294,    -1,   296,   297,   298,   299,   300,
     301,   302,    10,   304,   305,   306,   307,   308,   309,   310,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   287,    -1,    -1,    -1,   291,   292,   293,   294,    10,
     296,   297,   298,   299,   300,   301,   302,    -1,   304,   305,
     306,   307,   308,   309,   310,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    86,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,   114,    -1,    89,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   133,   134,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,   183,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,
     288,    -1,    -1,   291,    10,   293,   294,    -1,   296,   297,
     298,   299,   300,   301,   302,    -1,   304,   305,   306,   307,
     308,   309,   310,    -1,    -1,    -1,   287,   288,    10,    -1,
     291,    -1,   293,   294,    -1,   296,   297,   298,   299,   300,
     301,   302,    -1,   304,   305,   306,   307,   308,   309,   310,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    89,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   287,    -1,    -1,    -1,   291,    -1,   293,   294,    -1,
     296,   297,   298,   299,   300,   301,   302,    -1,   304,   305,
     306,   307,   308,   309,   310,   287,    -1,    -1,    -1,   291,
      -1,   293,   294,    -1,   296,   297,   298,   299,   300,   301,
     302,    -1,   304,   305,   306,   307,   308,   309,   310,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    -1,    90,    91,    92,    93,
      94,    -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,    -1,   126,   127,   128,   129,    -1,   131,   132,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,    -1,   163,
      -1,   165,   166,    -1,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,    -1,
      -1,   185,   186,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,    -1,   212,   213,
      -1,    -1,    -1,   217,   218,   219,   220,   221,   222,    -1,
     224,    -1,   226,   227,   228,   229,   230,   231,   232,    -1,
     234,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,    -1,   263,
     264,   265,   266,   267,   268,   269,   270,   271,    -1,    -1,
      -1,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     294,    -1,    -1,     3,   298,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    -1,    -1,    -1,    87,    88,    -1,
      90,    91,    92,    93,    94,    -1,    -1,    97,    -1,    99,
     100,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,    -1,   126,   127,   128,   129,
      -1,   131,   132,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,    -1,
     160,   161,    -1,   163,    -1,   165,   166,    -1,   168,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     180,   181,   182,    -1,    -1,   185,   186,   187,   188,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,    -1,   212,   213,    -1,    -1,    -1,   217,   218,   219,
     220,   221,   222,    -1,   224,    -1,   226,   227,   228,   229,
     230,   231,   232,    -1,   234,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
     260,   261,    -1,   263,   264,   265,   266,   267,   268,   269,
     270,   271,    -1,    -1,    -1,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,    -1,   287,    -1,    -1,
      -1,    -1,    -1,   293,   294,     3,   296,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    -1,    90,    91,    92,    93,    94,    -1,    -1,    97,
      -1,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,    -1,   126,   127,
     128,   129,    -1,   131,   132,    -1,    -1,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,   160,   161,    -1,   163,    -1,   165,   166,    -1,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   180,   181,   182,    -1,    -1,   185,   186,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,    -1,   212,   213,    -1,    -1,    -1,   217,
     218,   219,   220,   221,   222,    -1,   224,    -1,   226,   227,
     228,   229,   230,   231,   232,    -1,   234,    -1,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,    -1,   263,   264,   265,   266,   267,
     268,   269,   270,   271,    -1,    -1,    -1,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,    -1,     3,
      -1,     5,     6,     7,     8,     9,   294,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    -1,    90,    91,    92,    93,
      94,    -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,    -1,   126,   127,   128,   129,    -1,   131,   132,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,    -1,   163,
      -1,   165,   166,    -1,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,    -1,
      -1,   185,   186,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,    -1,   212,   213,
      -1,    -1,    -1,   217,   218,   219,   220,   221,   222,    -1,
     224,    -1,   226,   227,   228,   229,   230,   231,   232,    -1,
     234,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,     4,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,    -1,   263,
     264,   265,   266,   267,   268,   269,   270,   271,    -1,    -1,
      28,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   211,    -1,    -1,    -1,   215,   216,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    -1,    32,   294,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    72,    -1,    74,    75,    76,
      77,    78,    79,    -1,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    -1,    90,    91,    92,    93,    94,    -1,    96,
      97,    -1,    99,   100,   101,   102,    -1,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,    -1,   160,   161,   162,   163,    -1,   165,   166,
      -1,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,    -1,    -1,   185,   186,
     187,   188,   189,    -1,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,   215,   216,
     217,   218,   219,   220,   221,   222,    -1,   224,    -1,   226,
     227,   228,   229,   230,   231,   232,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    -1,   255,   256,
     257,   258,   259,   260,   261,    -1,   263,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,    -1,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,     3,
      -1,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    -1,    90,    91,    92,    93,
      94,    -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,    -1,   126,   127,   128,   129,    -1,   131,   132,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,   160,   161,    -1,   163,
      -1,   165,   166,    -1,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,    -1,
      -1,   185,   186,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,    -1,   212,   213,
      -1,    -1,    -1,   217,   218,   219,   220,   221,   222,    -1,
     224,    -1,   226,   227,   228,   229,   230,   231,   232,    -1,
     234,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,    -1,   263,
     264,   265,   266,   267,   268,   269,   270,   271,    -1,    -1,
      -1,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,     3,    -1,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    72,    -1,    74,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    -1,    -1,    -1,    87,    88,    -1,    90,
      91,    92,    93,    94,    -1,    -1,    97,    -1,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,    -1,   126,   127,   128,   129,    -1,
     131,   132,    -1,    -1,   135,   136,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,    -1,   163,    -1,   165,   166,    -1,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
     181,   182,    -1,    -1,   185,   186,   187,   188,   189,    -1,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
      -1,   212,   213,    -1,    -1,    -1,   217,   218,   219,   220,
     221,   222,    -1,   224,    -1,   226,   227,   228,   229,   230,
     231,   232,    -1,   234,    -1,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,   252,   253,    -1,   255,   256,   257,   258,   259,   260,
     261,    -1,   263,   264,   265,   266,   267,   268,   269,   270,
     271,    -1,    -1,    -1,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,     3,    -1,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    -1,    90,    91,    92,    93,    94,    -1,    -1,    97,
      -1,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,    -1,   126,   127,
     128,   129,    -1,   131,   132,    -1,    -1,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,    -1,   160,   161,    -1,   163,    -1,   165,   166,    -1,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   180,   181,   182,    -1,    -1,   185,   186,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,    -1,   212,   213,    -1,    -1,    -1,   217,
     218,   219,   220,   221,   222,    -1,   224,    -1,   226,   227,
     228,   229,   230,   231,   232,    -1,   234,    -1,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,    -1,   263,   264,   265,   266,   267,
     268,   269,   270,   271,    -1,    -1,    -1,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    69,    70,    71,    72,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      87,    88,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   115,   116,   117,   118,
     119,   120,   121,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   134,   135,   136,   137,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   287,   289,   294,
     299,   301,   302,   303,   312,   313,   314,   315,   316,   317,
     318,   319,   322,   323,   324,   327,   336,   339,   344,   345,
     350,   353,   356,   359,   360,   138,   249,   251,   336,   337,
     343,   287,   325,   326,   337,   338,   339,   287,   328,   337,
     339,   341,   287,    47,   287,   336,   360,   287,   337,   340,
     339,   344,   340,   287,   337,   342,   287,   289,   344,   318,
     344,   346,     0,   319,   286,   287,   293,   294,   296,   332,
     333,   335,   337,    10,    57,    58,    73,    86,    89,   114,
     122,   133,   134,   150,   167,   183,   184,   223,   233,   287,
     291,   293,   294,   296,   297,   298,   299,   300,   301,   302,
     304,   305,   306,   307,   308,   309,   310,   349,   357,   358,
     287,   344,   287,   247,   344,   351,   352,   292,   287,   323,
     341,   294,   291,   344,   339,   159,   247,   252,   361,   362,
     287,   287,   339,   344,   287,   344,   318,   288,   290,   292,
     295,   299,   344,   354,   336,   334,   335,   339,   339,   292,
     287,   291,   294,   288,   354,   295,   344,   344,   344,   354,
     321,   336,   287,   288,   301,   355,   326,   344,   286,   287,
     339,   344,   288,   292,   292,   354,   354,   292,   292,   294,
     333,   288,   290,   344,   288,   292,   292,   295,   292,   295,
     297,   332,   354,   344,   344,   288,   295,   299,   288,   291,
     344,   247,   352,   288,   292,   288,   292,   323,   329,   330,
     331,   339,   295,   319,   339,   247,   252,   336,   362,   363,
     364,   288,   288,   339,   339,   292,   319,   273,   320,   299,
     344,   335,   287,   291,   339,   332,   294,   332,   288,   295,
     344,   287,   344,   288,   344,   294,   339,   347,   286,   288,
     292,   298,   333,   294,    68,   355,   291,   288,   292,   291,
     291,   355,   355,   333,   287,   354,   344,   295,   339,   344,
     292,   339,   348,   355,   355,   323,   322,   330,   333,   339,
     319,   288,   344,   364,   344,   344,   288,   288,   355,   293,
     288,   332,   295,   288,   344,   292,   295,   288,   288,   288,
     295,   288,   293,   332,   288,   339,   319,   291,   293,   322,
     344,   288,   319
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 332 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 5:
#line 333 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 6:
#line 334 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 7:
#line 335 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 8:
#line 336 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 9:
#line 337 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 10:
#line 338 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 11:
#line 339 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 12:
#line 340 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 13:
#line 341 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 79:
#line 413 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 80:
#line 414 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 81:
#line 415 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 82:
#line 416 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 83:
#line 417 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 84:
#line 418 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 85:
#line 419 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 86:
#line 420 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 87:
#line 421 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 88:
#line 422 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 89:
#line 423 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 90:
#line 424 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 91:
#line 425 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 92:
#line 426 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 93:
#line 427 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 94:
#line 428 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 95:
#line 429 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 96:
#line 430 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 97:
#line 431 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 98:
#line 432 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 99:
#line 433 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 100:
#line 434 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 101:
#line 435 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 102:
#line 436 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 103:
#line 437 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 104:
#line 438 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 105:
#line 439 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 106:
#line 440 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 107:
#line 441 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 108:
#line 442 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 109:
#line 443 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 110:
#line 444 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 111:
#line 445 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 112:
#line 446 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 113:
#line 447 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 114:
#line 448 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 115:
#line 449 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 116:
#line 450 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 117:
#line 451 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 118:
#line 452 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 119:
#line 453 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 120:
#line 454 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 121:
#line 455 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 122:
#line 456 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 123:
#line 457 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 124:
#line 458 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 125:
#line 459 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 126:
#line 460 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 127:
#line 461 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 128:
#line 462 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 129:
#line 463 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 130:
#line 464 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 131:
#line 470 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 132:
#line 471 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 133:
#line 472 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 134:
#line 473 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 135:
#line 474 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 136:
#line 475 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 137:
#line 476 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 138:
#line 477 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 139:
#line 478 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 140:
#line 479 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 141:
#line 480 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 142:
#line 481 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 143:
#line 482 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 144:
#line 483 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 145:
#line 484 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 146:
#line 485 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 147:
#line 486 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 148:
#line 487 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 149:
#line 488 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 150:
#line 489 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 151:
#line 490 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 152:
#line 491 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 153:
#line 492 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 154:
#line 493 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 155:
#line 494 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 156:
#line 495 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 157:
#line 496 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 158:
#line 497 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 159:
#line 498 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 160:
#line 499 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 161:
#line 500 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 162:
#line 501 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 163:
#line 502 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 164:
#line 503 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 165:
#line 504 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 166:
#line 505 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 167:
#line 506 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 168:
#line 507 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 169:
#line 508 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 170:
#line 509 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 171:
#line 510 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 172:
#line 511 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 173:
#line 512 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 174:
#line 513 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 175:
#line 514 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 176:
#line 515 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 177:
#line 516 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 178:
#line 517 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 179:
#line 518 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 180:
#line 519 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 181:
#line 520 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 182:
#line 521 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 183:
#line 522 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 184:
#line 523 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 185:
#line 524 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 186:
#line 525 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 187:
#line 526 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 188:
#line 527 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 189:
#line 528 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 190:
#line 529 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 191:
#line 530 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 192:
#line 531 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 193:
#line 532 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 194:
#line 533 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 195:
#line 534 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 196:
#line 535 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 197:
#line 536 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 198:
#line 537 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 199:
#line 538 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 200:
#line 539 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 201:
#line 540 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 202:
#line 541 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 203:
#line 542 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 204:
#line 543 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 205:
#line 544 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 206:
#line 545 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 207:
#line 546 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 232:
#line 578 "hl_yacc.y++"
    {
			// Just leave the corresponding text alone
			// yyerror() will mark it as erroneous.
			yyclearin;
			yyerrok;
		}
    break;

  case 246:
#line 608 "hl_yacc.y++"
    {if(words[(yyvsp[(1) - (1)])]=="t") colorize((yylsp[(1) - (1)]),highlight_parameter);
			else colorize((yylsp[(1) - (1)]),highlight_error);}
    break;

  case 289:
#line 695 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[(1) - (1)])],"variable");}
    break;

  case 290:
#line 700 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 291:
#line 701 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 292:
#line 702 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 293:
#line 703 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 294:
#line 704 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 295:
#line 705 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 296:
#line 706 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 297:
#line 707 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 298:
#line 708 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 299:
#line 709 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 300:
#line 710 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 301:
#line 711 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 302:
#line 712 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 303:
#line 713 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 304:
#line 714 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 305:
#line 715 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 306:
#line 716 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 307:
#line 717 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 308:
#line 721 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 309:
#line 722 "hl_yacc.y++"
    {
				(yyval)=(yyvsp[(1) - (1)]);

				// Recolorize the word as plain (it
				// was previously colorized as a known
				// reserved word).

				colorize((yylsp[(1) - (1)]),highlight_plain);
			}
    break;

  case 310:
#line 737 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[(1) - (1)])],"type");
			colorize((yylsp[(1) - (1)]),highlight_type);}
    break;

  case 311:
#line 739 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[(1) - (1)])],"type");
			colorize((yylsp[(1) - (1)]),highlight_type);}
    break;

  case 312:
#line 744 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 313:
#line 745 "hl_yacc.y++"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 314:
#line 749 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[(1) - (1)])],"problem");
			colorize((yylsp[(1) - (1)]),highlight_type);}
    break;

  case 315:
#line 754 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[(1) - (1)])],"function");}
    break;

  case 316:
#line 758 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[(1) - (1)])],"varf");
			colorize((yylsp[(1) - (1)]),highlight_type);}
    break;

  case 317:
#line 763 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[(1) - (1)])],"border");
			colorize((yylsp[(1) - (1)]),highlight_type);}
    break;

  case 401:
#line 900 "hl_yacc.y++"
    {if(words[(yyvsp[(1) - (1)])]!="i") colorize((yylsp[(1) - (1)]),highlight_error);}
    break;


/* Line 1267 of yacc.c.  */
#line 5107 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



