/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

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
     PERIODIC = 434,
     PI = 435,
     PLOT = 436,
     PLUSEQ = 437,
     PLUSPLUS = 438,
     POLAR = 439,
     POW = 440,
     POWER = 441,
     PRECISION = 442,
     PRECON = 443,
     PROBLEM = 444,
     PROCESSOR = 445,
     PS = 446,
     QFE = 447,
     QFNBPE = 448,
     QFNBPT = 449,
     QFORDER = 450,
     QFT = 451,
     QF1PE = 452,
     QF1PELUMP = 453,
     QF1PT = 454,
     QF1PTLUMP = 455,
     QF2PE = 456,
     QF2PT = 457,
     QF2PT4P1 = 458,
     QF3PE = 459,
     QF5PT = 460,
     QF7PT = 461,
     QF9PT = 462,
     RATIO = 463,
     READMESH = 464,
     REAL = 465,
     REGION = 466,
     RESCALING = 467,
     RETURN = 468,
     RT0 = 469,
     RT0ORTHO = 470,
     SAVE = 471,
     SAVEMESH = 472,
     SET = 473,
     SIGMA = 474,
     SIN = 475,
     SINH = 476,
     SLASHEQ = 477,
     SMALL_N = 478,
     SOLVE = 479,
     SOLVER = 480,
     SPLIT = 481,
     SPLITIN2 = 482,
     SPLITMESH = 483,
     SPLITPBEDGE = 484,
     SQRT = 485,
     SQUARE = 486,
     STAREQ = 487,
     STRATEGY = 488,
     STRING = 489,
     SUM = 490,
     SYM = 491,
     T = 492,
     TAN = 493,
     TANH = 494,
     TGV = 495,
     THETAMAX = 496,
     TOL = 497,
     TRIANGULATE = 498,
     TRUNC = 499,
     UMFPACK = 500,
     USER_BORDER = 501,
     USER_FUNCTION = 502,
     USER_PROBLEM = 503,
     USER_TYPE = 504,
     USER_VARF = 505,
     USER_VARIABLE = 506,
     VALUE = 507,
     VARF = 508,
     VARROW = 509,
     VECTOR = 510,
     VEPS = 511,
     VERBOSITY = 512,
     VERSION = 513,
     VISO = 514,
     WAIT = 515,
     WHILE = 516,
     X = 517,
     Y = 518,
     Z = 519,
     NBCOEF = 520,
     TOLPIVOT = 521,
     TOLPIVOTSYM = 522,
     L1 = 523,
     L2 = 524,
     LINFTY = 525
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
#define PERIODIC 434
#define PI 435
#define PLOT 436
#define PLUSEQ 437
#define PLUSPLUS 438
#define POLAR 439
#define POW 440
#define POWER 441
#define PRECISION 442
#define PRECON 443
#define PROBLEM 444
#define PROCESSOR 445
#define PS 446
#define QFE 447
#define QFNBPE 448
#define QFNBPT 449
#define QFORDER 450
#define QFT 451
#define QF1PE 452
#define QF1PELUMP 453
#define QF1PT 454
#define QF1PTLUMP 455
#define QF2PE 456
#define QF2PT 457
#define QF2PT4P1 458
#define QF3PE 459
#define QF5PT 460
#define QF7PT 461
#define QF9PT 462
#define RATIO 463
#define READMESH 464
#define REAL 465
#define REGION 466
#define RESCALING 467
#define RETURN 468
#define RT0 469
#define RT0ORTHO 470
#define SAVE 471
#define SAVEMESH 472
#define SET 473
#define SIGMA 474
#define SIN 475
#define SINH 476
#define SLASHEQ 477
#define SMALL_N 478
#define SOLVE 479
#define SOLVER 480
#define SPLIT 481
#define SPLITIN2 482
#define SPLITMESH 483
#define SPLITPBEDGE 484
#define SQRT 485
#define SQUARE 486
#define STAREQ 487
#define STRATEGY 488
#define STRING 489
#define SUM 490
#define SYM 491
#define T 492
#define TAN 493
#define TANH 494
#define TGV 495
#define THETAMAX 496
#define TOL 497
#define TRIANGULATE 498
#define TRUNC 499
#define UMFPACK 500
#define USER_BORDER 501
#define USER_FUNCTION 502
#define USER_PROBLEM 503
#define USER_TYPE 504
#define USER_VARF 505
#define USER_VARIABLE 506
#define VALUE 507
#define VARF 508
#define VARROW 509
#define VECTOR 510
#define VEPS 511
#define VERBOSITY 512
#define VERSION 513
#define VISO 514
#define WAIT 515
#define WHILE 516
#define X 517
#define Y 518
#define Z 519
#define NBCOEF 520
#define TOLPIVOT 521
#define TOLPIVOTSYM 522
#define L1 523
#define L2 524
#define LINFTY 525




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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined (YYLTYPE) && ! defined (YYLTYPE_IS_DECLARED)
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


/* Line 219 of yacc.c.  */
#line 678 "y.tab.c"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYLTYPE_IS_TRIVIAL) && YYLTYPE_IS_TRIVIAL \
             && defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  317
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7655

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  296
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  53
/* YYNRULES -- Number of rules. */
#define YYNRULES  392
/* YYNRULES -- Number of states. */
#define YYNSTATES  556

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   525

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short int yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   288,     2,     2,     2,   294,   282,   290,
     272,   273,   291,   286,   275,   287,   283,   293,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   285,   271,
     280,   274,   281,   284,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   278,     2,   279,   292,   289,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   276,   295,   277,     2,     2,     2,     2,
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
     265,   266,   267,   268,   269,   270
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
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
     439,   441,   443,   446,   456,   462,   470,   476,   478,   480,
     483,   485,   496,   498,   502,   503,   505,   507,   509,   512,
     515,   523,   531,   537,   545,   551,   560,   563,   565,   569,
     574,   582,   590,   598,   603,   614,   616,   621,   622,   624,
     628,   631,   635,   637,   642,   644,   648,   652,   658,   662,
     669,   671,   676,   681,   683,   687,   689,   691,   693,   695,
     697,   699,   701,   703,   705,   707,   709,   711,   713,   715,
     717,   719,   721,   723,   725,   727,   729,   731,   733,   735,
     737,   739,   741,   743,   745,   749,   752,   755,   759,   761,
     763,   765,   767,   769,   773,   777,   779,   783,   787,   789,
     793,   795,   797,   799,   801,   803,   811,   819,   827,   833,
     838,   845,   853,   858,   864,   866,   870,   875,   877,   879,
     881,   882,   884,   888,   889,   893,   895,   897,   899,   901,
     903,   905,   907,   909,   911,   914,   918,   921,   925,   927,
     929,   931,   933,   935,   937,   939,   941,   943,   945,   947,
     949,   951,   953,   955,   957,   959,   961,   963,   965,   967,
     969,   971,   973,   976,   978,   980,   982,   986,   988,   990,
     992,   994,   998
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     297,     0,    -1,    -1,   303,    -1,    37,    -1,    39,    -1,
      53,    -1,    87,    -1,   123,    -1,   116,    -1,   118,    -1,
     152,    -1,   245,    -1,    24,    -1,     9,    -1,   117,    -1,
      30,    -1,   231,    -1,    90,    -1,     3,    -1,     7,    -1,
       8,    -1,    14,    -1,    15,    -1,    16,    -1,    18,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    32,    -1,
      34,    -1,    38,    -1,    42,    -1,    46,    -1,    49,    -1,
      50,    -1,    51,    -1,    60,    -1,    56,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    -1,    69,    -1,    70,    -1,    76,    -1,    77,    -1,
      78,    -1,    97,    -1,   129,    -1,   111,    -1,   119,    -1,
     120,    -1,   121,    -1,   135,    -1,   136,    -1,   137,    -1,
     154,    -1,   168,    -1,   181,    -1,   184,    -1,   185,    -1,
     190,    -1,   209,    -1,   211,    -1,   217,    -1,   218,    -1,
     220,    -1,   221,    -1,   228,    -1,   230,    -1,   238,    -1,
     239,    -1,   243,    -1,   244,    -1,   151,    -1,    13,    -1,
      40,    -1,    52,    -1,    71,    -1,    81,    -1,    93,    -1,
     115,    -1,   157,    -1,   158,    -1,   160,    -1,    59,    -1,
     187,    -1,   235,    -1,   148,    -1,   149,    -1,   180,    -1,
      82,    -1,   124,    -1,   223,    -1,    25,    -1,   161,    -1,
     156,    -1,   132,    -1,   126,    -1,    12,    -1,   269,    -1,
     265,    -1,   268,    -1,   270,    -1,   197,    -1,   198,    -1,
     199,    -1,   200,    -1,   201,    -1,   202,    -1,   203,    -1,
     204,    -1,   205,    -1,   206,    -1,   207,    -1,   107,    -1,
     108,    -1,     5,    -1,     6,    -1,    11,    -1,    17,    -1,
      23,    -1,    26,    -1,    27,    -1,    35,    -1,    36,    -1,
      41,    -1,    43,    -1,    44,    -1,    54,    -1,    55,    -1,
      72,    -1,    74,    -1,    75,    -1,    79,    -1,    83,    -1,
      88,    -1,    91,    -1,    92,    -1,    99,    -1,   100,    -1,
     101,    -1,   109,    -1,   110,    -1,   112,    -1,   127,    -1,
     128,    -1,   131,    -1,   139,    -1,   140,    -1,   141,    -1,
     142,    -1,   143,    -1,   144,    -1,   145,    -1,   146,    -1,
     147,    -1,   153,    -1,   163,    -1,   165,    -1,   166,    -1,
     179,    -1,   186,    -1,   188,    -1,   191,    -1,   192,    -1,
     193,    -1,   194,    -1,   195,    -1,   196,    -1,   208,    -1,
     212,    -1,   216,    -1,   219,    -1,   225,    -1,   226,    -1,
     227,    -1,   229,    -1,   233,    -1,   236,    -1,   237,    -1,
     240,    -1,   241,    -1,   242,    -1,   252,    -1,   254,    -1,
     255,    -1,   256,    -1,   259,    -1,   260,    -1,   266,    -1,
     267,    -1,   170,    -1,   171,    -1,     4,    -1,   172,    -1,
     173,    -1,   174,    -1,   175,    -1,   176,    -1,   177,    -1,
     178,    -1,   214,    -1,   215,    -1,    28,    -1,    45,    -1,
      96,    -1,   102,    -1,   125,    -1,   130,    -1,   162,    -1,
     210,    -1,   234,    -1,   304,    -1,   303,   304,    -1,     1,
      -1,   306,    -1,   307,   271,    -1,    84,   272,   307,   271,
     307,   271,   307,   273,   304,    -1,   261,   272,   328,   273,
     304,    -1,    95,   272,   328,   273,   304,    68,   304,    -1,
      95,   272,   328,   273,   304,    -1,    31,    -1,    48,    -1,
      98,    47,    -1,   311,    -1,    29,   327,   272,   305,   274,
     328,   275,   328,   273,   306,    -1,   320,    -1,   276,   303,
     277,    -1,    -1,   308,    -1,   328,    -1,   248,    -1,   213,
     328,    -1,    80,   309,    -1,   189,   324,   272,   338,   273,
     274,   328,    -1,   224,   324,   272,   338,   273,   274,   328,
      -1,   323,   278,   323,   279,   316,    -1,   323,   278,   323,
     275,   323,   279,   316,    -1,   323,   280,   323,   281,   316,
      -1,   323,   280,   323,   281,   278,   323,   279,   316,    -1,
     323,   316,    -1,   310,    -1,   309,   275,   310,    -1,   322,
     272,   328,   273,    -1,   322,   272,   328,   275,   323,   339,
     273,    -1,   322,   272,   328,   275,   331,   339,   273,    -1,
      85,   312,   325,   272,   313,   273,   306,    -1,    85,   325,
     274,   328,    -1,   253,   326,   272,   317,   275,   317,   339,
     273,   274,   328,    -1,   323,    -1,   323,   278,   323,   279,
      -1,    -1,   314,    -1,   313,   275,   314,    -1,   315,   317,
      -1,   315,   282,   317,    -1,   323,    -1,   323,   278,   323,
     279,    -1,   317,    -1,   316,   275,   316,    -1,   319,   274,
     328,    -1,   278,   318,   279,   274,   328,    -1,   278,   318,
     279,    -1,   278,   318,   279,   272,   338,   273,    -1,   319,
      -1,   319,   278,   328,   279,    -1,   319,   272,   338,   273,
      -1,   319,    -1,   318,   275,   319,    -1,   321,    -1,   300,
      -1,   299,    -1,   301,    -1,   298,    -1,   251,    -1,   247,
      -1,   248,    -1,   250,    -1,   246,    -1,   257,    -1,   258,
      -1,   155,    -1,   113,    -1,    94,    -1,   169,    -1,   262,
      -1,   263,    -1,   264,    -1,   138,    -1,   320,    -1,   321,
      -1,   323,    -1,   249,    -1,   302,    -1,   321,    -1,   321,
      -1,   321,    -1,   321,    -1,   272,   328,   273,    -1,   340,
     328,    -1,   328,   341,    -1,   328,   342,   328,    -1,   329,
      -1,   334,    -1,    47,    -1,   343,    -1,   320,    -1,   323,
     283,   320,    -1,   278,   330,   279,    -1,   328,    -1,   330,
     275,   328,    -1,   278,   332,   279,    -1,   323,    -1,   332,
     275,   323,    -1,   274,    -1,   182,    -1,   133,    -1,   232,
      -1,   222,    -1,   337,   272,   338,   273,   272,   328,   273,
      -1,   250,   272,   328,   275,   323,   339,   273,    -1,   250,
     272,   323,   275,   323,   339,   273,    -1,    33,   272,   335,
     339,   273,    -1,    33,   272,   328,   273,    -1,   164,   272,
     345,   275,   347,   273,    -1,   106,   272,   323,   275,   323,
     339,   273,    -1,   323,   272,   338,   273,    -1,   328,   284,
     328,   285,   328,    -1,   336,    -1,   335,   286,   336,    -1,
     246,   272,   328,   273,    -1,   103,    -1,   104,    -1,   105,
      -1,    -1,   328,    -1,   338,   275,   328,    -1,    -1,   339,
     275,   328,    -1,   287,    -1,   286,    -1,   288,    -1,   183,
      -1,   134,    -1,   289,    -1,   290,    -1,   183,    -1,   134,
      -1,   278,   279,    -1,   278,   328,   279,    -1,   272,   273,
      -1,   272,   338,   273,    -1,   291,    -1,   285,    -1,   283,
      -1,   292,    -1,    58,    -1,    57,    -1,   293,    -1,   294,
      -1,   286,    -1,   287,    -1,   122,    -1,    89,    -1,   282,
      -1,    10,    -1,   295,    -1,   167,    -1,   280,    -1,   114,
      -1,   281,    -1,    86,    -1,    73,    -1,   150,    -1,   333,
      -1,   344,    -1,   159,   344,    -1,   159,    -1,   320,    -1,
     346,    -1,   345,   275,   346,    -1,   159,    -1,   246,    -1,
     251,    -1,   348,    -1,   347,   275,   348,    -1,   320,   274,
     328,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   313,   313,   315,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   551,   552,
     553,   562,   563,   564,   566,   567,   568,   569,   570,   571,
     572,   573,   579,   584,   587,   589,   590,   591,   592,   596,
     597,   598,   599,   600,   601,   602,   603,   607,   608,   612,
     613,   614,   618,   619,   620,   625,   626,   629,   631,   632,
     636,   637,   641,   642,   646,   647,   651,   652,   653,   654,
     655,   656,   657,   661,   662,   666,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   692,   693,   708,   710,   715,   716,
     720,   725,   729,   734,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   752,   756,   757,   761,   765,   766,
     770,   771,   772,   773,   774,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   790,   791,   795,   799,   800,   801,
     804,   806,   807,   810,   812,   816,   817,   818,   819,   820,
     824,   825,   826,   827,   828,   829,   830,   831,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   852,   853,   854,   855,   856,
     857,   861,   862,   863,   868,   872,   873,   877,   878,   879,
     883,   884,   888
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
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
  "P1DC", "P1NC", "P2", "P2DC", "P2H", "PERIODIC", "PI", "PLOT", "PLUSEQ",
  "PLUSPLUS", "POLAR", "POW", "POWER", "PRECISION", "PRECON", "PROBLEM",
  "PROCESSOR", "PS", "QFE", "QFNBPE", "QFNBPT", "QFORDER", "QFT", "QF1PE",
  "QF1PELUMP", "QF1PT", "QF1PTLUMP", "QF2PE", "QF2PT", "QF2PT4P1", "QF3PE",
  "QF5PT", "QF7PT", "QF9PT", "RATIO", "READMESH", "REAL", "REGION",
  "RESCALING", "RETURN", "RT0", "RT0ORTHO", "SAVE", "SAVEMESH", "SET",
  "SIGMA", "SIN", "SINH", "SLASHEQ", "SMALL_N", "SOLVE", "SOLVER", "SPLIT",
  "SPLITIN2", "SPLITMESH", "SPLITPBEDGE", "SQRT", "SQUARE", "STAREQ",
  "STRATEGY", "STRING", "SUM", "SYM", "T", "TAN", "TANH", "TGV",
  "THETAMAX", "TOL", "TRIANGULATE", "TRUNC", "UMFPACK", "USER_BORDER",
  "USER_FUNCTION", "USER_PROBLEM", "USER_TYPE", "USER_VARF",
  "USER_VARIABLE", "VALUE", "VARF", "VARROW", "VECTOR", "VEPS",
  "VERBOSITY", "VERSION", "VISO", "WAIT", "WHILE", "X", "Y", "Z", "NBCOEF",
  "TOLPIVOT", "TOLPIVOTSYM", "L1", "L2", "LINFTY", "';'", "'('", "')'",
  "'='", "','", "'{'", "'}'", "'['", "']'", "'<'", "'>'", "'&'", "'.'",
  "'?'", "':'", "'+'", "'-'", "'!'", "'_'", "'''", "'*'", "'^'", "'/'",
  "'%'", "'|'", "$accept", "program", "solverchoice", "keyword", "global",
  "builtinparameter", "builtintype", "instructions", "instruction",
  "parametert", "block", "statement", "declaration", "newfespaces",
  "newfespace", "functiondefinition", "functiontype",
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
static const unsigned short int yytoknum[] =
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
     525,    59,    40,    41,    61,    44,   123,   125,    91,    93,
      60,    62,    38,    46,    63,    58,    43,    45,    33,    95,
      39,    42,    94,    47,    37,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   296,   297,   297,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   303,   303,
     303,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   305,   306,   307,   307,   307,   307,   307,   308,
     308,   308,   308,   308,   308,   308,   308,   309,   309,   310,
     310,   310,   311,   311,   311,   312,   312,   313,   313,   313,
     314,   314,   315,   315,   316,   316,   317,   317,   317,   317,
     317,   317,   317,   318,   318,   319,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   321,   321,   322,   322,   323,   323,
     324,   325,   326,   327,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   329,   330,   330,   331,   332,   332,
     333,   333,   333,   333,   333,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   335,   335,   336,   337,   337,   337,
     338,   338,   338,   339,   339,   340,   340,   340,   340,   340,
     341,   341,   341,   341,   341,   341,   341,   341,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   343,   343,   343,   344,   345,   345,   346,   346,   346,
     347,   347,   348
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     9,     5,     7,     5,     1,     1,     2,
       1,    10,     1,     3,     0,     1,     1,     1,     2,     2,
       7,     7,     5,     7,     5,     8,     2,     1,     3,     4,
       7,     7,     7,     4,    10,     1,     4,     0,     1,     3,
       2,     3,     1,     4,     1,     3,     3,     5,     3,     6,
       1,     4,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     7,     7,     7,     5,     4,
       6,     7,     4,     5,     1,     3,     4,     1,     1,     1,
       0,     1,     3,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     1,     1,     1,
       1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,   220,    19,   199,   122,   123,    20,    21,    14,   124,
     104,    80,    22,    23,    24,   125,    25,    26,    27,    28,
      29,   126,    13,    99,   127,   128,   209,     0,    16,   227,
      30,     0,    31,   129,   130,     4,    32,     5,    81,   131,
      33,   132,   133,   210,    34,   310,   228,    35,    36,    37,
      82,     6,   134,   135,    39,    90,    38,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    83,   136,   137,   138,
      49,    50,    51,   139,     0,    84,    96,   140,     0,     0,
       7,   141,    18,   142,   143,    85,   289,     0,   211,    52,
       0,   144,   145,   146,   212,   337,   338,   339,     0,   120,
     121,   147,   148,    54,   149,   288,    86,     9,    15,    10,
      55,    56,    57,     8,    97,   213,   103,   150,   151,    53,
     214,   152,   102,   349,    58,    59,    60,   153,   154,   155,
     156,   157,   158,   159,   160,   161,    93,    94,    79,    11,
     162,    61,   287,   101,    87,    88,   383,    89,   100,   215,
     163,     0,   164,   165,    62,   290,   197,   198,   200,   201,
     202,   203,   204,   205,   206,   166,    95,    63,   348,    64,
      65,   167,    91,   168,     0,    66,   169,   170,   171,   172,
     173,   174,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   175,    67,   216,    68,   176,     0,   207,
     208,   177,    69,    70,   178,    71,    72,    98,     0,   179,
     180,   181,    73,   182,    74,    17,   183,   217,    92,   184,
     185,    75,    76,   186,   187,   188,    77,    78,    12,   284,
     281,   282,   298,   283,   280,   189,     0,   190,   191,   192,
     285,   286,   193,   194,     0,   291,   292,   293,   106,   195,
     196,   107,   105,   108,     0,     0,     0,   346,   345,   347,
       0,   279,   277,   276,   278,   299,     3,   218,   221,     0,
     235,   230,   312,     0,   236,   308,   309,     0,     0,   311,
     381,   294,   282,   283,   295,   303,     0,     0,   239,   247,
     296,     0,   297,   234,     0,   301,   255,     0,     0,   229,
       0,   384,   382,     0,   300,     0,     0,   238,     0,     0,
     302,     0,     0,     0,   234,   315,     0,     1,   219,   222,
     340,     0,     0,     0,   246,   264,   270,   275,   371,   363,
     362,   378,   377,   369,   375,   368,   322,   353,   379,   373,
     321,   352,   324,   323,   340,   320,     0,   374,   376,   370,
     360,     0,   359,   366,   367,   350,   351,   358,   361,   364,
     365,   372,   380,   306,     0,   340,   305,     0,   284,     0,
     343,   334,     0,     0,     0,     0,     0,     0,     0,     0,
     387,   388,   389,     0,   385,   340,   340,     0,     0,     0,
       0,   304,   233,     0,   314,   341,     0,     0,   273,     0,
       0,   313,     0,   340,     0,     0,   356,     0,   354,     0,
       0,   307,     0,     0,   232,     0,   329,     0,     0,   248,
       0,   234,   257,     0,   253,   234,     0,     0,     0,     0,
       0,     0,     0,     0,   234,   316,   332,     0,     0,   268,
       0,     0,     0,   265,     0,   266,     0,   357,   355,     0,
       0,     0,     0,     0,   335,   328,     0,   249,     0,     0,
       0,   258,     0,   262,   256,   226,   343,   284,   280,     0,
     386,     0,   390,     0,     0,   343,   343,     0,   224,   342,
     274,   340,     0,     0,   242,     0,   244,   272,   271,   333,
       0,     0,   336,   344,     0,   343,   343,   234,     0,     0,
       0,   260,     0,   234,     0,     0,   330,     0,     0,     0,
       0,     0,   343,     0,   267,     0,     0,     0,     0,   318,
       0,     0,     0,     0,   252,   259,   261,     0,   225,   331,
     392,   391,   240,   241,   327,   326,     0,   269,   243,     0,
     325,     0,     0,   317,   250,   251,   234,   263,     0,   245,
       0,   319,   223,     0,   231,   254
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,   260,   261,   262,   263,   264,   265,   266,   267,   413,
     268,   269,   270,   288,   289,   271,   294,   460,   461,   462,
     324,   325,   397,   326,   272,   327,   291,   306,   305,   297,
     311,   286,   274,   275,   316,   496,   520,   362,   276,   370,
     371,   277,   396,   418,   278,   363,   364,   279,   280,   383,
     384,   471,   472
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -488
static const short int yypact[] =
{
     544,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  6625,  -488,  -488,
    -488,  -256,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  6357,  -488,  -488,  -488,  -255,  6357,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -229,  -488,  -488,
     -17,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -226,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  7161,  -488,  -488,  -488,
    -488,  -225,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  6625,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  2834,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  6625,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -235,  -488,  -216,  -488,  -488,  6625,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -212,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  2834,   832,  2834,  -488,  -488,  -488,
      69,  -488,  -488,  -488,  -488,  -488,  1118,  -488,  -488,  -199,
    -488,  -488,  -488,  5040,  4721,  -488,  -488,  -170,  2834,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -168,  3120,  -195,  -488,
    -488,  -167,  -488,  1976,  6625,  -488,  -171,  -165,  2834,  -488,
    7406,  -488,  -488,  -151,  -488,  -166,  -260,  4721,  -162,  2834,
    -488,  -161,  2834,  3342,  1404,  4721,  -250,  -488,  -488,  -488,
    2834,  6357,  7406,  7161,  -182,  -488,  -252,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  2262,  -488,  2548,  -488,  -488,  -488,
    -488,  2834,  -488,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -488,  -488,  -488,  -488,  2834,  2834,  4721,  7161,  -160,  3385,
    -173,  -488,  6357,  2834,  -157,  -154,  7406,  2834,  3422,  -153,
    -488,  -488,  -488,  -150,  -488,  2834,  2834,  -262,  3663,  5597,
    3687,  -488,  -488,  2834,  -488,  4721,  -234,  -248,  -488,  -247,
    -155,  -488,  5597,  2834,  2834,  2834,  -488,  -233,  -488,  3926,
    4747,  4721,  -223,  -159,  -488,  2834,  -488,  -122,  -214,  -488,
     106,  1976,  7406,  -152,  4721,  1690,  7406,  6893,  -209,  -208,
    7406,  7406,  6625,  -147,  1690,  4721,  -488,  2834,  6625,  -204,
    7406,  5597,  5865,  -182,  -202,  4721,  3952,  -488,  -488,  2834,
    -143,  2834,  4191,  -160,  -488,  -488,  2834,  -488,  6110,  -137,
    -197,  -488,  5319,  -142,  -488,    67,  -488,  -138,  -136,  -132,
    -488,  -192,  -488,  -131,  -130,  -488,  -488,  5597,  -488,  4721,
    -488,  2834,  2834,  -141,  -182,  6357,  -182,  -488,  -488,  4721,
    2834,  4215,  -488,  4721,  7406,  -488,  -488,  1976,  -129,  7406,
    5597,  -488,  7406,  1690,  -189,  2834,  -488,  7161,  2834,  2834,
    -188,  -185,  -488,  -184,  4721,  5597,  -134,  4456,  2834,  -488,
    -242,  -181,  -177,  -127,  -488,  -488,  -488,  -128,  -488,  -488,
    4721,  -488,  4721,  4721,  -488,  -488,  -172,  -488,  -182,  5597,
    -488,  4482,  7406,  -488,  -488,  -488,  1690,  -488,  -124,  -182,
    -129,  -488,  -488,  2834,  -488,  4721
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -488,  -488,  -488,  -488,  -488,  -488,  -488,  -103,  -259,  -488,
    -487,  -289,  -488,  -488,  -219,  -488,  -488,  -488,  -345,  -488,
    -384,  -380,  -488,  -315,   -25,   -26,  -488,     0,   -52,  -135,
    -488,  -488,  -179,  -488,  -488,  -488,  -488,  -488,  -488,  -488,
    -257,  -488,  -341,  -461,  -488,  -488,  -488,  -488,    11,  -488,
    -269,  -488,  -346
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -390
static const short int yytable[] =
{
     273,   285,   284,   407,   374,   504,   398,   318,   380,   433,
     320,   524,   320,   430,   510,   511,   287,   293,   443,   307,
     403,   323,   404,   323,   412,   393,   405,   438,   440,   394,
     299,   439,   441,   542,   521,   522,  -237,   543,  -237,   436,
     447,   437,   437,   298,   428,   429,   300,   303,   290,   284,
     450,   536,   437,   295,   284,   318,   309,   484,   486,   455,
     312,   456,   444,   554,   473,   474,   437,   437,   481,   317,
     482,   487,   319,   437,   292,   313,   498,   315,   499,   296,
     372,   506,   501,   507,   529,   534,   456,   456,   535,   537,
     456,   437,   544,   402,   456,   381,   545,   512,   456,   366,
     382,   548,   365,   456,   367,   373,   385,   376,   369,   377,
     386,   389,   415,   417,   421,   451,   328,   398,   422,   378,
     526,   301,   426,   480,   453,   427,   442,   464,   477,   490,
     388,   538,   459,   390,   497,   503,   502,  -388,   515,  -389,
     513,   395,   505,   508,   509,   539,   546,   255,   304,   284,
     553,   547,   314,   419,   525,   549,   308,   302,   470,   375,
     454,   531,     0,   329,   330,   395,   465,   409,     0,     0,
     398,     0,   410,     0,     0,   478,     0,     0,     0,   331,
       0,     0,   304,   284,     0,   411,   395,     0,     0,     0,
       0,     0,   332,     0,   420,   333,     0,     0,   424,     0,
       0,     0,     0,     0,     0,     0,   395,   395,   523,     0,
     310,   284,     0,     0,   435,     0,     0,     0,     0,     0,
     334,     0,     0,     0,   395,   445,   446,     0,   335,     0,
       0,     0,     0,     0,     0,     0,   452,     0,     0,   336,
     337,     0,     0,     0,   528,     0,     0,     0,   284,     0,
       0,     0,     0,     0,     0,   273,   338,     0,   479,     0,
       0,     0,     0,     0,     0,     0,   273,     0,   295,   284,
     489,     0,   491,   339,     0,     0,     0,   493,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   552,   340,   341,
       0,     0,     0,   273,     0,     0,   284,     0,   401,     0,
     379,     0,   395,   514,     0,     0,     0,     0,     0,   387,
       0,   517,     0,     0,   273,     0,     0,     0,     0,     0,
       0,   399,   400,     0,     0,     0,   530,     0,   342,   532,
     533,     0,     0,     0,     0,     0,     0,     0,   343,   541,
       0,     0,   414,     0,     0,     0,   290,   284,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   284,     0,     0,     0,     0,     0,
       0,     0,   292,     0,   555,     0,   423,   284,   344,   457,
     345,   458,     0,     0,   346,     0,   347,   348,   349,   350,
     351,   352,   353,   354,     0,   355,   356,   357,   358,   359,
     360,   361,   469,     0,     0,     0,     0,   284,     0,     0,
       0,     0,     0,   284,     0,     0,   284,   284,     0,     0,
       0,   273,   463,     0,     0,   273,   466,     0,     0,     0,
     475,   476,     0,     0,   273,     0,     0,   284,     0,     0,
     483,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   284,     0,     0,     0,     0,     0,   495,     0,
     284,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   284,     0,     0,     0,     0,
       0,     0,   469,     0,     0,   516,     0,     0,     0,     0,
     284,     0,     0,     0,   519,     0,     0,   273,     0,   463,
       0,     0,   527,   273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   284,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   551,     0,    -2,     1,   273,     2,     3,     4,
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
     162,   163,   164,   165,   166,   167,     0,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   212,   213,   214,   215,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,  -234,   254,     0,     0,     0,
     255,     0,   256,     0,     0,     0,     0,     0,     0,     0,
     257,   258,   259,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     0,   106,   107,   108,
     109,   110,   111,   112,     0,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,     0,   123,   124,   125,   126,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,     0,   207,   208,   209,   210,   211,
     212,   213,   214,   215,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,  -234,   254,     0,     0,     0,   255,     0,
     256,     0,     0,     0,     0,     0,     0,     0,   257,   258,
     259,     2,     3,     4,     5,     6,     7,     8,     0,     9,
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
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       0,   207,   208,   209,   210,   211,   212,   213,   214,   215,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,  -234,
     254,     0,     0,     0,   255,     0,   256,     0,     0,     0,
       0,     0,     0,     0,   257,   258,   259,     2,     3,     4,
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
     162,   163,   164,   165,   166,   167,     0,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,     0,   207,   208,   209,
     210,   211,   212,   213,   214,   215,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,   254,     0,     0,     0,
     255,   392,   256,     0,     0,     0,     0,     0,     0,     0,
     257,   258,   259,     2,     3,     4,     5,     6,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,     0,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,   106,   107,   108,   109,   110,
     111,   112,     0,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,     0,   123,   124,   125,   126,     0,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,     0,   207,   208,   209,   210,   211,   212,   213,
     214,   215,     0,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,     0,   254,     0,     0,     0,   255,     0,   256,     0,
       0,     0,     0,     0,     0,     0,   257,   258,   259,     2,
       3,     4,     5,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    28,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,    80,    81,     0,    82,    83,    84,    85,
      86,     0,    88,    89,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,   106,   107,   108,   109,   110,   111,   112,     0,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,     0,
     123,   124,   125,   126,     0,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,     0,   207,
     208,   209,   210,   211,   212,   213,   214,   215,     0,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,     0,
     237,   238,   239,   240,   241,   242,   243,     0,   245,   246,
     247,   248,   249,   250,   251,   252,   253,     0,   254,     0,
       0,     0,     0,     0,   256,     0,     0,     0,     0,     0,
       0,     0,   257,   258,   259,     2,     3,     4,     5,     6,
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
     164,   165,   166,   167,     0,   168,   169,   170,   171,   172,
     173,     0,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,     0,   199,   200,   201,   202,
     203,   204,   205,   206,     0,   207,     0,   209,   210,   211,
     212,   213,   214,   215,     0,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     282,   232,   233,   234,   235,     0,   237,   238,   239,   240,
     241,   242,   243,     0,   245,   246,   247,   248,   249,   250,
     251,   252,   253,     0,   254,   406,     0,     0,     0,     0,
     256,     0,     0,     0,     0,     0,     0,     0,   257,   258,
     259,     2,     3,     4,     5,     6,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    28,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,     0,    68,    69,    70,    71,    72,    73,     0,    75,
      76,    77,     0,     0,     0,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    88,    89,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,     0,   106,   107,   108,   109,   110,   111,   112,
       0,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,     0,   123,   124,   125,   126,     0,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
       0,   168,   169,   170,   171,   172,   173,     0,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,     0,   199,   200,   201,   202,   203,   204,   205,   206,
       0,   207,     0,   209,   210,   211,   212,   213,   214,   215,
       0,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   282,   232,   233,   234,
     235,     0,   237,   238,   239,   240,   241,   242,   243,     0,
     245,   246,   247,   248,   249,   250,   251,   252,   253,     0,
     254,     0,     0,     0,     0,     0,   256,   408,     0,     0,
       0,     0,     0,     0,   257,   258,   259,     2,     3,     4,
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
     162,   163,   164,   165,   166,   167,     0,   168,   169,   170,
     171,   172,   173,     0,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,     0,   199,   200,
     201,   202,   203,   204,   205,   206,     0,   207,     0,   209,
     210,   211,   212,   213,   214,   215,     0,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   282,   232,   233,   234,   235,     0,   237,   238,
     239,   240,   241,   242,   243,     0,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,   254,     0,     0,     0,
       0,     0,   256,     0,     0,     0,     0,     0,     0,     0,
     257,   258,   259,     2,     3,     4,     5,     6,     7,     8,
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
     166,   167,     0,   168,   169,   170,   171,   172,   173,     0,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,     0,   199,   200,   201,   202,   203,   204,
     205,   206,     0,   207,     0,   209,   210,   211,   212,   213,
     214,   215,   328,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   368,   230,   282,   232,
     233,   234,   235,     0,   237,   238,   239,   240,   241,   242,
     243,     0,   245,   246,   247,   248,   249,   250,   251,   252,
     253,     0,   254,     0,     0,   328,     0,     0,   256,   329,
     330,     0,     0,     0,     0,     0,   257,   258,   259,     0,
       0,     0,     0,     0,     0,   331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   332,     0,
       0,   333,   328,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   329,   330,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   334,     0,   331,     0,
       0,     0,     0,     0,   335,     0,     0,     0,     0,     0,
       0,   332,     0,     0,   333,   336,   337,     0,     0,   329,
     330,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,     0,     0,   331,     0,     0,     0,   334,
       0,     0,     0,     0,     0,     0,     0,   335,   332,   339,
       0,   333,     0,     0,     0,     0,     0,     0,   336,   337,
       0,     0,     0,     0,   340,   341,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,   334,     0,     0,     0,
       0,     0,     0,     0,   335,     0,     0,     0,     0,     0,
       0,     0,   339,     0,     0,   336,   337,     0,     0,     0,
       0,     0,     0,     0,   342,     0,     0,   340,   341,     0,
       0,     0,   338,     0,   343,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   341,     0,   342,     0,     0,
       0,     0,     0,     0,   344,   391,   345,   343,     0,     0,
     346,     0,   347,   348,   349,   350,   351,   352,   353,   354,
       0,   355,   356,   357,   358,   359,   360,   361,     0,     0,
       0,     0,     0,     0,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,     0,     0,   344,   416,   345,
       0,     0,     0,   346,     0,   347,   348,   349,   350,   351,
     352,   353,   354,   328,   355,   356,   357,   358,   359,   360,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   344,   425,   345,   328,     0,     0,
     346,     0,   347,   348,   349,   350,   351,   352,   353,   354,
       0,   355,   356,   357,   358,   359,   360,   361,     0,     0,
     329,   330,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   331,     0,     0,     0,
       0,     0,     0,     0,   329,   330,     0,     0,     0,   332,
       0,     0,   333,     0,     0,     0,     0,     0,     0,     0,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,     0,     0,   333,   334,     0,     0,
       0,     0,     0,     0,     0,   335,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   336,   337,     0,     0,
       0,   334,     0,     0,     0,     0,     0,     0,     0,   335,
       0,     0,     0,   338,     0,     0,     0,     0,     0,     0,
     336,   337,     0,     0,     0,     0,     0,     0,     0,     0,
     339,     0,     0,     0,     0,     0,     0,   338,     0,     0,
       0,     0,     0,     0,     0,   340,   341,     0,     0,     0,
       0,     0,     0,     0,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
     341,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   342,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   344,   328,   345,   431,     0,
       0,   346,     0,   347,   348,   349,   350,   351,   352,   353,
     354,     0,   355,   356,   357,   358,   359,   360,   361,   344,
     434,   345,   328,     0,     0,   346,     0,   347,   348,   349,
     350,   351,   352,   353,   354,     0,   355,   356,   357,   358,
     359,   360,   361,   329,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   329,
     330,     0,   332,     0,     0,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   332,     0,
     334,   333,     0,     0,     0,     0,     0,     0,   335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   336,
     337,     0,     0,     0,     0,     0,   334,     0,     0,     0,
       0,     0,     0,     0,   335,     0,   338,     0,     0,     0,
       0,     0,     0,     0,     0,   336,   337,     0,     0,     0,
       0,     0,     0,   339,     0,     0,     0,     0,     0,     0,
       0,     0,   338,     0,     0,     0,     0,     0,   340,   341,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   341,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   344,     0,
     345,   328,     0,     0,   346,   448,   347,   348,   349,   350,
     351,   352,   353,   354,     0,   355,   356,   357,   358,   359,
     360,   361,     0,     0,   344,   328,   345,     0,     0,     0,
     346,   488,   347,   348,   349,   350,   351,   352,   353,   354,
       0,   355,   356,   357,   358,   359,   360,   361,   329,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   331,     0,     0,     0,     0,     0,
       0,     0,   329,   330,     0,     0,     0,   332,     0,     0,
     333,     0,     0,     0,     0,     0,     0,     0,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   332,     0,     0,   333,   334,     0,     0,     0,     0,
       0,     0,     0,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   336,   337,     0,     0,     0,   334,
       0,     0,     0,     0,     0,     0,     0,   335,     0,     0,
       0,   338,     0,     0,     0,     0,     0,     0,   336,   337,
       0,     0,     0,     0,     0,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,   338,     0,     0,     0,     0,
       0,     0,     0,   340,   341,     0,     0,     0,     0,     0,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   340,   341,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,   492,   345,   328,     0,     0,   346,
       0,   347,   348,   349,   350,   351,   352,   353,   354,     0,
     355,   356,   357,   358,   359,   360,   361,   344,     0,   345,
     518,     0,   328,   346,     0,   347,   348,   349,   350,   351,
     352,   353,   354,     0,   355,   356,   357,   358,   359,   360,
     361,     0,     0,   329,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   329,
     330,     0,   332,     0,     0,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   332,     0,
     334,   333,     0,     0,     0,     0,     0,     0,   335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   336,
     337,     0,     0,     0,     0,     0,   334,     0,     0,     0,
       0,     0,     0,     0,   335,     0,   338,     0,     0,     0,
       0,     0,     0,     0,     0,   336,   337,     0,     0,     0,
       0,     0,     0,   339,     0,     0,     0,     0,     0,     0,
       0,     0,   338,     0,     0,     0,     0,     0,   340,   341,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   341,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   344,   540,
     345,   328,     0,     0,   346,     0,   347,   348,   349,   350,
     351,   352,   353,   354,     0,   355,   356,   357,   358,   359,
     360,   361,     0,     0,   344,   550,   345,   328,     0,     0,
     346,     0,   347,   348,   349,   350,   351,   352,   353,   354,
       0,   355,   356,   357,   358,   359,   360,   361,   329,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   331,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   329,   330,     0,   332,     0,     0,
     333,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,     0,   334,   333,     0,     0,     0,
       0,     0,     0,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   336,   337,     0,     0,     0,     0,
       0,   334,     0,     0,     0,     0,     0,     0,     0,   335,
       0,   338,     0,     0,     0,     0,     0,     0,     0,     0,
     336,   337,     0,     0,     0,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,     0,   338,     0,     0,
       0,     0,     0,   340,   341,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
     341,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,     0,   345,     0,     0,     0,   346,
       0,   347,   348,   349,   350,   351,   352,   353,   354,     0,
     355,   356,   357,   358,   359,   360,   361,     0,     0,   344,
       0,   345,     0,     0,     0,   346,     0,   347,   348,   349,
     350,   351,   449,   353,   354,     0,   355,   356,   357,   358,
     359,   360,   361,     2,     0,     4,     5,     6,     7,     8,
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
       0,   121,   122,     0,     0,   124,   125,   126,   281,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,   141,   142,   143,   144,   145,     0,
     147,   148,     0,   150,     0,   152,   153,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
     166,   167,     0,     0,   169,   170,   171,   172,   173,     0,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   196,   197,     0,     0,     0,   201,   202,   203,   204,
     205,   206,     0,   207,     0,   209,   210,   211,   212,   213,
     214,   215,     0,   216,     0,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   282,     0,
     283,   234,   235,     0,   237,   238,   239,   240,   241,   242,
     243,     0,   245,   246,   247,   248,   249,   250,   251,   252,
     253,     0,   320,     0,     0,     0,     0,     0,   321,     0,
     322,     0,     2,   323,     4,     5,     6,     7,     8,     0,
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
     121,   122,     0,     0,   124,   125,   126,   281,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,   141,   142,   143,   144,   145,     0,   147,
     148,     0,   150,     0,   152,   153,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,   166,
     167,     0,     0,   169,   170,   171,   172,   173,     0,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,     0,
     196,   197,     0,     0,     0,   201,   202,   203,   204,   205,
     206,     0,   207,     0,   209,   210,   211,   212,   213,   214,
     215,     0,   216,     0,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   282,     0,   283,
     234,   235,     0,   237,   238,   239,   240,   241,   242,   243,
       0,   245,   246,   247,   248,   249,   250,   251,   252,   253,
       0,     0,     0,     0,     0,     0,     0,   432,     0,     0,
       2,   500,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,    28,     0,    30,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,    44,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,     0,    75,    76,
      77,     0,     0,     0,    80,    81,     0,    82,    83,    84,
      85,    86,     0,     0,    89,     0,    91,    92,    93,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
     105,     0,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,     0,   116,   117,   118,   119,     0,   121,   122,
       0,     0,   124,   125,   126,   281,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,   141,   142,   143,   144,   145,     0,   147,   148,     0,
     150,     0,   152,   153,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   165,   166,   167,     0,
       0,   169,   170,   171,   172,   173,     0,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,     0,   196,   197,
       0,     0,     0,   201,   202,   203,   204,   205,   206,     0,
     207,     0,   209,   210,   211,   212,   213,   214,   215,     0,
     216,     0,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   282,     0,   283,   234,   235,
       0,   237,   238,   239,   240,   241,   242,   243,     0,   245,
     246,   247,   248,   249,   250,   251,   252,   253,     2,     0,
       4,     5,     6,     7,     8,   432,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,    28,     0,    30,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,    44,     0,     0,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,    75,    76,    77,     0,
       0,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,     0,    89,     0,    91,    92,    93,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,   105,     0,
     106,   107,   108,   109,   110,   111,   112,     0,   113,   114,
       0,   116,   117,   118,   119,     0,   121,   122,     0,     0,
     124,   125,   126,   281,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,   141,
     142,   143,   144,   145,     0,   147,   148,     0,   150,     0,
     152,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   165,   166,   167,     0,     0,   169,
     170,   171,   172,   173,     0,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   196,   197,     0,     0,
       0,   201,   202,   203,   204,   205,   206,     0,   207,     0,
     209,   210,   211,   212,   213,   214,   215,     0,   216,     0,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   282,     3,   283,   234,   235,     0,   237,
     238,   239,   240,   241,   242,   243,     0,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     0,     0,    26,     0,
       0,     0,     0,   485,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
     156,   157,   158,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,     0,     0,     0,   199,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   232,
       2,     3,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    28,   494,    30,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
       0,    68,    69,    70,    71,    72,    73,     0,    75,    76,
      77,     0,     0,     0,    80,    81,     0,    82,    83,    84,
      85,    86,     0,    88,    89,     0,    91,    92,    93,    94,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
     105,     0,   106,   107,   108,   109,   110,   111,   112,     0,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
       0,     0,   124,   125,   126,   281,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,   141,   142,   143,   144,   145,     0,   147,   148,   149,
     150,     0,   152,   153,     0,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,     0,
       0,   169,   170,   171,   172,   173,     0,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
       0,   199,   200,   201,   202,   203,   204,   205,   206,     0,
     207,     0,   209,   210,   211,   212,   213,   214,   215,     0,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   282,   232,   283,   234,   235,
       0,   237,   238,   239,   240,   241,   242,   243,     0,   245,
     246,   247,   248,   249,   250,   251,   252,   253,     2,     0,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,    28,     0,    30,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,    44,     0,     0,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,     0,    75,    76,    77,     0,
       0,     0,    80,    81,     0,    82,    83,    84,    85,    86,
       0,     0,    89,     0,    91,    92,    93,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,   105,     0,
     106,   107,   108,   109,   110,   111,   112,     0,   113,   114,
       0,   116,   117,   118,   119,     0,   121,   122,     0,     0,
     124,   125,   126,   281,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,   141,
     142,   143,   144,   145,     0,   147,   148,     0,   150,     0,
     152,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   165,   166,   167,     0,     0,   169,
     170,   171,   172,   173,     0,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   196,   197,     0,     0,
       0,   201,   202,   203,   204,   205,   206,     0,   207,     0,
     209,   210,   211,   212,   213,   214,   215,     0,   216,     0,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   282,     0,   283,   234,   235,     0,   237,
     238,   239,   240,   241,   242,   243,     0,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     2,     0,     4,     5,
       6,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,    28,     0,    30,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    44,
       0,     0,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,    64,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,     0,    75,    76,    77,     0,     0,     0,
      80,    81,     0,    82,    83,    84,    85,    86,     0,     0,
      89,     0,    91,    92,    93,     0,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,     0,   113,   114,     0,   116,
     117,   118,   119,     0,   121,   122,     0,     0,   124,   125,
     126,     0,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,   141,   142,   143,
     144,   145,   380,   147,   148,     0,   150,     0,   152,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   165,   166,   167,     0,     0,   169,   170,   171,
     172,   173,     0,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,     0,   196,   197,     0,     0,     0,   201,
     202,   203,   204,   205,   206,     0,   207,     0,   209,   210,
     211,   212,   213,   214,   215,     0,   216,     0,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   467,
     230,   282,     0,   283,   468,   235,     0,   237,   238,   239,
     240,   241,   242,   243,     0,   245,   246,   247,   248,   249,
     250,   251,   252,   253,     2,     0,     4,     5,     6,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    28,     0,    30,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,    44,     0,     0,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     0,
      64,    65,    66,    67,     0,    68,    69,    70,    71,    72,
      73,     0,    75,    76,    77,     0,     0,     0,    80,    81,
       0,    82,    83,    84,    85,    86,     0,     0,    89,     0,
      91,    92,    93,     0,     0,     0,     0,     0,    99,   100,
     101,   102,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,     0,   113,   114,     0,   116,   117,   118,
     119,     0,   121,   122,     0,     0,   124,   125,   126,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,   141,   142,   143,   144,   145,
       0,   147,   148,     0,   150,     0,   152,   153,     0,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,   166,   167,     0,     0,   169,   170,   171,   172,   173,
       0,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   196,   197,     0,     0,     0,   201,   202,   203,
     204,   205,   206,     0,   207,     0,   209,   210,   211,   212,
     213,   214,   215,     0,   216,     0,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   282,
       3,   283,   234,   235,     0,   237,   238,   239,   240,   241,
     242,   243,     0,   245,   246,   247,   248,   249,   250,   251,
     252,   253,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,   156,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   195,     0,     0,     0,
     199,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232
};

static const short int yycheck[] =
{
       0,    27,    27,   344,   293,   466,   321,   266,   159,   389,
     272,   498,   272,   275,   475,   476,   272,   272,   402,   198,
     272,   283,   274,   283,   365,   275,   278,   275,   275,   279,
      47,   279,   279,   275,   495,   496,   271,   279,   273,   273,
     273,   275,   275,   272,   385,   386,   272,   272,    74,    74,
     273,   512,   275,    79,    79,   314,   272,   441,   442,   273,
     272,   275,   403,   550,   273,   273,   275,   275,   272,     0,
     274,   273,   271,   275,    74,   254,   273,   256,   275,    79,
     275,   273,   462,   275,   273,   273,   275,   275,   273,   273,
     275,   275,   273,   275,   275,   246,   273,   477,   275,   278,
     251,   273,   272,   275,   272,   272,   272,   278,   287,   274,
     272,   272,   272,   286,   271,   274,    10,   432,   272,   298,
     500,   146,   275,   438,   246,   275,   281,   279,   275,   272,
     309,   515,   421,   312,   271,    68,   278,   275,   279,   275,
     481,   320,   274,   274,   274,   279,   273,   276,   174,   174,
     274,   279,   255,   372,   499,   539,   208,   146,   427,   294,
     417,   507,    -1,    57,    58,   344,   425,   346,    -1,    -1,
     485,    -1,   351,    -1,    -1,   434,    -1,    -1,    -1,    73,
      -1,    -1,   208,   208,    -1,   364,   365,    -1,    -1,    -1,
      -1,    -1,    86,    -1,   373,    89,    -1,    -1,   377,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   385,   386,   497,    -1,
     236,   236,    -1,    -1,   393,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,    -1,   403,   404,   405,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,   133,
     134,    -1,    -1,    -1,   503,    -1,    -1,    -1,   273,    -1,
      -1,    -1,    -1,    -1,    -1,   255,   150,    -1,   437,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,   294,   294,
     449,    -1,   451,   167,    -1,    -1,    -1,   456,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   546,   182,   183,
      -1,    -1,    -1,   293,    -1,    -1,   321,    -1,   323,    -1,
     300,    -1,   481,   482,    -1,    -1,    -1,    -1,    -1,   309,
      -1,   490,    -1,    -1,   314,    -1,    -1,    -1,    -1,    -1,
      -1,   321,   322,    -1,    -1,    -1,   505,    -1,   222,   508,
     509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,   518,
      -1,    -1,   367,    -1,    -1,    -1,   372,   372,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   389,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   372,    -1,   553,    -1,   376,   402,   272,   273,
     274,   275,    -1,    -1,   278,    -1,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,   291,   292,   293,
     294,   295,   427,    -1,    -1,    -1,    -1,   432,    -1,    -1,
      -1,    -1,    -1,   438,    -1,    -1,   441,   442,    -1,    -1,
      -1,   421,   422,    -1,    -1,   425,   426,    -1,    -1,    -1,
     430,   431,    -1,    -1,   434,    -1,    -1,   462,    -1,    -1,
     440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,   458,    -1,
     485,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,
      -1,    -1,   507,    -1,    -1,   485,    -1,    -1,    -1,    -1,
     515,    -1,    -1,    -1,   494,    -1,    -1,   497,    -1,   499,
      -1,    -1,   502,   503,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   539,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   542,    -1,     0,     1,   546,     3,     4,     5,
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
     176,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,   223,   224,   225,
     226,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,    -1,
     276,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,    -1,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,   223,   224,   225,   226,   227,
     228,   229,   230,   231,    -1,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,    -1,   276,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
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
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,   223,   224,   225,   226,   227,   228,   229,   230,   231,
      -1,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,   276,    -1,   278,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,     3,     4,     5,
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
     176,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,   223,   224,   225,
     226,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,    -1,   272,    -1,    -1,    -1,
     276,   277,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,    -1,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,   223,   224,   225,   226,   227,   228,   229,
     230,   231,    -1,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,    -1,   272,    -1,    -1,    -1,   276,    -1,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    -1,    90,    91,    92,    93,
      94,    -1,    96,    97,    -1,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,    -1,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
     224,   225,   226,   227,   228,   229,   230,   231,    -1,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
     254,   255,   256,   257,   258,   259,   260,    -1,   262,   263,
     264,   265,   266,   267,   268,   269,   270,    -1,   272,    -1,
      -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   286,   287,   288,     3,     4,     5,     6,     7,
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
     178,   179,   180,   181,    -1,   183,   184,   185,   186,   187,
     188,    -1,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,    -1,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,   223,    -1,   225,   226,   227,
     228,   229,   230,   231,    -1,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,   254,   255,   256,   257,
     258,   259,   260,    -1,   262,   263,   264,   265,   266,   267,
     268,   269,   270,    -1,   272,   273,    -1,    -1,    -1,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,   287,
     288,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    -1,    90,    91,
      92,    93,    94,    -1,    96,    97,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,   115,   116,   117,   118,   119,   120,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    -1,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,    -1,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,   183,   184,   185,   186,   187,   188,    -1,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,    -1,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,   223,    -1,   225,   226,   227,   228,   229,   230,   231,
      -1,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,   254,   255,   256,   257,   258,   259,   260,    -1,
     262,   263,   264,   265,   266,   267,   268,   269,   270,    -1,
     272,    -1,    -1,    -1,    -1,    -1,   278,   279,    -1,    -1,
      -1,    -1,    -1,    -1,   286,   287,   288,     3,     4,     5,
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
     176,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
     186,   187,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,    -1,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,   223,    -1,   225,
     226,   227,   228,   229,   230,   231,    -1,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,   254,   255,
     256,   257,   258,   259,   260,    -1,   262,   263,   264,   265,
     266,   267,   268,   269,   270,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     286,   287,   288,     3,     4,     5,     6,     7,     8,     9,
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
     180,   181,    -1,   183,   184,   185,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,    -1,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,   223,    -1,   225,   226,   227,   228,   229,
     230,   231,    10,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,   254,   255,   256,   257,   258,   259,
     260,    -1,   262,   263,   264,   265,   266,   267,   268,   269,
     270,    -1,   272,    -1,    -1,    10,    -1,    -1,   278,    57,
      58,    -1,    -1,    -1,    -1,    -1,   286,   287,   288,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    73,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,   133,   134,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    73,    -1,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    86,   167,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,
      -1,    -1,    -1,    -1,   182,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   222,    -1,    -1,   182,   183,    -1,
      -1,    -1,   150,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   182,   183,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,   272,   273,   274,   232,    -1,    -1,
     278,    -1,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,   291,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,    -1,   272,   273,   274,
      -1,    -1,    -1,   278,    -1,   280,   281,   282,   283,   284,
     285,   286,   287,    10,   289,   290,   291,   292,   293,   294,
     295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,   273,   274,    10,    -1,    -1,
     278,    -1,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,   291,   292,   293,   294,   295,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,   134,    -1,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    10,   274,   275,    -1,
      -1,   278,    -1,   280,   281,   282,   283,   284,   285,   286,
     287,    -1,   289,   290,   291,   292,   293,   294,   295,   272,
     273,   274,    10,    -1,    -1,   278,    -1,   280,   281,   282,
     283,   284,   285,   286,   287,    -1,   289,   290,   291,   292,
     293,   294,   295,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
     114,    89,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,   182,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   182,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
     274,    10,    -1,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,   291,   292,   293,
     294,   295,    -1,    -1,   272,    10,   274,    -1,    -1,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,   291,   292,   293,   294,   295,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    86,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   134,    -1,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   182,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,   273,   274,    10,    -1,    -1,   278,
      -1,   280,   281,   282,   283,   284,   285,   286,   287,    -1,
     289,   290,   291,   292,   293,   294,   295,   272,    -1,   274,
     275,    -1,    10,   278,    -1,   280,   281,   282,   283,   284,
     285,   286,   287,    -1,   289,   290,   291,   292,   293,   294,
     295,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
     114,    89,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
     134,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,   182,   183,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   182,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,   273,
     274,    10,    -1,    -1,   278,    -1,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,   291,   292,   293,
     294,   295,    -1,    -1,   272,   273,   274,    10,    -1,    -1,
     278,    -1,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,   291,   292,   293,   294,   295,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    86,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,   114,    89,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   134,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,    -1,    -1,   182,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,   274,    -1,    -1,    -1,   278,
      -1,   280,   281,   282,   283,   284,   285,   286,   287,    -1,
     289,   290,   291,   292,   293,   294,   295,    -1,    -1,   272,
      -1,   274,    -1,    -1,    -1,   278,    -1,   280,   281,   282,
     283,   284,   285,   286,   287,    -1,   289,   290,   291,   292,
     293,   294,   295,     3,    -1,     5,     6,     7,     8,     9,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
     180,   181,    -1,    -1,   184,   185,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,    -1,    -1,    -1,   216,   217,   218,   219,
     220,   221,    -1,   223,    -1,   225,   226,   227,   228,   229,
     230,   231,    -1,   233,    -1,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,    -1,
     250,   251,   252,    -1,   254,   255,   256,   257,   258,   259,
     260,    -1,   262,   263,   264,   265,   266,   267,   268,   269,
     270,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,    -1,
     280,    -1,     3,   283,     5,     6,     7,     8,     9,    -1,
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
     131,   132,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,    -1,   163,    -1,   165,   166,    -1,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,
     181,    -1,    -1,   184,   185,   186,   187,   188,    -1,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,    -1,
     211,   212,    -1,    -1,    -1,   216,   217,   218,   219,   220,
     221,    -1,   223,    -1,   225,   226,   227,   228,   229,   230,
     231,    -1,   233,    -1,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,    -1,   250,
     251,   252,    -1,   254,   255,   256,   257,   258,   259,   260,
      -1,   262,   263,   264,   265,   266,   267,   268,   269,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,
       3,   282,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    -1,    -1,    -1,    87,    88,    -1,    90,    91,    92,
      93,    94,    -1,    -1,    97,    -1,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,    -1,   126,   127,   128,   129,    -1,   131,   132,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,    -1,
     163,    -1,   165,   166,    -1,   168,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,    -1,
      -1,   184,   185,   186,   187,   188,    -1,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
      -1,    -1,    -1,   216,   217,   218,   219,   220,   221,    -1,
     223,    -1,   225,   226,   227,   228,   229,   230,   231,    -1,
     233,    -1,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,    -1,   250,   251,   252,
      -1,   254,   255,   256,   257,   258,   259,   260,    -1,   262,
     263,   264,   265,   266,   267,   268,   269,   270,     3,    -1,
       5,     6,     7,     8,     9,   278,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    -1,
      -1,    -1,    87,    88,    -1,    90,    91,    92,    93,    94,
      -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
      -1,   126,   127,   128,   129,    -1,   131,   132,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,    -1,   163,    -1,
     165,   166,    -1,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,   180,   181,    -1,    -1,   184,
     185,   186,   187,   188,    -1,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,    -1,    -1,
      -1,   216,   217,   218,   219,   220,   221,    -1,   223,    -1,
     225,   226,   227,   228,   229,   230,   231,    -1,   233,    -1,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,     4,   250,   251,   252,    -1,   254,
     255,   256,   257,   258,   259,   260,    -1,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    -1,    -1,    28,    -1,
      -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     210,    -1,    -1,    -1,   214,   215,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    30,   278,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    -1,    -1,    -1,    87,    88,    -1,    90,    91,    92,
      93,    94,    -1,    96,    97,    -1,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,   162,
     163,    -1,   165,   166,    -1,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,   184,   185,   186,   187,   188,    -1,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
      -1,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
     223,    -1,   225,   226,   227,   228,   229,   230,   231,    -1,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,   254,   255,   256,   257,   258,   259,   260,    -1,   262,
     263,   264,   265,   266,   267,   268,   269,   270,     3,    -1,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    -1,
      -1,    -1,    87,    88,    -1,    90,    91,    92,    93,    94,
      -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,   123,   124,
      -1,   126,   127,   128,   129,    -1,   131,   132,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,    -1,   163,    -1,
     165,   166,    -1,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,   180,   181,    -1,    -1,   184,
     185,   186,   187,   188,    -1,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,   211,   212,    -1,    -1,
      -1,   216,   217,   218,   219,   220,   221,    -1,   223,    -1,
     225,   226,   227,   228,   229,   230,   231,    -1,   233,    -1,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,    -1,   250,   251,   252,    -1,   254,
     255,   256,   257,   258,   259,   260,    -1,   262,   263,   264,
     265,   266,   267,   268,   269,   270,     3,    -1,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    72,    -1,    74,    75,    76,
      77,    78,    79,    -1,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    -1,    90,    91,    92,    93,    94,    -1,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,    -1,   126,
     127,   128,   129,    -1,   131,   132,    -1,    -1,   135,   136,
     137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,    -1,   163,    -1,   165,   166,
      -1,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   179,   180,   181,    -1,    -1,   184,   185,   186,
     187,   188,    -1,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,    -1,   211,   212,    -1,    -1,    -1,   216,
     217,   218,   219,   220,   221,    -1,   223,    -1,   225,   226,
     227,   228,   229,   230,   231,    -1,   233,    -1,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,    -1,   250,   251,   252,    -1,   254,   255,   256,
     257,   258,   259,   260,    -1,   262,   263,   264,   265,   266,
     267,   268,   269,   270,     3,    -1,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    72,    -1,    74,    75,    76,    77,    78,
      79,    -1,    81,    82,    83,    -1,    -1,    -1,    87,    88,
      -1,    90,    91,    92,    93,    94,    -1,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,   123,   124,    -1,   126,   127,   128,
     129,    -1,   131,   132,    -1,    -1,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
      -1,   160,   161,    -1,   163,    -1,   165,   166,    -1,   168,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
      -1,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,    -1,   211,   212,    -1,    -1,    -1,   216,   217,   218,
     219,   220,   221,    -1,   223,    -1,   225,   226,   227,   228,
     229,   230,   231,    -1,   233,    -1,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
       4,   250,   251,   252,    -1,   254,   255,   256,   257,   258,
     259,   260,    -1,   262,   263,   264,   265,   266,   267,   268,
     269,   270,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,   173,
     174,   175,   176,   177,   178,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,
     214,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
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
     174,   175,   176,   177,   178,   179,   180,   181,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   272,   276,   278,   286,   287,   288,
     297,   298,   299,   300,   301,   302,   303,   304,   306,   307,
     308,   311,   320,   323,   328,   329,   334,   337,   340,   343,
     344,   138,   248,   250,   320,   321,   327,   272,   309,   310,
     321,   322,   323,   272,   312,   321,   323,   325,   272,    47,
     272,   320,   344,   272,   321,   324,   323,   328,   324,   272,
     321,   326,   272,   328,   303,   328,   330,     0,   304,   271,
     272,   278,   280,   283,   316,   317,   319,   321,    10,    57,
      58,    73,    86,    89,   114,   122,   133,   134,   150,   167,
     182,   183,   222,   232,   272,   274,   278,   280,   281,   282,
     283,   284,   285,   286,   287,   289,   290,   291,   292,   293,
     294,   295,   333,   341,   342,   272,   328,   272,   246,   328,
     335,   336,   275,   272,   307,   325,   278,   274,   328,   323,
     159,   246,   251,   345,   346,   272,   272,   323,   328,   272,
     328,   273,   277,   275,   279,   328,   338,   318,   319,   323,
     323,   320,   275,   272,   274,   278,   273,   338,   279,   328,
     328,   328,   338,   305,   320,   272,   273,   286,   339,   310,
     328,   271,   272,   323,   328,   273,   275,   275,   338,   338,
     275,   275,   278,   317,   273,   328,   273,   275,   275,   279,
     275,   279,   281,   316,   338,   328,   328,   273,   279,   285,
     273,   274,   328,   246,   336,   273,   275,   273,   275,   307,
     313,   314,   315,   323,   279,   304,   323,   246,   251,   320,
     346,   347,   348,   273,   273,   323,   323,   275,   304,   328,
     319,   272,   274,   323,   316,   278,   316,   273,   279,   328,
     272,   328,   273,   328,   278,   323,   331,   271,   273,   275,
     282,   317,   278,    68,   339,   274,   273,   275,   274,   274,
     339,   339,   317,   338,   328,   279,   323,   328,   275,   323,
     332,   339,   339,   307,   306,   314,   317,   323,   304,   273,
     328,   348,   328,   328,   273,   273,   339,   273,   316,   279,
     273,   328,   275,   279,   273,   273,   273,   279,   273,   316,
     273,   323,   304,   274,   306,   328
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value, Location);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;
  (void) yylocationp;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");

# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;
  (void) yylocationp;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
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

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended. */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;
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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
  *++yylsp = yylloc;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, yylsp - yylen, yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 319 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 5:
#line 320 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 6:
#line 321 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 7:
#line 322 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 8:
#line 323 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 9:
#line 324 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 10:
#line 325 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 11:
#line 326 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 12:
#line 327 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 13:
#line 328 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 79:
#line 400 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 80:
#line 401 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 81:
#line 402 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 82:
#line 403 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 83:
#line 404 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 84:
#line 405 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 85:
#line 406 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 86:
#line 407 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 87:
#line 408 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 88:
#line 409 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 89:
#line 410 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 90:
#line 411 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 91:
#line 412 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 92:
#line 413 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 93:
#line 414 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 94:
#line 415 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 95:
#line 416 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 96:
#line 417 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 97:
#line 418 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 98:
#line 419 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 99:
#line 420 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 100:
#line 421 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 101:
#line 422 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 102:
#line 423 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 103:
#line 424 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 104:
#line 425 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 105:
#line 426 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 106:
#line 427 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 107:
#line 428 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 108:
#line 429 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 109:
#line 430 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 110:
#line 431 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 111:
#line 432 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 112:
#line 433 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 113:
#line 434 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 114:
#line 435 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 115:
#line 436 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 116:
#line 437 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 117:
#line 438 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 118:
#line 439 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 119:
#line 440 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 120:
#line 446 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 121:
#line 447 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 122:
#line 448 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 123:
#line 449 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 124:
#line 450 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 125:
#line 451 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 126:
#line 452 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 127:
#line 453 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 128:
#line 454 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 129:
#line 455 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 130:
#line 456 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 131:
#line 457 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 132:
#line 458 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 133:
#line 459 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 134:
#line 460 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 135:
#line 461 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 136:
#line 462 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 137:
#line 463 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 138:
#line 464 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 139:
#line 465 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 140:
#line 466 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 141:
#line 467 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 142:
#line 468 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 143:
#line 469 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 144:
#line 470 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 145:
#line 471 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 146:
#line 472 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 147:
#line 473 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 148:
#line 474 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 149:
#line 475 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 150:
#line 476 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 151:
#line 477 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 152:
#line 478 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 153:
#line 479 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 154:
#line 480 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 155:
#line 481 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 156:
#line 482 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 157:
#line 483 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 158:
#line 484 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 159:
#line 485 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 160:
#line 486 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 161:
#line 487 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 162:
#line 488 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 163:
#line 489 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 164:
#line 490 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 165:
#line 491 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 166:
#line 492 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 167:
#line 493 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 168:
#line 494 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 169:
#line 495 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 170:
#line 496 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 171:
#line 497 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 172:
#line 498 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 173:
#line 499 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 174:
#line 500 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 175:
#line 501 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 176:
#line 502 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 177:
#line 503 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 178:
#line 504 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 179:
#line 505 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 180:
#line 506 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 181:
#line 507 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 182:
#line 508 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 183:
#line 509 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 184:
#line 510 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 185:
#line 511 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 186:
#line 512 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 187:
#line 513 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 188:
#line 514 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 189:
#line 515 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 190:
#line 516 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 191:
#line 517 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 192:
#line 518 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 193:
#line 519 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 194:
#line 520 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 195:
#line 521 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 196:
#line 522 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 220:
#line 553 "hl_yacc.y++"
    {
			// Just leave the corresponding text alone
			// yyerror() will mark it as erroneous.
			yyclearin;
			yyerrok;
		}
    break;

  case 232:
#line 579 "hl_yacc.y++"
    {if(words[(yyvsp[0])]=="t") colorize((yylsp[0]),highlight_parameter);
			else colorize((yylsp[0]),highlight_error);}
    break;

  case 275:
#line 666 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[0])],"variable");}
    break;

  case 276:
#line 671 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 277:
#line 672 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 278:
#line 673 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 279:
#line 674 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 280:
#line 675 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 281:
#line 676 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 282:
#line 677 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 283:
#line 678 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 284:
#line 679 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 285:
#line 680 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 286:
#line 681 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 287:
#line 682 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 288:
#line 683 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 289:
#line 684 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 290:
#line 685 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 291:
#line 686 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 292:
#line 687 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 293:
#line 688 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 294:
#line 692 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 295:
#line 693 "hl_yacc.y++"
    {
				(yyval)=(yyvsp[0]);

				// Recolorize the word as plain (it
				// was previously colorized as a known
				// reserved word).

				colorize((yylsp[0]),highlight_plain);
			}
    break;

  case 296:
#line 708 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[0])],"type");
			colorize((yylsp[0]),highlight_type);}
    break;

  case 297:
#line 710 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[0])],"type");
			colorize((yylsp[0]),highlight_type);}
    break;

  case 298:
#line 715 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 299:
#line 716 "hl_yacc.y++"
    {(yyval)=(yyvsp[0]);}
    break;

  case 300:
#line 720 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[0])],"problem");
			colorize((yylsp[0]),highlight_type);}
    break;

  case 301:
#line 725 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[0])],"function");}
    break;

  case 302:
#line 729 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[0])],"varf");
			colorize((yylsp[0]),highlight_type);}
    break;

  case 303:
#line 734 "hl_yacc.y++"
    {newsymbol(words[(yyvsp[0])],"border");
			colorize((yylsp[0]),highlight_type);}
    break;

  case 384:
#line 868 "hl_yacc.y++"
    {if(words[(yyvsp[0])]!="i") colorize((yylsp[0]),highlight_error);}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 4561 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;
  yylsp -= yylen;

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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval, &yylloc);
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
  if (0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  yylsp -= yylen;
  yyvsp -= yylen;
  yyssp -= yylen;
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
      yydestruct ("Error: popping", yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though. */
  YYLLOC_DEFAULT (yyloc, yyerror_range - 1, 2);
  *++yylsp = yyloc;

  /* Shift the error token. */
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
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}



