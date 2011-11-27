/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         lgparse
#define yylex           lglex
#define yyerror         lgerror
#define yylval          lglval
#define yychar          lgchar
#define yydebug         lgdebug
#define yynerrs         lgnerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "lg.ypp"
 
    // -*- Mode : c++ -*-
    //
    // SUMMARY  :      
    // USAGE    :        
    // ORG      : 
    // AUTHOR   : Frederic Hecht
    // E-MAIL   : hecht@ann.jussieu.fr
    //
    
    /*
     
     This file is part of Freefem++
     
     Freefem++ is free software; you can redistribute it and/or modify
     it under the terms of the GNU Lesser General Public License as published by
     the Free Software Foundation; either version 2.1 of the License, or
     (at your option) any later version.
     
     Freefem++  is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU Lesser General Public License for more details.
     
     You should have received a copy of the GNU Lesser General Public License
     along with Freefem++; if not, write to the Free Software
     Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
     */
    
#include "config-wrapper.h"
#define eflval yylval 
#include <iostream>
#include  <complex>
#include <string>
  // for reset cout,cin  in windows  dll
#ifdef _WIN32
#include <ext/stdio_filebuf.h>
#include <iostream>
#include <cstdio>
#endif

#include "error.hpp"
class Iden;
#include "strversionnumber.hpp"
#include "InitFunct.hpp"
#ifdef __MWERKS__
#ifdef __INTEL__
#include <malloc.h>
#else
#include <alloca.h>
#endif
#endif
#include "AFunction.hpp"
//  to reserve space to graphical pointer function
#include "rgraph.hpp"
#include "RNM.hpp"
#include "fem.hpp"
#include "FESpacen.hpp" 
#include "FESpace.hpp" 
#include "MeshPoint.hpp"

#include "lgfem.hpp" 
#include "lex.hpp"
#include "environment.hpp"

    extern FILE *ThePlotStream;
    extern KN<String> *pkarg;

class Routine;
bool load(string s);

 template <class R,int d> class FE;
 template <class R,int d,int i> class FE_;

extern mylex *zzzfff;
// modif FH for window to have 1 dll  for mpi and none mpi ..
extern  void (*initparallele)(int &, char **&);
extern  void (*init_lgparallele)();
extern  void (*end_parallele)();
// 
#ifdef HAVE_LIBARPACK
  void init_eigenvalue();
#endif
   
  aType dcltype;
const int nbembtype=10;
aType rettype[nbembtype];
Block * routineinblock[nbembtype]; // Add FH july 2005 pb clean on return 
int kkembtype=-1;
int inloopcount=0;
Block *currentblock;
// Add FH july 2005 
//  problem clean variable after break,continue and return.
const int sizeStackOfLoop=100; 
Block * StackOfLoop[sizeStackOfLoop];
// end ADD
double CPUcompileInit =0;
//class pfes;
C_F0  fespacetype;
bool fespacecomplex;
int fespacedim;
extern int UnShowAlloc;
int ShowAlloc(const char *s,size_t &);
inline int yylex()  {return zzzfff->scan();}
inline int lineno() {return zzzfff->lineno();}

extern bool withrgraphique;
inline void fingraphique()
 { if(withrgraphique) 
   { withrgraphique=false;
    rattente(1);
    closegraphique();
  }}

void lgerror (const char* s) ;


 // mpi ptr to function ... 
void (*initparallele)(int &argc, char **& argv)=0 ;
void (*init_lgparallele)()=0;
void (*end_parallele)()=0;


/* Line 268 of yacc.c  */
#line 203 "lg.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     SET = 260,
     GTGT = 261,
     LTLT = 262,
     OR = 263,
     AND = 264,
     NE = 265,
     EQ = 266,
     GE = 267,
     LE = 268,
     DOTSLASH = 269,
     DOTSTAR = 270,
     MOINSMOINS = 271,
     PLUSPLUS = 272,
     UNARY = 273,
     LNUM = 274,
     DNUM = 275,
     CNUM = 276,
     ID = 277,
     FESPACEID = 278,
     IDPARAM = 279,
     STRING = 280,
     ENDOFFILE = 281,
     INCLUDE = 282,
     LOAD = 283,
     BIDON = 284,
     FOR = 285,
     WHILE = 286,
     BREAK = 287,
     CONTINUE = 288,
     RETURN = 289,
     TRY = 290,
     CATCH = 291,
     THROW = 292,
     TYPE = 293,
     FUNCTION = 294,
     FESPACE = 295,
     FESPACE1 = 296,
     FESPACE3 = 297,
     PLUSEQ = 298,
     MOINSEQ = 299,
     MULEQ = 300,
     DIVEQ = 301,
     DOTMULEQ = 302,
     DOTDIVEQ = 303,
     ARROW = 304,
     BORDER = 305,
     CURVE = 306,
     SOLVE = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 124 "lg.ypp"
 
 double dnum;
 long lnum;
 char * str;
 char oper[8];
 CC_F0 cexp;
 Routine   *routine;
 AC_F0 args;
 aType type;
 CListOfInst cinst;
 Block * block; 
 ListOfId *clist_id;
/* ListCatch * clist_Catchs;*/



/* Line 293 of yacc.c  */
#line 308 "lg.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 320 "lg.tab.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1076

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNRULES -- Number of states.  */
#define YYNSTATES  409

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,     2,     2,    24,    12,    32,
      34,    37,    22,    20,     5,    21,    36,    23,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    73,
      16,     6,    17,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    38,    31,    33,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,    10,    75,     2,     2,     2,     2,
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
       7,     8,     9,    11,    13,    14,    15,    18,    19,    25,
      26,    28,    29,    30,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    13,    14,    16,    20,
      23,    27,    30,    34,    37,    41,    45,    49,    55,    61,
      66,    72,    77,    83,    88,    94,    96,   100,   102,   104,
     106,   108,   110,   114,   119,   123,   125,   128,   131,   134,
     138,   142,   148,   150,   155,   162,   167,   175,   185,   187,
     192,   196,   200,   207,   213,   218,   225,   227,   229,   231,
     233,   238,   240,   244,   246,   250,   253,   259,   264,   266,
     270,   271,   276,   280,   283,   289,   290,   301,   302,   312,
     314,   316,   318,   320,   321,   325,   327,   329,   332,   335,
     341,   344,   346,   356,   366,   372,   378,   386,   390,   394,
     401,   404,   407,   411,   419,   427,   430,   432,   436,   438,
     440,   442,   444,   446,   448,   452,   456,   460,   464,   468,
     472,   476,   478,   484,   488,   494,   496,   500,   504,   508,
     512,   516,   520,   524,   528,   532,   536,   540,   544,   548,
     552,   556,   560,   564,   568,   572,   574,   576,   580,   586,
     587,   589,   591,   593,   597,   599,   603,   607,   611,   615,
     621,   623,   627,   629,   632,   634,   638,   642,   645,   647,
     649,   651,   653,   655,   660,   665,   672,   676,   680,   684,
     689,   693,   698,   702,   707,   710,   713,   718,   722
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      79,     0,    -1,    80,    46,    -1,    81,    -1,   108,    -1,
      81,   108,    -1,    -1,    84,    -1,    84,     6,   114,    -1,
      60,    84,    -1,    60,    12,    84,    -1,    62,    84,    -1,
      62,    12,    84,    -1,    87,    84,    -1,    87,    12,    84,
      -1,    35,    82,    38,    -1,    82,     5,    84,    -1,    82,
       5,    35,    82,    38,    -1,    82,     5,    84,     6,   114,
      -1,    82,     5,    60,    84,    -1,    82,     5,    60,    12,
      84,    -1,    82,     5,    62,    84,    -1,    82,     5,    62,
      12,    84,    -1,    82,     5,    87,    84,    -1,    82,     5,
      87,    12,    84,    -1,    84,    -1,    83,     5,    84,    -1,
      42,    -1,    60,    -1,    62,    -1,    61,    -1,    42,    -1,
      42,     6,   114,    -1,    42,    34,    86,    37,    -1,    85,
       5,    85,    -1,   115,    -1,    60,    42,    -1,    61,    42,
      -1,    62,    42,    -1,    42,     6,   115,    -1,    86,     5,
     115,    -1,    86,     5,    84,     6,   115,    -1,    58,    -1,
      58,    35,    58,    38,    -1,    58,    35,    58,     5,    58,
      38,    -1,    58,    16,    58,    17,    -1,    58,    16,    58,
      17,    35,    58,    38,    -1,    58,    16,    58,    17,    35,
      58,     5,    58,    38,    -1,    42,    -1,    42,    35,   115,
      38,    -1,    42,     6,   115,    -1,    35,    83,    38,    -1,
      35,    83,    38,    35,   115,    38,    -1,    35,    83,    38,
       6,   115,    -1,    42,    34,   115,    37,    -1,    35,    83,
      38,    34,   115,    37,    -1,    60,    -1,    61,    -1,    62,
      -1,    90,    -1,    90,    16,    58,    17,    -1,    89,    -1,
      92,     5,    89,    -1,    88,    -1,    93,     5,    88,    -1,
      91,    93,    -1,    91,    35,    58,    38,    92,    -1,    42,
      34,    86,    37,    -1,    95,    -1,    96,     5,    95,    -1,
      -1,    87,    98,    85,    73,    -1,    43,    96,    73,    -1,
      94,    73,    -1,    59,    42,     6,   112,    73,    -1,    -1,
      59,    87,    42,    34,    82,    37,    99,    74,    81,    75,
      -1,    -1,    59,    42,    34,    82,    37,   100,     6,   114,
      73,    -1,    74,    -1,    75,    -1,    50,    -1,    51,    -1,
      -1,    87,   106,    85,    -1,    55,    -1,    73,    -1,    47,
      45,    -1,    48,    45,    -1,   107,    74,    81,    75,   109,
      -1,   112,    73,    -1,    97,    -1,   103,    34,   112,    73,
     112,    73,   112,    37,   108,    -1,   103,    34,   105,    73,
     112,    73,   112,    37,   108,    -1,   104,    34,   112,    37,
     108,    -1,     3,    34,   112,    37,   108,    -1,     3,    34,
     112,    37,   108,     4,   108,    -1,   101,    81,   102,    -1,
      70,    42,   111,    -1,    70,    42,    35,   119,    38,    73,
      -1,    52,    73,    -1,    53,    73,    -1,    54,   112,    73,
      -1,    56,    34,    36,    36,    36,    37,   108,    -1,    34,
      42,     6,   112,     5,   112,    37,    -1,   110,   108,    -1,
     114,    -1,   112,     5,   112,    -1,    21,    -1,    20,    -1,
      27,    -1,    29,    -1,    28,    -1,   115,    -1,   115,     6,
     114,    -1,   115,    63,   114,    -1,   115,    64,   114,    -1,
     115,    65,   114,    -1,   115,    66,   114,    -1,   115,    67,
     114,    -1,   115,    68,   114,    -1,   116,    -1,   116,    76,
     116,    77,   116,    -1,   116,    77,   116,    -1,   116,    77,
     116,    77,   116,    -1,   120,    -1,   116,    22,   116,    -1,
     116,    26,   116,    -1,   116,    25,   116,    -1,   116,    23,
     116,    -1,   116,    24,   116,    -1,   116,    20,   116,    -1,
     116,    21,   116,    -1,   116,     9,   116,    -1,   116,     8,
     116,    -1,   116,    12,   116,    -1,   116,    13,   116,    -1,
     116,    10,   116,    -1,   116,    11,   116,    -1,   116,    16,
     116,    -1,   116,    19,   116,    -1,   116,    17,   116,    -1,
     116,    18,   116,    -1,   116,    15,   116,    -1,   116,    14,
     116,    -1,   116,    -1,    77,    -1,   116,    77,   116,    -1,
     116,    77,   116,    77,   116,    -1,    -1,    60,    -1,    61,
      -1,    62,    -1,    84,     6,   115,    -1,   117,    -1,   118,
       5,    60,    -1,   118,     5,    61,    -1,   118,     5,    62,
      -1,   118,     5,   117,    -1,   118,     5,    84,     6,   115,
      -1,   114,    -1,   119,     5,   114,    -1,   121,    -1,   113,
     121,    -1,   122,    -1,   122,    31,   120,    -1,   122,    33,
     120,    -1,   122,    32,    -1,    42,    -1,    39,    -1,    40,
      -1,    41,    -1,    45,    -1,   122,    34,   118,    37,    -1,
     122,    35,   117,    38,    -1,   122,    35,   117,     5,   117,
      38,    -1,   122,    35,    38,    -1,   122,    36,    42,    -1,
      60,    36,    42,    -1,    60,    34,   118,    37,    -1,    61,
      36,    42,    -1,    61,    34,   118,    37,    -1,    62,    36,
      42,    -1,    62,    34,   118,    37,    -1,   122,    29,    -1,
     122,    28,    -1,    58,    34,   112,    37,    -1,    34,   112,
      37,    -1,    35,   119,    38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   257,   257,   299,   302,   303,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   327,   328,   331,   331,   331,
     331,   333,   334,   335,   337,   344,   345,   346,   347,   348,
     349,   350,   353,   354,   355,   356,   357,   358,   365,   366,
     367,   368,   369,   370,   373,   374,   378,   378,   378,   379,
     380,   385,   386,   388,   389,   391,   392,   396,   399,   400,
     403,   403,   404,   405,   406,   408,   407,   424,   423,   432,
     433,   435,   437,   442,   442,   445,   447,   448,   449,   450,
     451,   452,   453,   454,   458,   459,   460,   461,   463,   465,
     468,   472,   476,   483,   486,   492,   498,   499,   504,   505,
     506,   507,   508,   512,   513,   514,   515,   516,   517,   518,
     519,   524,   525,   526,   527,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   555,   556,   557,   558,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     575,   576,   580,   581,   584,   585,   586,   587,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   618,   619
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "','", "'='", "SET",
  "GTGT", "LTLT", "'|'", "OR", "'&'", "AND", "NE", "EQ", "'<'", "'>'",
  "GE", "LE", "'+'", "'-'", "'*'", "'/'", "'%'", "DOTSLASH", "DOTSTAR",
  "'!'", "MOINSMOINS", "PLUSPLUS", "UNARY", "'^'", "'\\''", "'_'", "'('",
  "'['", "'.'", "')'", "']'", "LNUM", "DNUM", "CNUM", "ID", "FESPACEID",
  "IDPARAM", "STRING", "ENDOFFILE", "INCLUDE", "LOAD", "BIDON", "FOR",
  "WHILE", "BREAK", "CONTINUE", "RETURN", "TRY", "CATCH", "THROW", "TYPE",
  "FUNCTION", "FESPACE", "FESPACE1", "FESPACE3", "PLUSEQ", "MOINSEQ",
  "MULEQ", "DIVEQ", "DOTMULEQ", "DOTDIVEQ", "ARROW", "BORDER", "CURVE",
  "SOLVE", "';'", "'{'", "'}'", "'?'", "':'", "$accept", "start", "input",
  "instructions", "list_of_id_args", "list_of_id1", "id", "list_of_dcls",
  "parameters_list", "type_of_dcl", "ID_space", "ID_array_space",
  "fespace123", "fespace", "spaceIDa", "spaceIDb", "spaceIDs",
  "fespace_def", "fespace_def_list", "declaration", "$@1", "$@2", "$@3",
  "begin", "end", "for_loop", "while_loop", "declaration_for", "$@4",
  "try", "instruction", "catchs", "bornes", "border_expr", "Expr", "unop",
  "no_comma_expr", "no_set_expr", "no_ternary_expr", "sub_script_expr",
  "parameters", "array", "unary_expr", "pow_expr", "primary", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,    44,    61,   260,   261,   262,
     124,   263,    38,   264,   265,   266,    60,    62,   267,   268,
      43,    45,    42,    47,    37,   269,   270,    33,   271,   272,
     273,    94,    39,    95,    40,    91,    46,    41,    93,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    59,   123,   125,    63,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    80,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    84,    84,    84,
      84,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    95,    96,    96,
      98,    97,    97,    97,    97,    99,    97,   100,    97,   101,
     102,   103,   104,   106,   105,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   109,   110,   111,   112,   112,   113,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   115,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     0,     1,     3,     2,
       3,     2,     3,     2,     3,     3,     3,     5,     5,     4,
       5,     4,     5,     4,     5,     1,     3,     1,     1,     1,
       1,     1,     3,     4,     3,     1,     2,     2,     2,     3,
       3,     5,     1,     4,     6,     4,     7,     9,     1,     4,
       3,     3,     6,     5,     4,     6,     1,     1,     1,     1,
       4,     1,     3,     1,     3,     2,     5,     4,     1,     3,
       0,     4,     3,     2,     5,     0,    10,     0,     9,     1,
       1,     1,     1,     0,     3,     1,     1,     2,     2,     5,
       2,     1,     9,     9,     5,     5,     7,     3,     3,     6,
       2,     2,     3,     7,     7,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     5,     3,     5,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     3,     5,     0,
       1,     1,     1,     3,     1,     3,     3,     3,     3,     5,
       1,     3,     1,     2,     1,     3,     3,     2,     1,     1,
       1,     1,     1,     4,     4,     6,     3,     3,     3,     4,
       3,     4,     3,     4,     2,     2,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   109,   108,   110,   112,   111,     0,     0,   169,
     170,   171,   168,     0,   172,     0,     0,    81,    82,     0,
       0,     0,    85,    42,     0,    56,    57,    58,     0,    86,
      79,     0,     0,     3,    70,    59,     0,     0,    91,     0,
       0,     0,     0,     4,     0,     0,   106,   113,   121,   125,
     162,   164,     0,     0,     0,     0,     0,     0,   160,     0,
       0,    68,     0,    87,    88,   100,   101,     0,     0,     0,
       0,     0,    42,     0,   149,     0,   149,     0,   149,     0,
       0,     1,     2,     5,     0,     0,     0,    48,    63,    65,
      73,     0,     0,     0,     0,     0,    90,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   184,     0,   167,
       0,   149,     0,     0,     0,   187,     0,   188,     0,     0,
      72,   102,     0,     0,     0,     0,     6,     0,   168,   150,
     151,   152,   146,     0,   145,   154,     0,   178,     0,   180,
       0,   182,     0,     0,     0,    98,    31,     0,     0,    27,
       0,    28,    30,    29,     0,    25,     0,     0,     0,    80,
      97,    83,     0,     0,     0,     0,   107,   114,   115,   116,
     117,   118,   119,   120,   134,   133,   137,   138,   135,   136,
     144,   143,   139,   141,   142,   140,   131,   132,   126,   129,
     130,   128,   127,     0,   123,   165,   166,     0,   176,     0,
     177,     0,   161,   168,     0,     0,     0,     0,    35,    69,
      45,   186,     0,    43,     0,     6,    28,    29,     0,     7,
       0,     6,     0,     0,     0,   179,   181,   183,     0,     0,
     105,     0,     0,     0,    71,    60,     0,     0,    51,    50,
       0,     0,    64,     0,     0,     0,     0,     0,     0,     0,
     173,     0,   174,    95,     0,    36,    37,    38,     0,    67,
       0,     0,    74,     0,     0,     9,     0,    11,     0,    77,
       0,     0,    13,     0,   153,   147,   155,   156,   157,     0,
     158,     0,     0,    32,     0,    34,     0,     0,    61,    66,
      26,     0,     0,    49,    84,     0,     0,    94,     0,    89,
     122,   124,     0,     0,    39,    28,    30,    29,     0,    40,
       0,    44,    15,    10,    12,     6,    28,    29,    16,     0,
       0,     8,    14,    75,     0,     0,     0,    99,    33,     0,
       0,     0,    53,     0,     0,     0,     0,   175,    96,     0,
       0,    46,     0,     0,    19,     0,    21,     0,     0,    23,
       0,     0,   148,   159,     0,     0,     0,    62,    52,     0,
       0,     0,    41,     0,    17,    20,    22,    18,    24,     0,
       0,   107,     0,    54,     0,     0,     0,    47,    78,     0,
     104,     0,    93,    92,     0,    76,    55,     0,   103
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,   238,   174,   153,   167,   227,    34,
      88,   308,    35,    36,   309,    89,    37,    61,    62,    38,
      84,   371,   340,    39,   180,    40,    41,   182,   263,    42,
      43,   319,   164,   165,    44,    45,    46,    47,    48,   155,
     156,    59,    49,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -230
static const yytype_int16 yypact[] =
{
     573,    11,  -230,  -230,  -230,  -230,  -230,   861,   861,  -230,
    -230,  -230,  -230,   -29,  -230,    20,    71,  -230,  -230,    -7,
      53,   861,  -230,    35,    10,   307,   308,   329,    87,  -230,
    -230,   117,    88,   573,  -230,   119,    25,    78,  -230,   573,
     140,   143,    83,  -230,     3,   978,  -230,   102,     8,  -230,
    -230,   419,   861,   158,   307,   308,   329,    44,  -230,    36,
     163,  -230,     5,  -230,  -230,  -230,  -230,     6,   157,   861,
     164,    56,    38,   186,   729,   192,   729,   198,   729,   204,
      21,  -230,  -230,  -230,   209,   165,   236,   121,  -230,   259,
    -230,   349,   897,   861,   573,   861,  -230,  -230,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,   861,   861,   861,   861,
     861,   861,   861,   861,   861,   861,  -230,  -230,   861,  -230,
     861,   729,   685,   223,    75,  -230,   861,  -230,   933,   -29,
    -230,  -230,   230,   127,    37,   861,   208,   251,   286,   195,
     201,   205,  -230,   339,   420,  -230,   135,  -230,   168,  -230,
     171,  -230,   309,   861,   573,  -230,   178,     9,   333,  -230,
     337,  -230,  -230,  -230,    39,  -230,   861,   861,   210,  -230,
    -230,  -230,   299,    30,   173,   453,  -230,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  1050,  1050,   287,   287,   446,   446,
     759,   759,   334,   334,   334,   334,   293,   293,  -230,  -230,
    -230,  -230,  -230,   640,   659,  -230,  -230,   176,  -230,    45,
    -230,   573,  -230,   373,   202,   237,   246,   180,  -230,  -230,
     345,  -230,   323,  -230,    31,   208,    49,    60,   181,   376,
      76,   208,   861,   861,   773,  -230,  -230,  -230,   379,    54,
    -230,   861,   933,   209,  -230,  -230,   242,   200,   197,  -230,
     348,   200,  -230,   209,   861,   861,   573,   331,   861,   861,
    -230,   817,  -230,   389,   861,  -230,  -230,  -230,   969,  -230,
     340,   357,  -230,   109,   200,  -230,   200,  -230,   214,  -230,
     861,   200,  -230,   182,  -230,   678,   195,   201,   205,   399,
    -230,   861,   341,  -230,   188,  -230,   200,   372,  -230,   407,
    -230,   861,   861,  -230,   408,    32,    34,  -230,   381,  -230,
    1033,  1033,   378,   573,  -230,   307,   308,   329,   411,  -230,
     110,  -230,  -230,  -230,  -230,   208,    82,   129,   412,   138,
     414,  -230,  -230,  -230,   861,   861,   416,  -230,  -230,   123,
     861,   242,  -230,   387,   861,   861,   390,  -230,  -230,   861,
     369,  -230,   125,   200,  -230,   200,  -230,   861,   200,  -230,
     861,   375,  1033,  -230,   861,   423,   438,  -230,  -230,   189,
     190,   440,  -230,   439,  -230,  -230,  -230,  -230,  -230,   405,
     573,   442,   861,  -230,   573,   573,   449,  -230,  -230,   513,
    -230,   452,  -230,  -230,   454,  -230,  -230,   573,  -230
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,   -37,  -229,   184,   -82,  -210,   247,   -21,
     324,   159,  -230,  -230,  -230,  -230,  -230,   370,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
     -33,  -230,  -230,  -230,    -6,  -230,    -3,  -129,   215,  -125,
     -38,   354,   243,   473,  -230
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -31
static const yytype_int16 yytable[] =
{
      83,    57,    91,    73,   175,    58,   283,   219,    95,   228,
     139,    95,   293,    60,   253,    67,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    95,    95,    95,   158,    95,
     160,   136,   232,   305,   257,    52,   134,   259,   260,    95,
     271,    68,    71,   314,    68,   162,   163,   185,    83,   136,
      86,   284,   145,   143,   239,    63,    65,    87,    72,    69,
      70,   181,   286,    70,   137,   233,    96,   258,   140,   141,
      95,   135,   254,   272,   124,   125,   183,   184,   291,   186,
     146,   169,   302,   217,   363,   187,   188,   189,   190,   191,
     192,   193,   169,   265,   282,   354,   362,   355,    98,   171,
     172,   173,   221,   294,   288,   360,    64,    81,   169,   300,
     171,   172,   173,   228,   169,   240,    66,   176,   257,    80,
     288,   250,    95,   222,    82,    85,   171,   172,   173,   234,
     244,   365,   171,   172,   173,   324,   322,   332,   361,   329,
     368,    90,    83,   239,   285,   287,   177,    94,   292,   239,
      58,   375,   299,   384,   231,    99,   100,   101,   102,   103,
     104,   169,   245,   244,    92,   310,   244,    93,    95,   175,
     169,   244,   352,   353,   251,   278,   288,   288,   273,   171,
     172,   173,    69,   278,    95,    95,   328,   138,   171,   172,
     173,   -28,   333,   311,   334,   246,   338,   -30,   247,   342,
     266,   -29,   252,   270,   240,   142,   373,   279,   289,   343,
     240,   376,   144,   168,   175,   348,   394,   395,   147,    74,
     382,    75,   312,   317,   157,    76,    74,    77,    75,    78,
     159,    79,   169,   235,   275,   261,   161,   230,   303,   335,
     169,   166,    87,   239,   364,   366,   169,   369,   315,   316,
     171,   172,   173,   401,   178,   220,    72,   339,   236,   172,
     237,    76,    72,    77,   336,   172,   337,   306,   169,   276,
      78,   385,    79,   386,   307,   241,   388,   341,   277,   154,
     358,   154,   -27,   154,   170,   346,   171,   172,   173,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   240,   119,   120,   121,   122,   123,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,    74,    76,    75,    77,   242,   154,   154,   379,   380,
     255,   248,     1,   399,   117,   118,   119,   120,   121,   122,
     123,   402,   403,    78,   387,    79,    83,   389,   391,     2,
       3,   215,   264,   216,   408,   256,     4,     5,     6,   274,
     280,   281,   290,     7,     8,   301,   313,   318,     9,    10,
      11,    12,    13,   323,    14,   331,    15,    16,   330,    17,
      18,    19,    20,    21,    22,   345,   350,    23,    24,    25,
      26,    27,   351,   253,   347,   356,   357,   359,   367,    28,
     370,   374,    29,    30,   179,   378,   381,   383,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   126,   127,   390,
     128,   129,   130,   131,   132,   133,     1,   392,   295,   154,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,     2,     3,   393,   396,   397,   398,   400,
       4,     5,     6,   320,   321,   404,   154,     7,     8,   406,
     349,   407,     9,    10,    11,    12,    13,   243,    14,   304,
      15,    16,   262,    17,    18,    19,    20,    21,    22,   229,
     377,    23,    24,    25,    26,    27,     1,   249,    97,     0,
       0,     0,     0,    28,     0,     0,    29,    30,   267,     0,
       0,     0,     0,     2,     3,     0,     0,     0,     0,     0,
       4,     5,     6,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,    10,    11,    12,    13,     0,    14,   372,
      15,    16,     0,    17,    18,    19,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,     1,     0,     0,     0,
       0,     0,     0,    28,     0,     0,    29,    30,   405,     0,
       0,     0,     0,     2,     3,     0,     0,     0,     0,     0,
       4,     5,     6,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,    10,    11,    12,    13,     0,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,    22,     0,
       0,    23,    24,    25,    26,    27,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,    29,    30,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     2,     3,     0,     0,     0,
       0,     0,     4,     5,     6,     0,     0,   268,     0,     7,
       8,     0,     0,   218,     9,    10,    11,    12,     0,     0,
      14,     0,     0,     0,     0,     0,   269,     0,     0,     0,
       0,     0,     0,    53,     0,    54,    55,    56,     0,     2,
       3,     0,     0,     0,     0,   344,     4,     5,     6,     0,
       0,     0,   152,     7,     8,     0,     0,     0,     9,    10,
      11,   148,     0,     0,    14,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,     0,    53,     0,   149,
     150,   151,     0,     2,     3,     0,     0,     0,     0,     0,
       4,     5,     6,     0,     0,     0,   152,     7,     8,     0,
       0,     0,     9,    10,    11,   148,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,   296,   297,   298,     0,     2,     3,     0,
       0,     0,     0,     0,     4,     5,     6,     0,     0,     0,
     152,     7,     8,     0,     0,     0,     9,    10,    11,    12,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,    54,    55,    56,
       0,     2,     3,     0,     0,     0,     0,     0,     4,     5,
       6,     0,     0,     0,   152,     7,     8,     0,     0,     0,
       9,    10,    11,    12,     0,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,    53,
       0,    54,    55,    56,     4,     5,     6,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,    10,    11,    12,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,    23,     0,    54,    55,    56,
       4,     5,     6,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,    10,    11,   223,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,    53,     0,   224,   225,   226,     4,     5,     6,     0,
       0,     0,     0,     7,     8,     0,     0,     0,     9,    10,
      11,   148,     7,     8,    14,     0,     0,     9,    10,    11,
      12,     0,     0,    14,     0,     0,     0,    53,     0,   325,
     326,   327,     0,     0,     0,     0,    53,     0,    54,    55,
      56,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-230))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      33,     7,    39,    24,    86,     8,   235,   132,     5,   138,
       5,     5,   241,    42,     5,    21,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     5,     5,     5,    76,     5,
      78,     5,     5,   253,     5,    34,    52,   176,   177,     5,
       5,    16,    42,   263,    16,    34,    35,    94,    91,     5,
      35,    12,     6,    69,   146,    45,    73,    42,    58,    34,
      35,    92,    12,    35,    38,    38,    73,    38,    73,    73,
       5,    37,    73,    38,    76,    77,    92,    93,    12,    95,
      34,    42,    38,   131,    12,    98,    99,   100,   101,   102,
     103,   104,    42,    73,    73,    73,   335,    73,     6,    60,
      61,    62,    37,   242,     5,     5,    45,     0,    42,   244,
      60,    61,    62,   252,    42,   146,    73,     6,     5,    42,
       5,   164,     5,   136,    46,    16,    60,    61,    62,   145,
       5,    12,    60,    61,    62,   274,   271,    38,    38,   278,
      12,    73,   185,   235,   236,   237,    35,    74,   240,   241,
     163,    38,   244,    38,    37,    63,    64,    65,    66,    67,
      68,    42,    37,     5,    34,   257,     5,    34,     5,   261,
      42,     5,   311,   312,     6,     5,     5,     5,   221,    60,
      61,    62,    34,     5,     5,     5,   278,    34,    60,    61,
      62,     6,   284,     6,   286,    37,   288,     6,    37,   291,
      37,     6,    34,    37,   235,    58,   345,    37,    37,    37,
     241,   350,    58,    58,   306,    37,    37,    37,    42,    34,
     359,    36,    35,   266,    42,    34,    34,    36,    36,    34,
      42,    36,    42,    35,    42,    35,    42,    17,   251,    35,
      42,    42,    42,   335,   336,   337,    42,   339,   264,   265,
      60,    61,    62,   392,     5,    42,    58,   288,    60,    61,
      62,    34,    58,    36,    60,    61,    62,    35,    42,    42,
      34,   363,    36,   365,    42,    34,   368,   290,    42,    74,
     323,    76,     6,    78,    58,   301,    60,    61,    62,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   335,    22,    23,    24,    25,    26,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    34,    34,    36,    36,     6,   131,   132,   354,   355,
      17,    42,     3,   390,    20,    21,    22,    23,    24,    25,
      26,   394,   395,    34,   367,    36,   399,   370,   374,    20,
      21,   128,    73,   130,   407,    38,    27,    28,    29,     6,
      35,    58,     6,    34,    35,     6,    38,    56,    39,    40,
      41,    42,    43,     4,    45,    38,    47,    48,    58,    50,
      51,    52,    53,    54,    55,     6,    34,    58,    59,    60,
      61,    62,     5,     5,    73,    34,    38,     6,     6,    70,
       6,     5,    73,    74,    75,    38,    36,    58,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    28,    29,    74,
      31,    32,    33,    34,    35,    36,     3,    34,   243,   244,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    20,    21,    37,    36,    38,    73,    37,
      27,    28,    29,   268,   269,    36,   271,    34,    35,    37,
     306,    37,    39,    40,    41,    42,    43,    77,    45,   252,
      47,    48,   178,    50,    51,    52,    53,    54,    55,   139,
     351,    58,    59,    60,    61,    62,     3,   163,    45,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    -1,    45,   344,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    59,    60,    61,    62,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    -1,    45,    -1,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    74,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,    -1,    77,    -1,    34,
      35,    -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    61,    62,    -1,    20,
      21,    -1,    -1,    -1,    -1,    77,    27,    28,    29,    -1,
      -1,    -1,    77,    34,    35,    -1,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    45,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    58,    -1,    60,
      61,    62,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    77,    34,    35,    -1,
      -1,    -1,    39,    40,    41,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    60,    61,    62,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      77,    34,    35,    -1,    -1,    -1,    39,    40,    41,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,    62,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    77,    34,    35,    -1,    -1,    -1,
      39,    40,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    58,
      -1,    60,    61,    62,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    39,    40,    41,    42,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    58,    -1,    60,    61,    62,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    39,    40,    41,    42,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    58,    -1,    60,    61,    62,    27,    28,    29,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    39,    40,
      41,    42,    34,    35,    45,    -1,    -1,    39,    40,    41,
      42,    -1,    -1,    45,    -1,    -1,    -1,    58,    -1,    60,
      61,    62,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      62,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    20,    21,    27,    28,    29,    34,    35,    39,
      40,    41,    42,    43,    45,    47,    48,    50,    51,    52,
      53,    54,    55,    58,    59,    60,    61,    62,    70,    73,
      74,    79,    80,    81,    87,    90,    91,    94,    97,   101,
     103,   104,   107,   108,   112,   113,   114,   115,   116,   120,
     121,   122,    34,    58,    60,    61,    62,   112,   114,   119,
      42,    95,    96,    45,    45,    73,    73,   112,    16,    34,
      35,    42,    58,    87,    34,    36,    34,    36,    34,    36,
      42,     0,    46,   108,    98,    16,    35,    42,    88,    93,
      73,    81,    34,    34,    74,     5,    73,   121,     6,    63,
      64,    65,    66,    67,    68,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    76,    77,    28,    29,    31,    32,
      33,    34,    35,    36,   112,    37,     5,    38,    34,     5,
      73,    73,    58,   112,    58,     6,    34,    42,    42,    60,
      61,    62,    77,    84,   116,   117,   118,    42,   118,    42,
     118,    42,    34,    35,   110,   111,    42,    85,    58,    42,
      58,    60,    61,    62,    83,    84,     6,    35,     5,    75,
     102,    87,   105,   112,   112,    81,   112,   114,   114,   114,
     114,   114,   114,   114,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   120,   120,   118,    38,   117,
      42,    37,   114,    42,    60,    61,    62,    86,   115,    95,
      17,    37,     5,    38,   112,    35,    60,    62,    82,    84,
      87,    34,     6,    77,     5,    37,    37,    37,    42,   119,
     108,     6,    34,     5,    73,    17,    38,     5,    38,   115,
     115,    35,    88,   106,    73,    73,    37,    75,    77,    77,
      37,     5,    38,   108,     6,    42,    42,    42,     5,    37,
      35,    58,    73,    82,    12,    84,    12,    84,     5,    37,
       6,    12,    84,    82,   115,   116,    60,    61,    62,    84,
     117,     6,    38,   114,    86,    85,    35,    42,    89,    92,
      84,     6,    35,    38,    85,   112,   112,   108,    56,   109,
     116,   116,   117,     4,   115,    60,    61,    62,    84,   115,
      58,    38,    38,    84,    84,    35,    60,    62,    84,    87,
     100,   114,    84,    37,    77,     6,   112,    73,    37,    83,
      34,     5,   115,   115,    73,    73,    34,    38,   108,     6,
       5,    38,    82,    12,    84,    12,    84,     6,    12,    84,
       6,    99,   116,   115,     5,    38,   115,    89,    38,   112,
     112,    36,   115,    58,    38,    84,    84,   114,    84,   114,
      74,   112,    34,    37,    37,    37,    36,    38,    73,    81,
      37,   115,   108,   108,    36,    75,    37,    37,   108
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 257 "lg.ypp"
    {
		        const char *  magicffglut="#!ffglutdata3.1\n";// for complex and vector 3d plot 
                        if(ThePlotStream) fwrite(magicffglut,strlen(magicffglut),1,ThePlotStream);	            
                        size_t sizestack = currentblock->size()+1024 ; //  before close 
                        (yyvsp[(1) - (2)].cinst)+=currentblock->close(currentblock);
                        if(verbosity>2 || mpirank==0) cout << " sizestack + 1024 =" << sizestack << "  ( " << sizestack-1024 <<" )\n" ;   
                        size_t lg0,lg1;                       
                        int NbPtr = ShowAlloc("init execution ",lg0); // number of un delele ptr
			UnShowAlloc =0;// add FH for parallee
                        if(verbosity>2  || mpirank==0) cout << endl;  
                        { Stack stack = newStack(sizestack);
                        double CPUcompile= CPUtime();
                        try {                  
                          (yyvsp[(1) - (2)].cinst).eval(stack);}
                        catch ( E_exception & e)  {
                          cerr << e.what() << " ,  mpirank " << mpirank << endl;
                          return 1; }
                        catch( Error & err) {
                          cerr << err.what() << endl;
			  cerr << " err code " << err.errcode() << " ,  mpirank " << mpirank << endl;
                          return err.errcode();
                        }
                         catch( ...) { cerr << "Strange catch exception ???\n"; 
                          cerr << " at exec line  " << TheCurrentLine << " ,  mpirank " << mpirank << endl;
                          return 1; 
                         }

                        if(verbosity)  cout << "times: compile "<< CPUcompile-CPUcompileInit <<"s, execution " 
			    <<  CPUtime()-CPUcompile  <<"s,  mpirank:" << mpirank << endl;
                        deleteStack(stack);
                        //debugstack.clear() 
                        } 
                        fingraphique();
			if(ThePlotStream) {pclose(ThePlotStream); ThePlotStream=0;}
			UnShowAlloc =1;
                        NbPtr = ShowAlloc("end execution -- ",lg1) - NbPtr;
                        
			    if (NbPtr) { cout << " ######## We forget of deleting   " << NbPtr 
			                      << " Nb pointer,   " <<  lg1-lg0 << "Bytes " << " ,  mpirank " << mpirank <<endl;}
  return 0;}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 302 "lg.ypp"
    {(yyval.cinst)=(yyvsp[(1) - (1)].cexp);;;}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 303 "lg.ypp"
    { (yyval.cinst)= ((yyvsp[(1) - (2)].cinst)+=(yyvsp[(2) - (2)].cexp)) ;}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 306 "lg.ypp"
    { (yyval.clist_id)=new ListOfId();}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 307 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(1) - (1)].str)));}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 308 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].cexp))) ;}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 309 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(2) - (2)].str),Find((yyvsp[(1) - (2)].str)),atype<FE<double,2> **>()));}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 310 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(3) - (3)].str),Find((yyvsp[(1) - (3)].str)),atype<FE<double,2> **>(),true));}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 311 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(2) - (2)].str),Find((yyvsp[(1) - (2)].str)),atype<FE<double,3> **>()));}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 312 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(3) - (3)].str),Find((yyvsp[(1) - (3)].str)),atype<FE<double,3> **>(),true));}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 313 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(2) - (2)].str),C_F0(),(yyvsp[(1) - (2)].type)->right())) ;}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 314 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(3) - (3)].str),C_F0(),(yyvsp[(1) - (3)].type),true)) ;}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 315 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(2) - (3)].clist_id))) ;}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 316 "lg.ypp"
    { (yyval.clist_id) = (yyvsp[(1) - (3)].clist_id); (yyval.clist_id)->push_back(UnId((yyvsp[(3) - (3)].str))) ;}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 317 "lg.ypp"
    { (yyval.clist_id) = (yyvsp[(1) - (5)].clist_id); (yyval.clist_id)->push_back(UnId((yyvsp[(4) - (5)].clist_id))) ;}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 318 "lg.ypp"
    { (yyval.clist_id) = (yyvsp[(1) - (5)].clist_id); (yyval.clist_id)->push_back(UnId((yyvsp[(3) - (5)].str),(yyvsp[(5) - (5)].cexp))) ;}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 319 "lg.ypp"
    { (yyval.clist_id) = (yyvsp[(1) - (4)].clist_id); (yyval.clist_id)->push_back(UnId((yyvsp[(4) - (4)].str),Find((yyvsp[(3) - (4)].str)),atype<FE<double,2> **>())) ;}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 320 "lg.ypp"
    { (yyval.clist_id) = (yyvsp[(1) - (5)].clist_id); (yyval.clist_id)->push_back(UnId((yyvsp[(5) - (5)].str),Find((yyvsp[(3) - (5)].str)),atype<FE<double,2> **>(),true)) ;}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 321 "lg.ypp"
    { (yyval.clist_id) = (yyvsp[(1) - (4)].clist_id); (yyval.clist_id)->push_back(UnId((yyvsp[(4) - (4)].str),Find((yyvsp[(3) - (4)].str)),atype<FE<double,3> **>())) ;}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 322 "lg.ypp"
    { (yyval.clist_id) = (yyvsp[(1) - (5)].clist_id); (yyval.clist_id)->push_back(UnId((yyvsp[(5) - (5)].str),Find((yyvsp[(3) - (5)].str)),atype<FE<double,3> **>(),true)) ;}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 323 "lg.ypp"
    { (yyval.clist_id) = (yyvsp[(1) - (4)].clist_id); (yyval.clist_id)->push_back(UnId((yyvsp[(4) - (4)].str),C_F0(),(yyvsp[(3) - (4)].type)->right())) ;}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 324 "lg.ypp"
    { (yyval.clist_id) = (yyvsp[(1) - (5)].clist_id); (yyval.clist_id)->push_back(UnId((yyvsp[(5) - (5)].str),C_F0(),(yyvsp[(3) - (5)].type),true)) ;}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 327 "lg.ypp"
    { (yyval.clist_id) = new ListOfId(); (yyval.clist_id)->push_back(UnId((yyvsp[(1) - (1)].str))); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 328 "lg.ypp"
    { (yyval.clist_id)=(yyvsp[(1) - (3)].clist_id)  ; (yyval.clist_id)->push_back(UnId((yyvsp[(3) - (3)].str))); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 333 "lg.ypp"
    {(yyval.cexp)=currentblock->NewVar<LocalVariable>((yyvsp[(1) - (1)].str),dcltype);}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 334 "lg.ypp"
    {(yyval.cexp)=currentblock->NewVar<LocalVariable>((yyvsp[(1) - (3)].str),dcltype,(yyvsp[(3) - (3)].cexp));}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 335 "lg.ypp"
    {(yyval.cexp)=currentblock->NewVar<LocalVariable>((yyvsp[(1) - (4)].str),dcltype,(yyvsp[(3) - (4)].args));
                                              (yyvsp[(3) - (4)].args).destroy();}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 337 "lg.ypp"
    {(yyval.cexp)=C_F0((yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 344 "lg.ypp"
    {(yyval.args)=(yyvsp[(1) - (1)].cexp);}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 345 "lg.ypp"
    {(yyval.args)=Find((yyvsp[(1) - (2)].str));}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 346 "lg.ypp"
    {(yyval.args)=Find((yyvsp[(1) - (2)].str));}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 347 "lg.ypp"
    {(yyval.args)=Find((yyvsp[(1) - (2)].str));}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 348 "lg.ypp"
    { (yyval.args)=make_pair<const char *,const C_F0>((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].cexp));}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 349 "lg.ypp"
    { (yyval.args) = ((yyvsp[(1) - (3)].args) += (yyvsp[(3) - (3)].cexp)) ;}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 350 "lg.ypp"
    { (yyval.args)= ((yyvsp[(1) - (5)].args)+= make_pair<const char *,const C_F0>((yyvsp[(3) - (5)].str),(yyvsp[(5) - (5)].cexp)));}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 354 "lg.ypp"
    {(yyval.type)=TypeArray((yyvsp[(1) - (4)].type),(yyvsp[(3) - (4)].type));}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 355 "lg.ypp"
    {(yyval.type)=TypeArray((yyvsp[(1) - (6)].type),(yyvsp[(3) - (6)].type),(yyvsp[(5) - (6)].type));}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 356 "lg.ypp"
    {(yyval.type)=TypeTemplate((yyvsp[(1) - (4)].type),(yyvsp[(3) - (4)].type));}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 357 "lg.ypp"
    {(yyval.type)=TypeArray(TypeTemplate((yyvsp[(1) - (7)].type),(yyvsp[(3) - (7)].type)),(yyvsp[(6) - (7)].type));}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 358 "lg.ypp"
    {(yyval.type)=TypeArray(TypeTemplate((yyvsp[(1) - (9)].type),(yyvsp[(3) - (9)].type)),(yyvsp[(6) - (9)].type),(yyvsp[(8) - (9)].type));}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 365 "lg.ypp"
    { (yyval.cexp) =  NewFEvariable((yyvsp[(1) - (1)].str),currentblock,fespacetype,fespacecomplex,fespacedim); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 366 "lg.ypp"
    { (yyval.cexp) =  NewFEarray((yyvsp[(1) - (4)].str),currentblock,fespacetype,(yyvsp[(3) - (4)].cexp),fespacecomplex,fespacedim); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 367 "lg.ypp"
    { (yyval.cexp) =  NewFEvariable((yyvsp[(1) - (3)].str),currentblock,fespacetype,(yyvsp[(3) - (3)].cexp),fespacecomplex,fespacedim) ;}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 368 "lg.ypp"
    { (yyval.cexp) =  NewFEvariable((yyvsp[(2) - (3)].clist_id),currentblock,fespacetype,fespacecomplex,fespacedim) ;}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 369 "lg.ypp"
    { (yyval.cexp) =  NewFEarray((yyvsp[(2) - (6)].clist_id),currentblock,fespacetype,(yyvsp[(5) - (6)].cexp),fespacecomplex,fespacedim) ;}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 370 "lg.ypp"
    { (yyval.cexp) =  NewFEvariable((yyvsp[(2) - (5)].clist_id),currentblock,fespacetype,(yyvsp[(5) - (5)].cexp),fespacecomplex,fespacedim) ;}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 373 "lg.ypp"
    { (yyval.cexp) =  NewFEarray((yyvsp[(1) - (4)].str),currentblock,fespacetype,(yyvsp[(3) - (4)].cexp),fespacecomplex,fespacedim); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 374 "lg.ypp"
    { (yyval.cexp) =  NewFEarray((yyvsp[(2) - (6)].clist_id),currentblock,fespacetype,(yyvsp[(5) - (6)].cexp),fespacecomplex,fespacedim) ;}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 378 "lg.ypp"
    { fespacedim=2;}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 378 "lg.ypp"
    { fespacedim=1;}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 378 "lg.ypp"
    { fespacedim=3;}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 379 "lg.ypp"
    {fespacecomplex=false;  fespacetype = Find((yyvsp[(1) - (1)].str));}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 380 "lg.ypp"
    {
             if ((yyvsp[(3) - (4)].type) != typevarreal && (yyvsp[(3) - (4)].type) != typevarcomplex) lgerror (" type of finite element <real> or <complex>");
             fespacecomplex=((yyvsp[(3) - (4)].type)==typevarcomplex);
             fespacetype = Find((yyvsp[(1) - (4)].str));}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 385 "lg.ypp"
    {  (yyval.cexp) = (yyvsp[(1) - (1)].cexp)  ;}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 386 "lg.ypp"
    { (yyval.cexp)=C_F0((yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 388 "lg.ypp"
    {  (yyval.cexp) = (yyvsp[(1) - (1)].cexp)  ;}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 389 "lg.ypp"
    { (yyval.cexp)=C_F0((yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 391 "lg.ypp"
    { (yyval.cexp)=0;  (yyval.cexp) = (yyvsp[(2) - (2)].cexp);}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 392 "lg.ypp"
    { (yyval.cexp)=0;  (yyval.cexp) = (yyvsp[(5) - (5)].cexp);}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 396 "lg.ypp"
    {(yyval.cexp)=currentblock->NewVar<LocalVariableFES,size_t>((yyvsp[(1) - (4)].str),typeFESpace((yyvsp[(3) - (4)].args)),(yyvsp[(3) - (4)].args),dimFESpaceImage((yyvsp[(3) - (4)].args)));
     (yyvsp[(3) - (4)].args).destroy(); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 400 "lg.ypp"
    {(yyval.cexp)=C_F0((yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 403 "lg.ypp"
    {dcltype=(yyvsp[(1) - (1)].type);}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 403 "lg.ypp"
    {(yyval.cexp)=(yyvsp[(3) - (4)].cexp);}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 404 "lg.ypp"
    {(yyval.cexp)=(yyvsp[(2) - (3)].cexp);}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 405 "lg.ypp"
    { (yyval.cexp)=(yyvsp[(1) - (2)].cexp);}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 406 "lg.ypp"
    {(yyval.cexp)=currentblock->NewID((yyvsp[(1) - (5)].type),(yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].cexp));}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 408 "lg.ypp"
    {   /* use the stack to store the prev return type*/
                      assert(kkembtype+1<nbembtype);
                      rettype[++kkembtype] = (yyvsp[(2) - (6)].type)->right();
                      routineinblock[kkembtype] = currentblock;
                      (yyvsp[(5) - (6)].routine)=new Routine((yyvsp[(1) - (6)].type),(yyvsp[(2) - (6)].type)->right(),(yyvsp[(3) - (6)].str),(yyvsp[(5) - (6)].clist_id),currentblock);
		      // routineinblock[kkembtype]->Add($3,"(",$<routine>5); //pas recursif pour l'instanat test  FH 27 dec 2008
                     // cout << " \n after new routine \n " << endl;                      
                      }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 417 "lg.ypp"
    { currentblock=(yyvsp[(5) - (10)].routine)->Set((yyvsp[(9) - (10)].cinst));
                       currentblock->Add((yyvsp[(3) - (10)].str),"(",(yyvsp[(5) - (10)].routine)); //pas recursif pour l'instant test  FH 27 dec 2008
                       kkembtype--;
                       (yyval.cexp)=0;
                    
                        }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 424 "lg.ypp"
    {Block::open(currentblock); (yyvsp[(1) - (5)].type)->SetArgs((yyvsp[(4) - (5)].clist_id));}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 426 "lg.ypp"
    {  (yyval.cinst)=currentblock->close(currentblock);
                         (yyval.cexp)=currentblock->NewID((yyvsp[(1) - (9)].type),(yyvsp[(2) - (9)].str),(yyvsp[(8) - (9)].cexp),*(yyvsp[(4) - (9)].clist_id));
                         delete (yyvsp[(4) - (9)].clist_id); //  FH 23032005
                         }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 432 "lg.ypp"
    {  Block::open(currentblock);}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 433 "lg.ypp"
    {  (yyval.cexp)=currentblock->close(currentblock);}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 435 "lg.ypp"
    {ffassert(inloopcount<sizeStackOfLoop);  // modif FH july 2005
                StackOfLoop[inloopcount++]=currentblock;}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 437 "lg.ypp"
    {ffassert(inloopcount<sizeStackOfLoop);
                StackOfLoop[inloopcount++]=currentblock;}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 442 "lg.ypp"
    {dcltype=(yyvsp[(1) - (1)].type); Block::open(currentblock);  }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 443 "lg.ypp"
    {(yyval.cexp)=(yyvsp[(3) - (3)].cexp);}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 445 "lg.ypp"
    { Block::open(currentblock) ;}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 447 "lg.ypp"
    {(yyval.cexp)=0;}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 448 "lg.ypp"
    {zzzfff->input((yyvsp[(2) - (2)].str));(yyval.cexp)= 0; }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 449 "lg.ypp"
    {load((yyvsp[(2) - (2)].str));(yyval.cexp)= 0; }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 450 "lg.ypp"
    {(yyval.cexp)=Try((yyvsp[(3) - (5)].cinst),(yyvsp[(5) - (5)].cexp),currentblock->close(currentblock));}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 451 "lg.ypp"
    {(yyval.cexp)=(yyvsp[(1) - (2)].cexp);}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 452 "lg.ypp"
    {(yyval.cexp)=(yyvsp[(1) - (1)].cexp);}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 453 "lg.ypp"
    {inloopcount--; (yyval.cexp)=For((yyvsp[(3) - (9)].cexp),(yyvsp[(5) - (9)].cexp),(yyvsp[(7) - (9)].cexp),(yyvsp[(9) - (9)].cexp));}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 455 "lg.ypp"
    {inloopcount--; 
                (yyval.cexp)=C_F0(For((yyvsp[(3) - (9)].cexp),(yyvsp[(5) - (9)].cexp),(yyvsp[(7) - (9)].cexp),(yyvsp[(9) - (9)].cexp)),currentblock->close(currentblock));}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 458 "lg.ypp"
    {inloopcount--;(yyval.cexp)=While((yyvsp[(3) - (5)].cexp),(yyvsp[(5) - (5)].cexp));}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 459 "lg.ypp"
    {(yyval.cexp)=FIf((yyvsp[(3) - (5)].cexp),(yyvsp[(5) - (5)].cexp));}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 460 "lg.ypp"
    {(yyval.cexp)=FIf((yyvsp[(3) - (7)].cexp),(yyvsp[(5) - (7)].cexp),(yyvsp[(7) - (7)].cexp));}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 461 "lg.ypp"
    { 
                      (yyval.cexp)=C_F0(new E_block((yyvsp[(2) - (3)].cinst),(yyvsp[(3) - (3)].cexp)),atype<void>()) ;}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 463 "lg.ypp"
    {
                      (yyval.cexp)=0;currentblock->NewID(atype<const E_Border *>(),(yyvsp[(2) - (3)].str),C_F0(TheOperators,"[border]",(yyvsp[(3) - (3)].args)));}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 465 "lg.ypp"
    {
                      (yyval.cexp)=0;currentblock->NewID(atype<const E_Border *>(),(yyvsp[(2) - (6)].str),C_F0(TheOperators,"[border]",(yyvsp[(4) - (6)].args)));}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 468 "lg.ypp"
    {
                    if(inloopcount) 
                      (yyval.cexp)= C_F0(new E_throw(E_exception::e_break),atype<void>()); 
                    else lgerror("break not in loop") ;}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 472 "lg.ypp"
    { 
                    if(inloopcount)
                        (yyval.cexp)= C_F0(new E_throw(E_exception::e_continue),atype<void>()) ;
                    else lgerror("continue not in loop");}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 476 "lg.ypp"
    { 
                    if (kkembtype>=0)
                      (yyval.cexp)= C_F0(new E_throw(E_exception::e_return,(rettype[kkembtype]->CastTo((yyvsp[(2) - (3)].cexp))).OnReturn()) ,atype<void>());
                     else lgerror(" return not in routine ") ;}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 483 "lg.ypp"
    {(yyval.cexp) =  (yyvsp[(7) - (7)].cexp); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 486 "lg.ypp"
    { 
   Block::open(currentblock);
   (yyval.args) = currentblock->NewVar<LocalVariable>((yyvsp[(2) - (7)].str),atype<double*>());
   (yyval.args)+= (yyvsp[(4) - (7)].cexp);
   (yyval.args)+= (yyvsp[(6) - (7)].cexp) ;}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 492 "lg.ypp"
    {   
   (yyval.args) = ((yyvsp[(1) - (2)].args) += (yyvsp[(2) - (2)].cexp));
   currentblock->close(currentblock);}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 499 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 513 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 514 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,"+=",(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 515 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,"-=",(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 516 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,"*=",(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 517 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,"/=",(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 518 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,".*=",(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 519 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,"./=",(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 525 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,"?:",(yyvsp[(1) - (5)].cexp),(yyvsp[(3) - (5)].cexp),(yyvsp[(5) - (5)].cexp));}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 526 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,"::",(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 527 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,"::",(yyvsp[(1) - (5)].cexp),(yyvsp[(3) - (5)].cexp),(yyvsp[(5) - (5)].cexp));}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 532 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 533 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 534 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 535 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 536 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 537 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 538 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 539 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 540 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 541 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 542 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 543 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 544 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 545 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 546 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 547 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 548 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 549 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 550 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 555 "lg.ypp"
    {(yyval.cexp)=(yyvsp[(1) - (1)].cexp);}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 556 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,":");}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 557 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,":",(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 558 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,":",(yyvsp[(1) - (5)].cexp),(yyvsp[(3) - (5)].cexp),(yyvsp[(5) - (5)].cexp));}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 562 "lg.ypp"
    {(yyval.args)=0;}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 563 "lg.ypp"
    {(yyval.args)=Find((yyvsp[(1) - (1)].str));}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 564 "lg.ypp"
    {(yyval.args)=Find((yyvsp[(1) - (1)].str));}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 565 "lg.ypp"
    {(yyval.args)=Find((yyvsp[(1) - (1)].str));}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 566 "lg.ypp"
    { (yyval.args)=make_pair<const char *,const C_F0>((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].cexp));}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 567 "lg.ypp"
    {(yyval.args)=(yyvsp[(1) - (1)].cexp);}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 568 "lg.ypp"
    { (yyval.args) = ((yyvsp[(1) - (3)].args) += Find((yyvsp[(3) - (3)].str))) ;}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 569 "lg.ypp"
    { (yyval.args) = ((yyvsp[(1) - (3)].args) += Find((yyvsp[(3) - (3)].str))) ;}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 570 "lg.ypp"
    { (yyval.args) = ((yyvsp[(1) - (3)].args) += Find((yyvsp[(3) - (3)].str))) ;}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 571 "lg.ypp"
    { (yyval.args) = ((yyvsp[(1) - (3)].args) += (yyvsp[(3) - (3)].cexp)) ;}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 572 "lg.ypp"
    { (yyval.args)= ((yyvsp[(1) - (5)].args)+= make_pair<const char *,const C_F0>((yyvsp[(3) - (5)].str),(yyvsp[(5) - (5)].cexp))) ;}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 575 "lg.ypp"
    {(yyval.args)=(yyvsp[(1) - (1)].cexp);}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 576 "lg.ypp"
    {(yyval.args) = ((yyvsp[(1) - (3)].args) += (yyvsp[(3) - (3)].cexp)) ;}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 581 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(1) - (2)].oper),(yyvsp[(2) - (2)].cexp));}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 585 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 586 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (3)].oper),(yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].cexp));}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 587 "lg.ypp"
    {(yyval.cexp)=C_F0(TheOperators,(yyvsp[(2) - (2)].oper),(yyvsp[(1) - (2)].cexp));}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 591 "lg.ypp"
    {(yyval.cexp)=Find((yyvsp[(1) - (1)].str));}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 592 "lg.ypp"
    {(yyval.cexp)= CConstant((yyvsp[(1) - (1)].lnum));}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 593 "lg.ypp"
    {(yyval.cexp)= CConstant((yyvsp[(1) - (1)].dnum));}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 594 "lg.ypp"
    {(yyval.cexp)= CConstant(complex<double>(0,(yyvsp[(1) - (1)].dnum)));}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 595 "lg.ypp"
    {(yyval.cexp)= CConstant<const char *>((yyvsp[(1) - (1)].str));}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 596 "lg.ypp"
    {(yyval.cexp)=C_F0((yyvsp[(1) - (4)].cexp),(yyvsp[(2) - (4)].oper),(yyvsp[(3) - (4)].args));}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 597 "lg.ypp"
    {(yyval.cexp)=C_F0((yyvsp[(1) - (4)].cexp),(yyvsp[(2) - (4)].oper),(yyvsp[(3) - (4)].cexp));}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 598 "lg.ypp"
    {(yyval.cexp)=C_F0((yyvsp[(1) - (6)].cexp),(yyvsp[(2) - (6)].oper),(yyvsp[(3) - (6)].cexp),(yyvsp[(5) - (6)].cexp));}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 599 "lg.ypp"
    {(yyval.cexp)=C_F0((yyvsp[(1) - (3)].cexp),"[]");}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 600 "lg.ypp"
    { (yyval.cexp)=C_F0((yyvsp[(1) - (3)].cexp),(yyvsp[(3) - (3)].str)) ;}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 601 "lg.ypp"
    { (yyval.cexp)=C_F0(Find((yyvsp[(1) - (3)].str)),(yyvsp[(3) - (3)].str)) ;}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 602 "lg.ypp"
    { (yyval.cexp)=C_F0(Find((yyvsp[(1) - (4)].str)),(yyvsp[(2) - (4)].oper),(yyvsp[(3) - (4)].args)) ;}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 603 "lg.ypp"
    { (yyval.cexp)=C_F0(Find((yyvsp[(1) - (3)].str)),(yyvsp[(3) - (3)].str)) ;}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 604 "lg.ypp"
    { (yyval.cexp)=C_F0(Find((yyvsp[(1) - (4)].str)),(yyvsp[(2) - (4)].oper),(yyvsp[(3) - (4)].args)) ;}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 605 "lg.ypp"
    { (yyval.cexp)=C_F0(Find((yyvsp[(1) - (3)].str)),(yyvsp[(3) - (3)].str)) ;}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 606 "lg.ypp"
    { (yyval.cexp)=C_F0(Find((yyvsp[(1) - (4)].str)),(yyvsp[(2) - (4)].oper),(yyvsp[(3) - (4)].args)) ;}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 607 "lg.ypp"
    {(yyval.cexp)=C_F0(TheRightOperators,(yyvsp[(2) - (2)].oper),(yyvsp[(1) - (2)].cexp));}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 608 "lg.ypp"
    {(yyval.cexp)=C_F0(TheRightOperators,(yyvsp[(2) - (2)].oper),(yyvsp[(1) - (2)].cexp));}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 609 "lg.ypp"
    {
             if ((yyvsp[(1) - (4)].type)->right()->CastingFrom((yyvsp[(3) - (4)].cexp).left()) ) 
                (yyval.cexp)=(yyvsp[(1) - (4)].type)->right()->CastTo((yyvsp[(3) - (4)].cexp))  ;
             else { (yyval.cexp)=(yyvsp[(1) - (4)].type)->right()->Find("<--",basicAC_F0_wa((yyvsp[(3) - (4)].cexp)));
             if (!(yyval.cexp).left()) { cerr << " no wait to change " << (yyvsp[(3) - (4)].cexp).left()->right()->name() << " in " << 
                                        (yyvsp[(1) - (4)].type)->right()->name() << endl;
                                CompileError(" Error in type(exp) "); }
             }
            }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 618 "lg.ypp"
    {(yyval.cexp)=(yyvsp[(2) - (3)].cexp);}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 619 "lg.ypp"
    { (yyval.cexp)=C_F0(TheOperators,"[]",(yyvsp[(2) - (3)].args));}
    break;



/* Line 1806 of yacc.c  */
#line 3314 "lg.tab.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
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
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



/* Line 2067 of yacc.c  */
#line 624 "lg.ypp"
 


#include <fstream>
using namespace std;
// bool lgdebug;
// bool lexdebug;
void ForDebug();
void ForDebug()
{
  int i=0;
  i++;
}
//extern void ShowAlloc(const char *s, size_t lg);
//extern void ShowNbAlloc(const char *s);
void init_lgfem() ;
void init_lgmesh() ;
void init_lgmesh3() ;
void init_algo();
bool withrgraphique = false;
//string  StrVersionNumber();

int Compile()
{
  extern   YYSTYPE *plglval;  // modif FH 
  plglval = &lglval;
  int retvalue=0;
  //  int ok;
  
  currentblock=0;
  Block::open(currentblock);  
  try {
    UnShowAlloc =0;
    retvalue=yyparse (); //  compile
   
    if(retvalue==0)  
      if(currentblock) 
	{retvalue=1; if(!mpirank) cerr <<  "Error:a block is not close" << endl; }  
      else {
	  if( verbosity  ) {
	      UnShowAlloc =1;
	      cerr << " CodeAlloc : nb ptr  "<< CodeAlloc::nb << ",  size :"  <<  CodeAlloc::lg << " mpirank: " <<mpirank << endl;
	      if(!mpirank) cerr <<  "Bien: On a fini Normalement" << endl; }
	}
  }

  catch (Error & e) 
    {
      retvalue=e.errcode();
      if(mpirank ==0)
      cerr << "error " << e.what() 
	   << "\n code = "<<  retvalue << " mpirank: " <<mpirank  << endl;
    }
  catch(std::ios_base::failure & e)
    {
     cerr << "std  catch io failure \n what : " << e.what() << endl;; 
     cerr << " at exec line  " << TheCurrentLine << " mpirank: " <<mpirank  << endl; 
    }
  catch(std::exception & e)
    {
     cerr << "std  catch exception \n what : " << e.what() << endl;; 
     cerr << " at exec line  " << TheCurrentLine << " mpirank: " <<mpirank  << endl; 
    
    }
  catch(...)
   {
     cerr << "Strange catch exception ???\n"; 
     cerr << " at exec line  " << TheCurrentLine << " mpirank: " <<mpirank << endl; 
    }
  return retvalue; 
}
static void SetcppIo()
{

#ifdef _WIN32XXXX
  freopen("conin$", "r", stdin);
  freopen("conout$", "w", stdout);
  using namespace __gnu_cxx;
  //  stdio_filebuf<char> * ccout = new stdio_filebuf<char>(stdout, std::ios_base::out);
  static  stdio_filebuf<char> ccout(stdout, std::ios_base::out);
  static  stdio_filebuf<char> ccin(stdin, std::ios_base::in);
   //stdio_filebuf<char> *ccin= new stdio_filebuf<char>(stdin, std::ios_base::in);
   
   cout.rdbuf(&ccout);
   cin.rdbuf(&ccin);
   cerr.rdbuf(&ccout);
   cout << " -- SetcppIo --" << endl; 
#endif
   ios::sync_with_stdio();
}
// pour l'environement.
extern const char *  prognamearg;
extern  bool echo_edp;
int mainff (int  argc, char **argv)
{
    
   ffapi::init(); 
  if(argc)  
    prognamearg=argv[0];

    int vvold=verbosity; 
    if(mpirank !=0) verbosity=0;
  SetcppIo();
  GetEnvironment();   
    vvold=verbosity; 
    if(mpirank !=0) verbosity=0; 
  //  size_t lg000;
 // ShowAlloc("begin main ",lg000);
  int retvalue=0;

   if (initparallele)initparallele(argc,argv);

  CPUcompileInit= CPUtime();
  withrgraphique = false;
   atexit(ForDebug);
//  AllFunctions::maptype  xlocal;
//  local=&xlocal;
  lexdebug = false;
  lgdebug = false;

  char *  cc= new char [1024];
  //  istream * ccin=0;
  if ( ! (getprog(cc,argc,argv) >0)  ) 
    {
      cout << "-- FreeFem++ v" << StrVersionNumber() << " (error parameter!)\n"  ;
      return 1; 
    }
   
  if(verbosity && (mpirank==0)) { 
      cout << "-- FreeFem++ v" << StrVersionNumber() << endl;
      if(verbosity>1) cout << "   file :" << cc << " " << " verbosity= " << verbosity << endl;
  }
    
    KN<String> karg(argc);
    for(int i=0;i< argc;++i)
	karg[i]=argv[i];
    pkarg= &karg;

  zzzfff = Newlex(cout,echo_edp);
  
  
/*  
  ccin= new ifstream(cc);
  if (argc >1 && (ccin!=0) )  
     ccin= new ifstream(argv[1]),throwassert(ccin);
  if (ccin!=0) 
    zzzfff = new  mylex(*ccin,cout) ;
  else 
    zzzfff = new  mylex(cin,cout) ;
*/    
//  les motsclefs    
   zzzfff->Add("include",INCLUDE);
   zzzfff->Add("load",LOAD);
   zzzfff->Add("while",WHILE);
   zzzfff->Add("for",FOR);
   zzzfff->Add("if",IF);
   zzzfff->Add("else",ELSE);
   zzzfff->Add("end",ENDOFFILE);
   zzzfff->Add("break",BREAK);
   zzzfff->Add("continue",CONTINUE);
   zzzfff->Add("return",RETURN);
   zzzfff->Add("border",BORDER);
   zzzfff->Add("fespace",FESPACEID);
   zzzfff->Add("try",TRY);
   zzzfff->Add("catch",CATCH);
   zzzfff->Add("throw",THROW);
//   Init_map_type();
   if(verbosity>2 || (mpirank==0 ) ) cout << " Load: ";
   callInitsFunct() ; //  init for dynamique libs ...
  // init_lgfem() ;
   init_lgmesh() ;
   init_lgmesh3() ;
   init_algo();

#ifdef HAVE_LIBARPACK
   init_eigenvalue();
#endif   

   if(init_lgparallele)  init_lgparallele(); 
  //  callInitsFunct() ; //  init for dynamique libs ...

   if(verbosity>2 || mpirank==0)  cout << endl;
  zzzfff->input(cc);
  EnvironmentLoad(); // just before compile
  verbosity=vvold; 
    
  retvalue= Compile(); 
      

  if(end_parallele) end_parallele();

  //  currentblock->close(currentblock).eval(thestack);
  fingraphique();
  if(ThePlotStream) {pclose(ThePlotStream); ThePlotStream=0;}  
  Destroylex( zzzfff);
  
   // ClearMem();
  return retvalue;
}



