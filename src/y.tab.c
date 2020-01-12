/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "grammar/c_syn.y" /* yacc.c:337  */

  	#include "headers/linkedlist.h"
	#include<stdio.h>
	#include "headers/defs.h"
	#include "headers/y.tab.h"
	#include <stdlib.h>
	int for_depth_counter_var = 0;
	int direct_declarator_var = 0;
	int current_type_var = -1;


	symbol_p index_2_entry;
	symbol_p arr_id;

	symbol_p index_sentry;
	symbol_p op_index;
	symbol_p inc_index;
	char * assig_exp;
	char * sh_exp;
	int do_gen = 1;
    //int yydebug = 1;

#line 93 "y.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    VOID = 259,
    FLOAT = 260,
    FOR = 261,
    WHILE = 262,
    DO = 263,
    IF = 264,
    ELSE = 265,
    RETURN = 266,
    CONST_Q = 267,
    CONST_INT = 268,
    CONST_FLOAT = 269,
    IDENTIFIER = 270,
    STRING = 271,
    CONST = 272,
    AND_OP = 273,
    OR_OP = 274,
    LE_OP = 275,
    GE_OP = 276,
    EQ_OP = 277,
    NE_OP = 278,
    INC = 279,
    DEC = 280,
    LEFT_OP = 281,
    RIGHT_OP = 282
  };
#endif
/* Tokens.  */
#define INT 258
#define VOID 259
#define FLOAT 260
#define FOR 261
#define WHILE 262
#define DO 263
#define IF 264
#define ELSE 265
#define RETURN 266
#define CONST_Q 267
#define CONST_INT 268
#define CONST_FLOAT 269
#define IDENTIFIER 270
#define STRING 271
#define CONST 272
#define AND_OP 273
#define OR_OP 274
#define LE_OP 275
#define GE_OP 276
#define EQ_OP 277
#define NE_OP 278
#define INC 279
#define DEC 280
#define LEFT_OP 281
#define RIGHT_OP 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "grammar/c_syn.y" /* yacc.c:352  */

	struct {
		int count_p;
		int count_m;
		int type;
		int size;
		int val;
		float fval;
		void * sentry;
		int t[4];
		char* string_val;
		int type_counter;
		node_t*list;
		char *X, *Y;
		char *n;
		int id_size;
		char * string_exp;


		symbol_p i;
		symbol_p j;
		symbol_p index_sentry;
		symbol_p vec;
		symbol_p vec2;
		char* left;
		char* right;
		unsigned short index_dep : 1;
		unsigned short exp_dep : 1;
		int depth;
	}vv;
	struct {
		int op_type;
	}zz;

	struct {
		int tp;
	}typiee;

#line 229 "y.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  216

#define YYUNDEFTOK  2
#define YYMAXUTOK   282

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,    44,     2,
      19,    20,    27,    28,    43,    29,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    21,
      30,    18,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    24,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,    46,    22,     2,     2,     2,     2,
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
      15,    16,    17,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    76,    77,    77,    79,    79,    80,    84,
     113,   115,   112,   200,   494,   496,   496,   496,   496,   494,
     503,   529,   542,   554,   567,   589,   604,   626,   916,   931,
     934,   948,   951,   957,   962,   972,   981,   989,   999,  1004,
    1012,  1022,  1026,  1036,  1046,  1057,  1061,  1072,  1085,  1089,
    1100,  1113,  1117,  1128,  1138,  1148,  1160,  1164,  1174,  1186,
    1190,  1202,  1206,  1218,  1222,  1234,  1238,  1249,  1254,  1268,
    1272,  1285,  1294,  1297,  1301,  1314,  1322,  1329,  1338
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "VOID", "FLOAT", "FOR", "WHILE",
  "DO", "IF", "ELSE", "RETURN", "CONST_Q", "CONST_INT", "CONST_FLOAT",
  "IDENTIFIER", "STRING", "CONST", "'='", "'('", "')'", "';'", "'}'",
  "'{'", "']'", "'['", "'/'", "'*'", "'+'", "'-'", "'<'", "'>'", "'%'",
  "AND_OP", "OR_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "INC", "DEC",
  "LEFT_OP", "RIGHT_OP", "','", "'&'", "'^'", "'|'", "$accept",
  "optimizer_start", "a", "level_vec", "level1", "level1_2", "vec_swap",
  "level2", "$@1", "$@2", "level1_1", "optimization1", "$@3", "$@4", "$@5",
  "$@6", "$@7", "optimization2_1", "optimization1_1", "comp_op",
  "expression", "postfix_expression", "unary_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "assignment_operator", "type_specifier",
  "primary_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    61,    40,
      41,    59,   125,   123,    93,    91,    47,    42,    43,    45,
      60,    62,    37,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,    44,    38,    94,   124
};
# endif

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -11,    20,  -149,    25,  -149,  -149,    26,     2,  -149,
    -149,  -149,     2,     2,     2,    49,    38,    21,    56,    71,
      60,    64,    16,    17,    24,    33,    42,  -149,  -149,    -7,
    -149,  -149,  -149,    58,     2,  -149,  -149,  -149,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    66,  -149,     2,
    -149,    -5,  -149,  -149,  -149,  -149,  -149,    21,    21,    56,
      56,    71,    71,    71,    71,    60,    60,    64,    16,    17,
      24,    33,    79,  -149,  -149,  -149,    70,  -149,  -149,     2,
      71,    83,    96,  -149,    77,   101,    99,   105,  -149,  -149,
    -149,  -149,   102,  -149,  -149,  -149,  -149,  -149,   108,  -149,
    -149,    38,  -149,   110,  -149,   103,  -149,   111,  -149,   106,
    -149,   113,  -149,   112,  -149,   104,  -149,   116,  -149,   114,
    -149,    38,  -149,   117,  -149,   115,    28,   120,   118,   119,
     121,   124,   126,   125,  -149,   123,   133,   134,    38,   128,
       2,    10,   136,   135,   130,     7,  -149,   109,   138,   142,
     143,  -149,    10,   144,    38,    70,   139,   137,   141,   149,
       2,   140,   153,   148,    51,    84,   146,  -149,   156,  -149,
    -149,   145,   152,   150,   159,  -149,   151,   160,   154,   155,
     162,   157,    38,    67,   158,   161,   147,   164,   171,   165,
     173,   168,  -149,   169,   170,   174,   178,   172,   175,   176,
     177,   182,    84,   179,  -149,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,    14,     0,     0,    76,
      77,    75,     0,     0,     0,    38,    41,    45,    48,    51,
      56,    59,    61,    63,    65,    67,    69,    15,    33,     0,
      31,    39,    40,     0,     0,    36,    37,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
      35,     0,    70,    43,    42,    44,    41,    46,    47,    49,
      50,    52,    53,    54,    55,    57,    58,    60,    62,    64,
      66,    68,     0,    32,    34,    16,     0,    30,    29,     0,
      17,     0,     0,    18,     0,     0,     0,     3,    73,    72,
      74,     3,     0,     4,     7,     8,     5,     6,     0,     3,
      19,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,    28,    33,     0,     0,
       0,    13,     0,     0,     0,     0,     0,    27,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     9,     0,    24,
      26,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,    23,    33,     0,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,    21,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,   -55,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,    36,    14,
     -33,  -149,    -8,    72,    73,   -37,    69,   163,   166,   167,
     180,   181,  -149,    -1,  -109,  -149,  -148
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   101,   102,   103,   104,   105,   106,   147,   186,
     107,     3,     7,    57,    86,    91,    94,   195,   155,    89,
      29,    15,    66,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    30,    38,   108,    28
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    61,   113,   157,    16,    31,    32,    27,     4,    71,
      72,    73,    74,    58,   157,     9,    10,    11,     1,    84,
       5,    12,   133,     9,    10,   154,    16,   179,   161,    12,
      16,    63,    64,    65,   138,   162,    59,    62,    59,   151,
       6,    13,    14,   139,     8,   197,   109,    39,    40,    13,
      14,    16,    90,    41,   112,   169,    37,   114,    83,   116,
      52,   118,    53,   120,   214,   122,    55,   124,    33,   126,
      54,   128,   178,   130,    34,   132,    56,   134,    60,   136,
       9,    10,   194,   193,    42,    43,    12,    82,    35,    36,
      46,    47,    44,    45,    85,    48,    49,     9,    10,    11,
      87,    50,    51,    12,    92,    88,    13,    14,    98,    99,
     100,    93,    44,    45,    67,    68,    95,    69,    70,    75,
      76,    96,    97,   111,   110,   115,   119,   125,   117,   127,
     121,   129,   135,   174,   123,   140,   163,   141,   131,   144,
     137,   145,    16,    16,   142,   143,   146,   148,   149,   153,
     156,   158,   150,   152,    16,   160,   159,   165,   166,   168,
     196,   156,   164,   171,   173,   162,   172,   175,   176,   177,
     180,   181,   183,   184,   185,   188,   187,   191,   189,   170,
     190,   192,   199,   198,   182,    16,   201,   202,   203,   207,
      59,   200,   204,   208,   205,   206,   209,   213,   167,   210,
       0,   211,     0,   215,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,    78,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,    81
};

static const yytype_int16 yycheck[] =
{
       8,    34,   111,   151,    12,    13,    14,     8,    19,    46,
      47,    48,    49,    20,   162,    13,    14,    15,     6,    24,
       0,    19,   131,    13,    14,    15,    34,   175,    21,    19,
      38,    39,    40,    41,     6,    28,    43,    38,    43,   148,
      15,    39,    40,    15,    18,   193,   101,    26,    27,    39,
      40,    59,    89,    32,   109,   164,    18,   112,    59,   114,
      44,   116,    45,   118,   212,   120,    33,   122,    19,   124,
      46,   126,    21,   128,    25,   130,    34,   132,    20,   134,
      13,    14,    15,   192,    28,    29,    19,    21,    39,    40,
      30,    31,    41,    42,    15,    35,    36,    13,    14,    15,
      30,    37,    38,    19,    21,    35,    39,    40,     3,     4,
       5,    15,    41,    42,    42,    43,    39,    44,    45,    50,
      51,    20,    23,    15,    22,    15,    15,    15,    25,    25,
      24,    15,    15,   170,    21,    15,    27,    19,    24,    15,
      25,    15,   150,   151,    25,    24,    21,    24,    15,   150,
     151,    15,    18,    25,   162,    25,    21,    15,    15,    15,
     193,   162,    24,    24,    15,    28,    25,    27,    15,    21,
      24,    15,    20,    23,    15,    15,    25,    15,    24,   165,
      25,    24,    21,    25,    39,   193,    15,    22,    15,    15,
      43,    27,    24,    15,    25,    25,    24,    15,   162,    24,
      -1,    25,    -1,    24,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    53,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    48,    58,    19,     0,    15,    59,    18,    13,
      14,    15,    19,    39,    40,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    83,    67,
      80,    69,    69,    19,    25,    39,    40,    18,    81,    26,
      27,    32,    28,    29,    41,    42,    30,    31,    35,    36,
      37,    38,    44,    45,    46,    33,    34,    60,    20,    43,
      20,    67,    80,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    73,    73,    74,    75,    76,
      77,    78,    21,    80,    24,    15,    61,    30,    35,    66,
      72,    62,    21,    15,    63,    39,    20,    23,     3,     4,
       5,    49,    50,    51,    52,    53,    54,    57,    82,    49,
      22,    15,    49,    81,    49,    15,    49,    25,    49,    15,
      49,    24,    49,    21,    49,    15,    49,    25,    49,    15,
      49,    24,    49,    81,    49,    15,    49,    25,     6,    15,
      15,    19,    25,    24,    15,    15,    21,    55,    24,    15,
      18,    81,    25,    80,    15,    65,    80,    83,    15,    21,
      25,    21,    28,    27,    24,    15,    15,    65,    15,    81,
      66,    24,    25,    15,    72,    27,    15,    21,    21,    83,
      24,    15,    39,    20,    23,    15,    56,    25,    15,    24,
      25,    15,    24,    81,    15,    64,    67,    83,    25,    21,
      27,    15,    22,    15,    24,    25,    25,    15,    15,    24,
      24,    25,    27,    15,    83,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    50,    50,    51,    51,    52,    53,
      55,    56,    54,    57,    59,    60,    61,    62,    63,    58,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    68,    68,    68,    69,    69,
      69,    70,    70,    70,    70,    71,    71,    71,    72,    72,
      72,    73,    73,    73,    73,    73,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    82,    82,    82,    83,    83,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     1,     1,     1,    25,
       0,     0,    42,    22,     0,     0,     0,     0,     0,    21,
       7,     9,     9,     1,     6,     4,     6,     3,     1,     1,
       1,     1,     3,     1,     4,     3,     2,     2,     1,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 9:
#line 91 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	   		if((yyvsp[-23].vv).sentry == (yyvsp[-1].vv).sentry && index_sentry == (yyvsp[-19].vv).sentry && index_sentry == (yyvsp[-9].vv).sentry &&
	   		   (yyvsp[-14].vv).sentry == index_sentry && (yyvsp[-4].vv).sentry == index_sentry && (yyvsp[-16].vv).sentry != (yyvsp[-6].vv).sentry &&
	   		   (yyvsp[-21].vv).sentry == (yyvsp[-16].vv).sentry && (yyvsp[-11].vv).sentry == (yyvsp[-6].vv).sentry ) {
				void cblas_sswap(const int size, float *X, const int incX,float *Y, const int incY);

				int len = strlen(sh_exp)+strlen(assig_exp)+strlen((yyvsp[-16].vv).string_val)+
				      strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)+strlen(assig_exp)+50;
				char* res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"cblas_sswap((const int)%s-%s+1,(%s+%s),1,(%s+%s),1);",sh_exp,assig_exp,(yyvsp[-16].vv).string_val,assig_exp,(yyvsp[-6].vv).string_val,assig_exp);
				write_res(res,len);
				free(res);
				return 1333;
	   		   }
	   		   else{
						perror("Swap form without conditions!\n");
	   		   }
	   }
#line 1484 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 113 "grammar/c_syn.y" /* yacc.c:1652  */
    {index_2_entry = (yyvsp[0].vv).sentry;}
#line 1490 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 115 "grammar/c_syn.y" /* yacc.c:1652  */
    {arr_id = (yyvsp[0].vv).sentry;}
#line 1496 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 119 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			perror("matrix optimization 2\n");

					if (op_index != index_sentry || inc_index != index_sentry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					if ((yyvsp[-19].vv).sentry != index_2_entry || (yyvsp[-15].vv).sentry != index_2_entry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					if ((yyvsp[-8].vv).sentry != index_sentry || (yyvsp[-5].vv).sentry != index_2_entry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					if (arr_id == index_2_entry || arr_id == index_sentry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					char *res;
					int len;
					if ((yyvsp[-2].vv).type == 1) {
						printf("MATRIX COPY\n");
						if ((yyvsp[-11].vv).sentry != (yyvsp[-2].vv).vec && (yyvsp[-2].vv).i == index_sentry && (yyvsp[-2].vv).j == index_2_entry) {

							perror("Matrix copy optimization \n");
							char *x =  (yyvsp[-11].vv).string_val;
							char *y =  (yyvsp[-2].vv).vec->name;

							len = strlen(sh_exp) + strlen(assig_exp) + strlen(x) + strlen(y) + 27 + strlen((yyvsp[-17].vv).string_exp) + strlen((yyvsp[-21].vv).string_exp);
							res = (char *) malloc(sizeof(char) * len);
							memset(res, 0, len);
							snprintf(res, len, "matrix_copy(%s-%s+1, %s-%s+1, %s, %s);", sh_exp, assig_exp, (yyvsp[-17].vv).string_exp, (yyvsp[-21].vv).string_exp, x, y);
							write_res(res, len);
							free(res);
							return 1333;
						} else {

							perror("Matrix Initialization \n");
							char *x =  (yyvsp[-11].vv).string_val;
							char *y =  (yyvsp[-2].vv).string_exp;

							len = strlen(sh_exp) + strlen(assig_exp) + strlen(x) + strlen(y) + 27 + strlen((yyvsp[-17].vv).string_exp) + strlen((yyvsp[-21].vv).string_exp);
							res = (char *) malloc(sizeof(char) * len);
							snprintf(res, len, "matrix_init(%s-%s+1, %s-%s+1, %s, %s);", sh_exp, assig_exp, (yyvsp[-17].vv).string_exp, (yyvsp[-21].vv).string_exp, y, x);
							write_res(res, len);
							free(res);
							return 1333;
						}
					} else if ((yyvsp[-2].vv).type == 2) {
						printf("MATRIX SCALE\n");
						
						char *x =  (yyvsp[-11].vv).string_val;
						char *y =  (yyvsp[-2].vv).string_exp;

						len = strlen(sh_exp) + strlen(assig_exp) + strlen(x) + strlen(y) + 28 + strlen((yyvsp[-17].vv).string_exp) + strlen((yyvsp[-21].vv).string_exp);
						res = (char *) malloc(sizeof(char) * len);
						snprintf(res, len, "matrix_scale(%s-%s+1, %s-%s+1, %s, %s);", sh_exp, assig_exp, (yyvsp[-17].vv).string_exp, (yyvsp[-21].vv).string_exp, y, x);
						write_res(res, len);
						free(res);
						return 1333;
					} else if ((yyvsp[-2].vv).type == 3) {
						printf("Matrix Initialization \n");
						char *x =  (yyvsp[-11].vv).string_val;
						char *y =  (yyvsp[-2].vv).string_exp;

						len = strlen(sh_exp) + strlen(assig_exp) + strlen(x) + strlen(y) + 27 + strlen((yyvsp[-17].vv).string_exp) + strlen((yyvsp[-21].vv).string_exp);
						res = (char *) malloc(sizeof(char) * len);
						snprintf(res, len, "matrix_init(%s-%s+1, %s-%s+1, %s, %s);", sh_exp, assig_exp, (yyvsp[-17].vv).string_exp, (yyvsp[-21].vv).string_exp, y, x);
						write_res(res, len);
						free(res);
						return 1333;
					}

				}
#line 1580 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 203 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			if(index_sentry != op_index || index_sentry != inc_index){
				perror("[-] loop doesn't follow optimization crits \n");
				return -1234;
			}
			char *res,*res1,*res2;
			int len ;
			int len2;
			if((yyvsp[-1].vv).type == 1){
				if((yyvsp[-1].vv).vec == (yyvsp[-6].vv).sentry && (yyvsp[-1].vv).index_sentry != 0 && (yyvsp[-1].vv).index_sentry == index_sentry ){
					//scaling....
					perror("Scaling optimization \n");
					len = strlen(assig_exp)+strlen(sh_exp)+strlen((yyvsp[-1].vv).right)+strlen((yyvsp[-1].vv).left)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).right,(yyvsp[-6].vv).string_val);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if((yyvsp[-1].vv).index_sentry != 0 && (yyvsp[-1].vv).index_sentry != index_sentry){
					perror("init_vec 1 \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)+strlen(assig_exp)+strlen((yyvsp[-1].vv).left)+strlen((yyvsp[-1].vv).right)+45;
					perror("strlen done\n");
					res = malloc(len);
					memset(res,0,len);
					perror("malloc done\n");
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",sh_exp,assig_exp,(yyvsp[-6].vv).string_val,assig_exp,(yyvsp[-1].vv).left,(yyvsp[-1].vv).right);
					perror("sprintf done\n");
					write_res(res,len);
					perror("write done\n");
					free(res);
					return 1333;
				}
				else {
					perror("init dependece 1 \n");
					return -123;
				}
			}
			if((yyvsp[-1].vv).type == 2){
				perror("IDENTIFIER '[' IDENTIFIER ']'\n");
				if((yyvsp[-1].vv).vec != (yyvsp[-6].vv).sentry && (yyvsp[-1].vv).index_sentry != 0 && (yyvsp[-1].vv).index_sentry == index_sentry ){
					//scopy
					perror("Scopy optimization \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen((yyvsp[-1].vv).vec->name)+strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)+strlen(assig_exp)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_scopy((const int)%s-%s+1,%s+%s,1,%s+%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).vec->name,assig_exp,(yyvsp[-6].vv).string_val,assig_exp);
					write_res(res,len);
					free(res);
					return 1333;

				}
				else if( (yyvsp[-1].vv).index_sentry != 0 && (yyvsp[-1].vv).index_sentry != index_sentry){
					perror("init_vec2  \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)+strlen(assig_exp)+strlen((yyvsp[-1].vv).left)+45;
					res = malloc(len);
					memset(res,0,len);
					perror((yyvsp[-1].vv).left);
					snprintf(res,len,"init_fvec(%s-%s+1,%s+%s,(const float)%s);",sh_exp,assig_exp,(yyvsp[-6].vv).string_val,assig_exp,(yyvsp[-1].vv).left);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else{
					perror("init dependece 2 \n");
					return -123;
				}

			}
			else if((yyvsp[-1].vv).type == 3){
				if((yyvsp[-1].vv).vec == (yyvsp[-6].vv).sentry && (yyvsp[-1].vv).index_sentry != 0 && (yyvsp[-1].vv).index_sentry == index_sentry ){
					//scaling....
					perror("Scaling optimization 3\n");
					len = 100;//strlen(assig_exp)+strlen(sh_exp)+strlen($21.right)+strlen($21.left)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).left,(yyvsp[-1].vv).vec->name);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if((yyvsp[-1].vv).index_sentry != 0 && (yyvsp[-1].vv).index_sentry != index_sentry){
					perror("init_vec 193 \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)+strlen(assig_exp)+strlen((yyvsp[-1].vv).left)+strlen((yyvsp[-1].vv).right)+45;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",sh_exp,assig_exp,(yyvsp[-6].vv).string_val,assig_exp,(yyvsp[-1].vv).right,(yyvsp[-1].vv).left);
					perror("sprintf done\n");
					write_res(res,len);
					free(res);
					return 1333;
				}
				else {
					perror("init dependece 3 \n");
					return -123;
				}
			}
			else if((yyvsp[-1].vv).type == 5){
				perror("init_vec 209 \n");
				len = strlen(sh_exp)+strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)+strlen(assig_exp)+strlen((yyvsp[-1].vv).left)+45;
				res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s);",sh_exp,assig_exp,(yyvsp[-6].vv).string_val,assig_exp,(yyvsp[-1].vv).left);
				perror("sprintf done\n");
				write_res(res,len);
				free(res);
				return 1333;
			}
			else if((yyvsp[-1].vv).type == 41){
				perror("axy 6 \n");
				//y = a*x + y
				if((yyvsp[-6].vv).sentry == (yyvsp[-1].vv).vec && (yyvsp[-6].vv).sentry == (yyvsp[-1].vv).vec2){
					//y = y*a + y*b
					// 1 - y = y * a
					// 2 - y = y + y *b
					perror("y = y*a+y*b :/ can't be done \n");
					return -1;
					//TODO delete later
					len = strlen(assig_exp)+strlen(sh_exp)+strlen((yyvsp[-1].vv).left)+strlen((yyvsp[-6].vv).string_val)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).left,(yyvsp[-6].vv).string_val);
					len2 = strlen(assig_exp)+strlen((yyvsp[-1].vv).left)+strlen((yyvsp[-6].vv).string_val)*2+70;
					res2 = malloc(len2);
					snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).right,(yyvsp[-6].vv).string_val,(yyvsp[-6].vv).string_val);
					res1 = malloc(len+len2+3);
					snprintf(res1,len+len2+3,"%s%s",res,res2);
					printf("%s\n",res1);
					write_res(res1,len+len2+3);
					free(res);
					free(res1);
					free(res2);

				}
				else if((yyvsp[-6].vv).sentry == (yyvsp[-1].vv).vec && (yyvsp[-6].vv).sentry != (yyvsp[-1].vv).vec2){
					if((yyvsp[-1].vv).left != 0 && (yyvsp[-1].vv).right != 0){
						perror("Z = Z*a+Y*b =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen((yyvsp[-1].vv).left)+strlen((yyvsp[-6].vv).string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).left,(yyvsp[-6].vv).string_val);
						len2 = strlen(assig_exp)+strlen((yyvsp[-1].vv).right)+strlen((yyvsp[-6].vv).string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).right,(yyvsp[-1].vv).vec2->name,(yyvsp[-6].vv).string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						free(res);
						free(res1);
						free(res2);
					}
					else if((yyvsp[-1].vv).left == 0 && (yyvsp[-1].vv).right != 0){
						perror("Z = Z +Y*b =D \n");
						len2 = strlen(assig_exp)+strlen((yyvsp[-1].vv).right)+strlen((yyvsp[-6].vv).string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).right,(yyvsp[-1].vv).vec2->name,(yyvsp[-6].vv).string_val);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
					}
					else if((yyvsp[-1].vv).left != 0 && (yyvsp[-1].vv).right == 0){
						perror("Z = Z*a +Y =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen((yyvsp[-1].vv).left)+strlen((yyvsp[-6].vv).string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).left,(yyvsp[-6].vv).string_val);
						len2 = strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).vec2->name,(yyvsp[-6].vv).string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						printf("%s\n",res1);
						free(res);
						free(res1);
						free(res2);

					}
					else {
						perror("X = X + Y \n");
						len2 = strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).vec2->name,(yyvsp[-6].vv).string_val);
						printf("%s\n",res2);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
						return 1333;
					}



					return 1333;
				}
				else if((yyvsp[-6].vv).sentry != (yyvsp[-1].vv).vec && (yyvsp[-6].vv).sentry == (yyvsp[-1].vv).vec2){
					perror("X = a*Y + X");
					if((yyvsp[-1].vv).left != 0 && (yyvsp[-1].vv).right != 0){
						perror("Z = Z*a+Y*b =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen((yyvsp[-1].vv).left)+strlen((yyvsp[-6].vv).string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).left,(yyvsp[-6].vv).string_val);
						len2 = strlen(assig_exp)+strlen((yyvsp[-1].vv).right)+strlen((yyvsp[-6].vv).string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).right,(yyvsp[-1].vv).vec2->name,(yyvsp[-6].vv).string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						free(res);
						free(res1);
						free(res2);
					}
					else if((yyvsp[-1].vv).left == 0 && (yyvsp[-1].vv).right != 0){
						perror("Z = Y + a*Z =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen((yyvsp[-1].vv).right)+strlen((yyvsp[-6].vv).string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						perror("memset\n");
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).right,(yyvsp[-6].vv).string_val);
						len2 = strlen(assig_exp)+strlen((yyvsp[-1].vv).right)+strlen((yyvsp[-6].vv).string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).vec->name,(yyvsp[-6].vv).string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						free(res);
						free(res1);
						free(res2);
					}
					else if((yyvsp[-1].vv).left != 0 && (yyvsp[-1].vv).right == 0){
						printf("=======> HERE : %s\n",(yyvsp[-1].vv).vec->name);
						printf("=======> HERE : %s\n",(yyvsp[-1].vv).vec2->name);
						perror("Z = a*Z +Y =D \n");
						len2 = strlen(assig_exp)*3+strlen(sh_exp)+strlen((yyvsp[-6].vv).string_val)+strlen((yyvsp[-1].vv).vec->name)+strlen((yyvsp[-1].vv).left)+100;
						res2 = malloc(len2);
						memset(res2,0,len2);
						snprintf(res2,len2,"cblas_saxpy((const int)(%s)-(%s)+1,(const float)(%s),(const float*)(%s+(%s)),1,(%s+(%s)),1);",sh_exp,assig_exp,(yyvsp[-1].vv).left,(yyvsp[-1].vv).vec->name,assig_exp,(yyvsp[-6].vv).string_val,assig_exp);
						printf("$$=====%s\n",res2);
						write_res(res2,len2+3);
						free(res2);
						return 1333;
//=============================================================================
					}
					else {
						perror("X = X + Y \n");
						len2 = strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,(yyvsp[-1].vv).vec2->name,(yyvsp[-6].vv).string_val);
						printf("%s\n",res2);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
						return 1333;
					}



				}
				else{
					//y = x*a + y*b
					perror("error is here...\n");
					perror("y = x*a+y*b =D \n");
					return -1;
				}
				return 1333;

			}
			else if((yyvsp[-1].vv).type == 42){
				perror("init_vec 6 \n");
				if((yyvsp[-6].vv).sentry == (yyvsp[-1].vv).vec || (yyvsp[-6].vv).sentry == (yyvsp[-1].vv).vec2){
					perror("optimization 42 can't be done :/ \n");
					return -1;
				}
				len = strlen(sh_exp)+strlen(assig_exp)+strlen((yyvsp[-6].vv).string_val)+strlen(assig_exp)+strlen((yyvsp[-1].vv).left)+55;
				res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"init_fvec((const int)%s-%s+1,(float*)(%s+%s),(const float)%s);",sh_exp,assig_exp,(yyvsp[-6].vv).string_val,assig_exp,(yyvsp[-1].vv).left);
				perror("sprintf done\n");
				write_res(res,len);
				free(res);
				return 1333;
			}

			index_sentry = 0;
}
#line 1875 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 494 "grammar/c_syn.y" /* yacc.c:1652  */
    {index_sentry = (yyvsp[0].vv).sentry;}
#line 1881 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 496 "grammar/c_syn.y" /* yacc.c:1652  */
    {assig_exp = (yyvsp[0].vv).string_exp;}
#line 1887 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 496 "grammar/c_syn.y" /* yacc.c:1652  */
    {op_index =(yyvsp[0].vv).sentry; }
#line 1893 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 496 "grammar/c_syn.y" /* yacc.c:1652  */
    {sh_exp = (yyvsp[0].vv).string_exp;}
#line 1899 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 496 "grammar/c_syn.y" /* yacc.c:1652  */
    {inc_index=(yyvsp[0].vv).sentry;}
#line 1905 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 503 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type  = 1; 
		
		(yyval.vv).depth = 0;
		(yyval.vv).index_dep = 0;
		
		if (arr_id == (yyvsp[-6].vv).sentry) {
			perror("[-] unable to optimize \n");
			return -1;
		}
		if ((yyvsp[-4].vv).sentry == index_sentry && (yyvsp[-1].vv).sentry == index_2_entry) {
			(yyval.vv).i = (yyvsp[-4].vv).sentry;
			(yyval.vv).j = (yyvsp[-1].vv).sentry;
		} else if ((yyvsp[-4].vv).sentry != index_sentry && (yyvsp[-1].vv).sentry != index_sentry) {
			(yyval.vv).i = 0;
			(yyval.vv).j = 0;
		} else {
			perror("[-] unable to optimize \n");
			return -1;
		}
		(yyval.vv).vec = (yyvsp[-6].vv).sentry;
		int len = strlen((yyvsp[-6].vv).string_val) + strlen((yyvsp[-4].vv).string_val) + strlen((yyvsp[-1].vv).string_val) + 5;
		(yyval.vv).string_exp = (char *) malloc(sizeof(char) * len);
		memset((yyval.vv).string_exp, 0, len);
		snprintf((yyval.vv).string_exp, len, "%s[%s][%s]", (yyvsp[-6].vv).string_val, (yyvsp[-4].vv).string_val, (yyvsp[-1].vv).string_val);
	}
#line 1936 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 529 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = 2;
		
		if ((yyvsp[-6].vv).sentry == index_sentry && (yyvsp[-3].vv).sentry == index_2_entry && arr_id == (yyvsp[-8].vv).sentry) {
			(yyval.vv).i = (yyvsp[-6].vv).sentry;
			(yyval.vv).j = (yyvsp[-3].vv).sentry;
		} else {
			perror("[-] unable to optimize \n");
			return -1;
		}
		(yyval.vv).vec = (yyvsp[-8].vv).sentry;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1954 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 542 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = 2;
		
		if ((yyvsp[-4].vv).sentry == index_sentry && (yyvsp[-1].vv).sentry == index_2_entry && arr_id == (yyvsp[-6].vv).sentry) {
			(yyval.vv).i = (yyvsp[-4].vv).sentry;
			(yyval.vv).j = (yyvsp[-1].vv).sentry;
		} else {
			perror("[-] unable to optimize \n");
			return -1;
		}
		(yyval.vv).vec = (yyvsp[-6].vv).sentry;
		(yyval.vv).string_exp = (yyvsp[-8].vv).string_exp;
	}
#line 1972 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 554 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type  = 3;
		(yyval.vv).depth = 0;
		(yyval.vv).index_dep = 0;
		int len = strlen((yyvsp[0].vv).string_exp);

		(yyval.vv).string_exp = (char *) malloc(sizeof(char) * len);
		memset((yyval.vv).string_exp, 0, len);
		strncpy((yyval.vv).string_exp, (yyvsp[0].vv).string_exp, len);
	}
#line 1987 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 567 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).type = 1;
			(yyval.vv).depth = 0;
			(yyval.vv).index_dep = 0;
			if((yyvsp[-3].vv).sentry == index_sentry){
				(yyval.vv).index_dep = 1;
			}
			(yyval.vv).exp_dep = dep_exist(index_sentry,(yyvsp[0].vv).list);
			if((yyval.vv).exp_dep == 1){
				perror("[-] multplication dependence exist \n");
				return -1233;
			}
			int left_len = strlen((yyvsp[-5].vv).string_val)+strlen((yyvsp[-3].vv).string_val)+4;
			(yyval.vv).left = malloc(left_len);
			memset((yyval.vv).left,0,left_len);
			snprintf((yyval.vv).left,left_len,"%s[%s]",(yyvsp[-5].vv).string_val,(yyvsp[-3].vv).string_val);

			(yyval.vv).right = (yyvsp[0].vv).string_exp;
			(yyval.vv).vec = (yyvsp[-5].vv).sentry;
			(yyval.vv).index_sentry = (yyvsp[-3].vv).sentry;

		}
#line 2014 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 589 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).type = 2;
			(yyval.vv).depth = 0;

			(yyval.vv).vec = (yyvsp[-3].vv).sentry;
			(yyval.vv).index_sentry = (yyvsp[-1].vv).sentry;


			int left_len = strlen((yyvsp[-3].vv).string_val)+strlen((yyvsp[-1].vv).string_val)+3;
			printf("left len : %d\n",left_len);
			(yyval.vv).left = malloc(left_len);
			memset((yyval.vv).left,0,left_len);
			snprintf((yyval.vv).left,left_len,"%s[%s]",(yyvsp[-3].vv).string_val,(yyvsp[-1].vv).string_val);
			printf("left len : %d\n",left_len);
		}
#line 2034 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 604 "grammar/c_syn.y" /* yacc.c:1652  */
    {

			perror("primary_expression '*' IDENTIFIER '[' IDENTIFIER ']' \n");
			(yyval.vv).type = 3;
			(yyval.vv).depth = 0;
			(yyval.vv).index_dep = 0;
			if((yyvsp[-3].vv).sentry == index_sentry){
				(yyval.vv).index_dep = 1;
			}
			(yyval.vv).exp_dep = dep_exist(index_sentry,(yyvsp[-5].vv).list);
			if((yyval.vv).exp_dep == 1){
				perror("[-] left multplication dependence exist \n");
				return -1233;
			}
			int right_len = strlen((yyvsp[-3].vv).string_val)+strlen((yyvsp[-1].vv).string_val)+3;
			(yyval.vv).right = malloc(right_len);
			memset((yyval.vv).right,0,right_len);
			snprintf((yyval.vv).right,right_len,"%s[%s]",(yyvsp[-3].vv).string_val,(yyvsp[-1].vv).string_val);
			(yyval.vv).left = (yyvsp[-5].vv).string_exp;
			(yyval.vv).vec = (yyvsp[-3].vv).sentry;
			(yyval.vv).index_sentry = (yyvsp[-1].vv).sentry;
		}
#line 2061 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 626 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).type = 4;
			(yyval.vv).depth = ((yyvsp[-2].vv).depth > (yyvsp[0].vv).depth)?(yyvsp[-2].vv).depth:(yyvsp[0].vv).depth;
			(yyval.vv).depth = (yyval.vv).depth+1;
			if((yyval.vv).depth > 1){
				perror("depth is greater than 1");
				return -144;
			}
			perror("optimization1_1 '+' optimization1_1 \n");

			if((yyvsp[-2].vv).type == 1 && (yyvsp[0].vv).type == 1){
				perror("1-1\n");
				//three cases axy,init,dependence error.
				(yyval.vv).vec = (yyvsp[-2].vv).vec;
				(yyval.vv).vec2 = (yyvsp[0].vv).vec;
				if((yyvsp[-2].vv).index_sentry == index_sentry &&  (yyvsp[0].vv).index_sentry == index_sentry){
					if((yyvsp[-2].vv).vec == (yyvsp[-2].vv).vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					(yyval.vv).type = 41;
					(yyval.vv).index_sentry = (yyvsp[-2].vv).index_sentry;
					(yyval.vv).left = (yyvsp[-2].vv).right;
					(yyval.vv).right = (yyvsp[0].vv).right;
					//to perform axy  y = a*x + y
				}
				else if((yyvsp[-2].vv).index_sentry != index_sentry && (yyvsp[0].vv).index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					(yyval.vv).type = 42;
					int len = strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-2].vv).right)+strlen((yyvsp[0].vv).left)+strlen((yyvsp[0].vv).right)+6;
					(yyval.vv).left = malloc(len);
					memset((yyval.vv).left,0,len);
					snprintf((yyval.vv).left,len,"%s*%s+%s*%s",(yyvsp[-2].vv).left,(yyvsp[-2].vv).right,(yyvsp[0].vv).left,(yyvsp[0].vv).right);

				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}
			}
			else if((yyvsp[-2].vv).type == 1 && (yyvsp[0].vv).type == 2){
				perror("1-2\n");
				// Z = X*a + Y ..
				(yyval.vv).vec = (yyvsp[-2].vv).vec;
				(yyval.vv).vec2 = (yyvsp[0].vv).vec;
				if((yyvsp[-2].vv).index_sentry == index_sentry &&  (yyvsp[0].vv).index_sentry == index_sentry){
					if((yyvsp[-2].vv).vec == (yyvsp[-2].vv).vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 43 optimization \n");
					(yyval.vv).index_sentry = (yyvsp[-2].vv).index_sentry;
					(yyval.vv).left = (yyvsp[-2].vv).right;
					(yyval.vv).right = 0;
					(yyval.vv).type = 41;
				}
				else if((yyvsp[-2].vv).index_sentry != index_sentry && (yyvsp[0].vv).index_sentry != index_sentry){
					perror("--------> condition 44 optimization \n");
					(yyval.vv).type = 42;
					int len = strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-2].vv).right)+strlen((yyvsp[0].vv).left)+strlen((yyvsp[0].vv).right)+6;
					(yyval.vv).left = malloc(len);
					memset((yyval.vv).left,0,len);
					snprintf((yyval.vv).left,len,"%s*%s+%s*%s",(yyvsp[-2].vv).left,(yyvsp[-2].vv).right,(yyvsp[0].vv).left);
				}
				else{
					perror("optimization + optimization dependence 2\n");
					return -1;
				}
			}
			else if ((yyvsp[-2].vv).type == 1 && (yyvsp[0].vv).type == 3){
				perror("1-3\n");
				(yyval.vv).vec = (yyvsp[-2].vv).vec;
				(yyval.vv).vec2 = (yyvsp[0].vv).vec;
				if((yyvsp[-2].vv).index_sentry == index_sentry &&  (yyvsp[0].vv).index_sentry == index_sentry){
					if((yyvsp[-2].vv).vec == (yyvsp[-2].vv).vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					(yyval.vv).type = 41;
					(yyval.vv).index_sentry = (yyvsp[-2].vv).index_sentry;
					(yyval.vv).left = (yyvsp[-2].vv).right;
					(yyval.vv).right = (yyvsp[0].vv).left;
				}
				else if((yyvsp[-2].vv).index_sentry != index_sentry && (yyvsp[0].vv).index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					(yyval.vv).type = 42;
					int len = strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-2].vv).right)+strlen((yyvsp[0].vv).left)+strlen((yyvsp[0].vv).right)+6;
					(yyval.vv).left = malloc(len);
					memset((yyval.vv).left,0,len);
					snprintf((yyval.vv).left,len,"%s*%s+%s*%s",(yyvsp[-2].vv).left,(yyvsp[-2].vv).right,(yyvsp[0].vv).left,(yyvsp[0].vv).right);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}
			}
			else if((yyvsp[-2].vv).type == 2 && (yyvsp[0].vv).type == 1){
				perror("2-1\n");
				// Z = X + Y*a ..
				(yyval.vv).vec = (yyvsp[-2].vv).vec;
				(yyval.vv).vec2 = (yyvsp[0].vv).vec;
				if((yyvsp[-2].vv).index_sentry == index_sentry &&  (yyvsp[0].vv).index_sentry == index_sentry){
					if((yyvsp[-2].vv).vec == (yyvsp[-2].vv).vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 43 optimization \n");
					(yyval.vv).index_sentry = (yyvsp[-2].vv).index_sentry;
					(yyval.vv).right = (yyvsp[0].vv).right;
					(yyval.vv).left = 0;
					(yyval.vv).type = 41;
				}
				else if((yyvsp[-2].vv).index_sentry != index_sentry && (yyvsp[0].vv).index_sentry != index_sentry){
					perror("--------> condition 44 optimization \n");
					(yyval.vv).type = 42;
					int len = strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-2].vv).right)+strlen((yyvsp[0].vv).left)+strlen((yyvsp[0].vv).right)+6;
					(yyval.vv).left = malloc(len);
					memset((yyval.vv).left,0,len);
					snprintf((yyval.vv).left,len,"%s+%s*%s",(yyvsp[-2].vv).left,(yyvsp[0].vv).left,(yyvsp[0].vv).right);
				}
				else{
					perror("optimization + optimization dependence 2\n");
					return -1;
				}

			}
			else if((yyvsp[-2].vv).type == 2 && (yyvsp[0].vv).type == 2){
				perror("2-2\n");
				// Z = X + Y ..
				(yyval.vv).vec = (yyvsp[-2].vv).vec;
				(yyval.vv).vec2 = (yyvsp[0].vv).vec;
				if((yyvsp[-2].vv).index_sentry == index_sentry &&  (yyvsp[0].vv).index_sentry == index_sentry){
					if((yyvsp[-2].vv).vec == (yyvsp[-2].vv).vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 43 optimization \n");
					(yyval.vv).index_sentry = (yyvsp[-2].vv).index_sentry;
					(yyval.vv).right = 0;
					(yyval.vv).left = 0;
					(yyval.vv).type = 41;
				}
				else if((yyvsp[-2].vv).index_sentry != index_sentry && (yyvsp[0].vv).index_sentry != index_sentry){
					perror("--------> condition 44 optimization \n");
					(yyval.vv).type = 42;
					int len = strlen((yyvsp[-2].vv).left)+strlen((yyvsp[0].vv).left)+6;
					(yyval.vv).left = malloc(len);
					memset((yyval.vv).left,0,len);
					snprintf((yyval.vv).left,len,"%s+%s",(yyvsp[-2].vv).left,(yyvsp[0].vv).left);
				}
				else{
					perror("optimization + optimization dependence 3\n");
					return -1;
				}

			}
			else if((yyvsp[-2].vv).type == 2 && (yyvsp[0].vv).type == 3){
				// X = Z + a*W
				perror("2-3\n");
				(yyval.vv).vec = (yyvsp[-2].vv).vec;
				(yyval.vv).vec2 = (yyvsp[0].vv).vec;
				if((yyvsp[-2].vv).index_sentry == index_sentry &&  (yyvsp[0].vv).index_sentry == index_sentry){
					if((yyvsp[-2].vv).vec == (yyvsp[-2].vv).vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					(yyval.vv).type = 41;
					(yyval.vv).index_sentry = (yyvsp[-2].vv).index_sentry;
					(yyval.vv).left = 0;
					(yyval.vv).right =  (yyvsp[0].vv).left;
				}
				else if((yyvsp[-2].vv).index_sentry != index_sentry && (yyvsp[0].vv).index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					(yyval.vv).type = 42;
					int len = strlen((yyvsp[-2].vv).left)+strlen((yyvsp[0].vv).left)+strlen((yyvsp[0].vv).right)+6;
					(yyval.vv).left = malloc(len);
					memset((yyval.vv).left,0,len);
					snprintf((yyval.vv).left,len,"%s+%s*%s",(yyvsp[-2].vv).left,(yyvsp[0].vv).right,(yyvsp[0].vv).left);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}

			}
			else if((yyvsp[-2].vv).type == 3 && (yyvsp[0].vv).type == 3){
				perror("3-3\n");
				// Y = a*Z+b*W
				//three cases axy,init,dependence error.
				(yyval.vv).vec = (yyvsp[-2].vv).vec;
				(yyval.vv).vec2 = (yyvsp[0].vv).vec;
				if((yyvsp[-2].vv).index_sentry == index_sentry &&  (yyvsp[0].vv).index_sentry == index_sentry){
					if((yyvsp[-2].vv).vec == (yyvsp[-2].vv).vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					(yyval.vv).type = 41;
					(yyval.vv).index_sentry = (yyvsp[-2].vv).index_sentry;
					(yyval.vv).left = (yyvsp[-2].vv).left;
					(yyval.vv).right = (yyvsp[0].vv).left;
				}
				else if((yyvsp[-2].vv).index_sentry != index_sentry && (yyvsp[0].vv).index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					(yyval.vv).type = 42;
					int len = strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-2].vv).right)+strlen((yyvsp[0].vv).left)+strlen((yyvsp[0].vv).right)+6;
					(yyval.vv).left = malloc(len);
					memset((yyval.vv).left,0,len);
					snprintf((yyval.vv).left,len,"%s*%s+%s*%s",(yyvsp[-2].vv).right,(yyvsp[-2].vv).left,(yyvsp[0].vv).right,(yyvsp[0].vv).left);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}
			}
			else if((yyvsp[-2].vv).type == 3 && (yyvsp[0].vv).type == 1){
				perror("3-1\n");
				// Y = a*Z+W*b
				(yyval.vv).vec = (yyvsp[-2].vv).vec;
				(yyval.vv).vec2 = (yyvsp[0].vv).vec;
				if((yyvsp[-2].vv).index_sentry == index_sentry &&  (yyvsp[0].vv).index_sentry == index_sentry){
					if((yyvsp[-2].vv).vec == (yyvsp[-2].vv).vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					(yyval.vv).type = 41;
					(yyval.vv).index_sentry = (yyvsp[-2].vv).index_sentry;
					(yyval.vv).left = (yyvsp[-2].vv).left;
					(yyval.vv).right = (yyvsp[0].vv).right;
				}
				else if((yyvsp[-2].vv).index_sentry != index_sentry && (yyvsp[0].vv).index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					(yyval.vv).type = 42;
					int len = strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-2].vv).right)+strlen((yyvsp[0].vv).left)+strlen((yyvsp[0].vv).right)+6;
					(yyval.vv).left = malloc(len);
					memset((yyval.vv).left,0,len);
					snprintf((yyval.vv).left,len,"%s*%s+%s*%s",(yyvsp[-2].vv).left,(yyvsp[-2].vv).right,(yyvsp[0].vv).left,(yyvsp[0].vv).right);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}

			}
			else if((yyvsp[-2].vv).type == 3 && (yyvsp[0].vv).type == 2){
				perror("3-2\n");
				// X = a*W + Z
				(yyval.vv).vec = (yyvsp[-2].vv).vec;
				(yyval.vv).vec2 = (yyvsp[0].vv).vec;

				if((yyvsp[-2].vv).index_sentry == index_sentry &&  (yyvsp[0].vv).index_sentry == index_sentry){
					if((yyvsp[-2].vv).vec == (yyvsp[-2].vv).vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					(yyval.vv).type = 41;
					(yyval.vv).index_sentry = (yyvsp[-2].vv).index_sentry;
					(yyval.vv).left = (yyvsp[-2].vv).left;
					(yyval.vv).right =  0;
				}
				else if((yyvsp[-2].vv).index_sentry != index_sentry && (yyvsp[0].vv).index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					(yyval.vv).type = 42;
					int len = strlen((yyvsp[-2].vv).left)+strlen((yyvsp[0].vv).left)+strlen((yyvsp[-2].vv).right)+6;
					(yyval.vv).left = malloc(len);
					memset((yyval.vv).left,0,len);
					snprintf((yyval.vv).left,len,"%s*%s+%s",(yyvsp[-2].vv).left,(yyvsp[-2].vv).right,(yyvsp[0].vv).left);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}

			}
			else{
				perror("not yet implemented wait a while please!\n");
				return -123;
			}






		}
#line 2356 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 916 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			perror("Logical or expr \n");
			(yyval.vv).type = 5;
			(yyval.vv).depth = 0;

			int op = dep_exist(index_sentry,(yyvsp[0].vv).list);
			if(op == 1){
				perror("init logical expr failed\n");
				return -123;
			}

			(yyval.vv).left = (yyvsp[0].vv).string_exp;
		}
#line 2374 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 931 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	(yyval.zz).op_type = 0;
}
#line 2382 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 934 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	 	(yyval.zz).op_type = 1;
	}
#line 2390 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 948 "grammar/c_syn.y" /* yacc.c:1652  */
    {
        		(yyval.vv).list = (yyvsp[0].vv).list;
 	}
#line 2398 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 951 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

	}
#line 2407 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 957 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;

	}
#line 2417 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 962 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-3].vv).list,(yyvsp[-1].vv).list);

		int len1 = strlen((yyvsp[-3].vv).string_exp);
		int len2 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s[%s]",(yyvsp[-3].vv).string_exp,(yyvsp[-1].vv).string_exp);
		free((yyvsp[-3].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 2432 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 972 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[-2].vv).list;

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "%s()",(yyvsp[-2].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);

	}
#line 2446 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 981 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[-1].vv).list;

		int len1 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "%s++",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 2459 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 989 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[-1].vv).list;

		int len1 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "%s--",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 2472 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 999 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).list = (yyvsp[0].vv).list;
			(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;

	}
#line 2482 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 1004 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).list = (yyvsp[0].vv).list;

			int len2 = strlen((yyvsp[0].vv).string_exp);
			(yyval.vv).string_exp = malloc(len2+3);
			snprintf((yyval.vv).string_exp,len2+3, "++%s",(yyvsp[0].vv).string_exp);
			free((yyvsp[0].vv).string_exp);
	}
#line 2495 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 1012 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).list = (yyvsp[0].vv).list;

			int len2 = strlen((yyvsp[0].vv).string_exp);
			(yyval.vv).string_exp = malloc(len2+3);
			snprintf((yyval.vv).string_exp,len2+3, "++%s",(yyvsp[0].vv).string_exp);
			free((yyvsp[0].vv).string_exp);
	}
#line 2508 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 1022 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).list = (yyvsp[0].vv).list;
			(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2517 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 1026 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s*%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2532 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 1036 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list =concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s/%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2547 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 1046 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list  = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+5, "%s %% %s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2561 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 1057 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2570 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 1061 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list  = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);
		//$$.list = $1.list;

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s+%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2586 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 1072 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);
		//$$.list = $1.list;

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s-%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2602 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 1085 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	(yyval.vv).list = (yyvsp[0].vv).list;
	(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2611 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 1089 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list  = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);
		//$$.list = $1.list;

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s<<%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2627 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 1100 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list  = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);
		//$$.list = $1.list;

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s>>%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2643 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 1113 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2652 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 1117 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);
		//$$.list = $1.list;

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s<%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2668 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 1128 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s>%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2683 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 1138 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s<=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2698 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 1148 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s>=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2713 "y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 1160 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2722 "y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 1164 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s==%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2737 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 1174 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s!=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2752 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 1186 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2761 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 1190 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s&%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2776 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 1202 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2785 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 1206 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s^%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2800 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 1218 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2809 "y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 1222 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s|%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2824 "y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 1234 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2833 "y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 1238 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s&&%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2848 "y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 1249 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;

		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2858 "y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 1254 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s||%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2873 "y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 1268 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2882 "y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 1272 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+2);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2898 "y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 1285 "grammar/c_syn.y" /* yacc.c:1652  */
    {

	}
#line 2906 "y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 1294 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = VOID;
	}
#line 2914 "y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 1297 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = INT;

	}
#line 2923 "y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 1301 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = FLOAT;

	}
#line 2932 "y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 1314 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		push(&(yyval.vv).list,(yyvsp[0].vv).sentry);

		char * curr_var_name_tmp = (yyvsp[0].vv).string_val;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+1);
		snprintf((yyval.vv).string_exp,len+1, "%s",curr_var_name_tmp);
	}
#line 2945 "y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 1322 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		push(&(yyval.vv).list,0);
		char * curr_var_name_tmp = (yyvsp[0].vv).string_val;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+1);
		snprintf((yyval.vv).string_exp,len+1, "%s",curr_var_name_tmp);
	}
#line 2957 "y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 1329 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		push(&(yyval.vv).list,0);

		char * curr_var_name_tmp = (yyvsp[0].vv).string_val;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+1);
		snprintf((yyval.vv).string_exp,len+1, "%s",curr_var_name_tmp);
		float a = strtof(curr_var_name_tmp, NULL);
	}
#line 2971 "y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 1338 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[-1].vv).list;

		char * curr_var_name_tmp = (yyvsp[-1].vv).string_exp;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+3);
		snprintf((yyval.vv).string_exp,len+4, "(%s)",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);

	}
#line 2986 "y.tab.c" /* yacc.c:1652  */
    break;


#line 2990 "y.tab.c" /* yacc.c:1652  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1354 "grammar/c_syn.y" /* yacc.c:1918  */


int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
