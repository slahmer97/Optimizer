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

	symbol_p index_sentry;
	symbol_p index_1_entry;
	symbol_p index_2_entry;
	symbol_p arr_id;
	int do_gen = 1;
    //int yydebug = 1;

#line 88 "y.tab.c" /* yacc.c:337  */
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
#line 18 "grammar/c_syn.y" /* yacc.c:352  */

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

#line 220 "y.tab.c" /* yacc.c:352  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

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
       0,    66,    66,    66,    68,    73,    75,    68,   139,   139,
     371,   393,   409,   431,   446,   469,   758,   909,   912,   984,
     987,   993,   998,  1008,  1017,  1025,  1035,  1040,  1048,  1058,
    1062,  1072,  1082,  1093,  1097,  1108,  1121,  1125,  1136,  1149,
    1153,  1164,  1174,  1184,  1196,  1200,  1210,  1222,  1226,  1238,
    1242,  1254,  1258,  1270,  1274,  1285,  1290,  1304,  1308,  1321,
    1443,  1451,  1458,  1467
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
  "optimizer_start", "optimization2", "$@1", "$@2", "$@3", "optimization1",
  "$@4", "optimization2_1", "optimization1_1", "comp_op", "expression",
  "postfix_expression", "unary_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "assignment_expression", "assignment_operator",
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

#define YYPACT_NINF -115

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-115)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    11,    38,  -115,  -115,    37,  -115,  -115,    23,    67,
       4,     4,  -115,  -115,  -115,     4,     4,     4,     6,    72,
      48,    50,    40,    34,    49,    17,    21,    30,    60,    63,
      77,  -115,    78,   -16,  -115,  -115,  -115,    80,     4,  -115,
    -115,  -115,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    86,    87,  -115,     4,  -115,    -4,  -115,  -115,  -115,
    -115,  -115,    48,    48,    50,    50,    40,    40,    40,    40,
      34,    34,    49,    17,    21,    30,    60,    -9,    -9,  -115,
    -115,  -115,  -115,     4,     4,    -5,     8,    88,    89,    68,
      69,    90,    91,    93,    94,   103,    97,    99,    95,   104,
     106,  -115,    98,   107,    72,     4,    44,   105,   102,    32,
    -115,   101,   109,   114,   108,    44,   116,    -9,   110,  -115,
     111,   112,     4,   113,   117,    26,    58,   118,   120,  -115,
    -115,   115,   121,   122,   123,  -115,   119,   128,   124,   125,
     131,   127,    72,   132,   130,   135,   134,   136,   129,   137,
     138,  -115,   142,   140,   133,    58,  -115
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     2,     0,     1,     4,     0,     0,
       0,     0,    61,    62,    60,     0,     0,     0,    26,    29,
      33,    36,    39,    44,    47,    49,    51,    53,    55,    57,
       0,    21,     0,     0,    19,    27,    28,     0,     0,    24,
      25,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,    23,     0,    58,    31,    30,
      32,    29,    34,    35,    37,    38,    40,    41,    42,    43,
      45,    46,    48,    50,    52,    54,    56,     0,     0,    20,
      22,    18,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,    60,     0,
      16,    21,     0,     0,     0,     0,     0,     0,     0,     9,
      15,     0,     0,    13,     0,     0,     0,     0,     0,    12,
      14,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,    10,     0,    11
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,    27,
     -85,   139,  -115,   -10,    42,    43,   -38,    41,   126,    76,
     141,   143,   144,  -115,    -2,  -104,  -114
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,   113,   146,     4,     9,   155,   119,
      93,    33,    18,    71,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    34,    42,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      19,    19,   121,    94,    63,    19,    35,    36,    30,    32,
     116,   121,    76,    77,    78,    79,    97,    12,    13,    14,
      90,    91,   139,    15,     1,    37,    92,    64,    19,    98,
       5,    38,    19,    68,    69,    70,    48,    49,     6,    64,
      67,    10,   132,    16,    17,    39,    40,   138,   153,    48,
      49,   166,     7,   124,    19,    95,    96,    12,    13,   118,
     125,    56,    89,    15,    50,    51,    57,    48,    49,    52,
      53,    12,    13,    14,    43,    44,    58,    15,    46,    47,
      45,    48,    49,    16,    17,    11,    54,    55,    72,    73,
      41,    74,    75,    59,   135,    80,    81,    60,    61,    62,
      65,    87,    88,    99,   100,    19,    19,   101,   102,   107,
     103,   104,   108,   117,   120,    19,   105,   106,   109,   111,
     110,   112,   114,   120,   127,   115,   122,   123,   126,   128,
     129,   131,   137,    83,   133,   141,     0,   134,   145,   125,
     136,   143,   140,   148,   147,   144,   151,   154,   149,   158,
     150,   152,   130,   160,   142,   156,   157,   163,   159,   161,
     165,     0,     0,   162,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,     0,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,    85,     0,    86
};

static const yytype_int16 yycheck[] =
{
      10,    11,   116,    88,    20,    15,    16,    17,    10,    11,
     114,   125,    50,    51,    52,    53,    21,    13,    14,    15,
      24,    30,   136,    19,     6,    19,    35,    43,    38,    21,
      19,    25,    42,    43,    44,    45,    41,    42,     0,    43,
      42,    18,   127,    39,    40,    39,    40,    21,   152,    41,
      42,   165,    15,    21,    64,    93,    94,    13,    14,    15,
      28,    44,    64,    19,    30,    31,    45,    41,    42,    35,
      36,    13,    14,    15,    26,    27,    46,    19,    28,    29,
      32,    41,    42,    39,    40,    18,    37,    38,    46,    47,
      18,    48,    49,    33,   132,    54,    55,    34,    21,    21,
      20,    15,    15,    15,    15,   115,   116,    39,    39,     6,
      20,    20,    15,   115,   116,   125,    23,    23,    19,    15,
      25,    15,    24,   125,    15,    18,    21,    25,    27,    15,
      22,    15,    15,    57,    24,    15,    -1,    25,    15,    28,
      27,    20,    24,    15,    25,    23,    15,    15,    24,    15,
      25,    24,   125,    24,    39,    25,    21,    15,    22,    22,
      27,    -1,    -1,    25,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    59,    -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    48,    49,    53,    19,     0,    15,    50,    54,
      18,    18,    13,    14,    15,    19,    39,    40,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    73,    71,    58,    71,    60,    60,    19,    25,    39,
      40,    18,    72,    26,    27,    32,    28,    29,    41,    42,
      30,    31,    35,    36,    37,    38,    44,    45,    46,    33,
      34,    21,    21,    20,    43,    20,    58,    71,    60,    60,
      60,    60,    61,    61,    62,    62,    63,    63,    63,    63,
      64,    64,    65,    66,    67,    68,    69,    15,    15,    71,
      24,    30,    35,    57,    57,    63,    63,    21,    21,    15,
      15,    39,    39,    20,    20,    23,    23,     6,    15,    19,
      25,    15,    15,    51,    24,    18,    72,    71,    15,    56,
      71,    73,    21,    25,    21,    28,    27,    15,    15,    22,
      56,    15,    57,    24,    25,    63,    27,    15,    21,    73,
      24,    15,    39,    20,    23,    15,    52,    25,    15,    24,
      25,    15,    24,    72,    15,    55,    25,    21,    15,    22,
      24,    22,    25,    15,    24,    27,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    50,    51,    52,    49,    54,    53,
      55,    55,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    59,    59,    59,    59,    59,    60,    60,    60,    61,
      61,    61,    61,    62,    62,    62,    63,    63,    63,    64,
      64,    64,    64,    64,    65,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      73,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     0,     0,    43,     0,    23,
       7,     9,     6,     4,     6,     3,     1,     1,     1,     1,
       3,     1,     4,     3,     2,     2,     1,     2,     2,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     3
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
        case 4:
#line 68 "grammar/c_syn.y" /* yacc.c:1652  */
    {index_1_entry = (yyvsp[0].vv).sentry;}
#line 1429 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 73 "grammar/c_syn.y" /* yacc.c:1652  */
    {index_2_entry = (yyvsp[0].vv).sentry;}
#line 1435 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 75 "grammar/c_syn.y" /* yacc.c:1652  */
    {arr_id = (yyvsp[0].vv).sentry;}
#line 1441 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 79 "grammar/c_syn.y" /* yacc.c:1652  */
    {
					perror("matrix optimization 2\n");

					if ((yyvsp[-35].vv).sentry != index_1_entry || (yyvsp[-31].vv).sentry != index_1_entry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					if ((yyvsp[-20].vv).sentry != index_2_entry || (yyvsp[-16].vv).sentry != index_2_entry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					if ((yyvsp[-9].vv).sentry != index_1_entry || (yyvsp[-6].vv).sentry != index_2_entry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					if (arr_id == index_2_entry || arr_id == index_1_entry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					char *res;
					int len;
					if ((yyvsp[-3].vv).type == 1) {
						printf("MATRIX COPY\n");
						if ((yyvsp[-12].vv).sentry != (yyvsp[-3].vv).vec && (yyvsp[-3].vv).i == index_1_entry && (yyvsp[-3].vv).j == index_2_entry) {

							perror("Matrix copy optimization \n");
							char *x =  (yyvsp[-12].vv).string_val;
							char *y =  (yyvsp[-3].vv).vec->name;

							len = strlen((yyvsp[-33].vv).string_exp) + strlen((yyvsp[-37].vv).string_exp) + strlen(x) + strlen(y) + 27 + strlen((yyvsp[-18].vv).string_exp) + strlen((yyvsp[-22].vv).string_exp);
							res = (char *) malloc(sizeof(char) * len);
							memset(res, 0, len);
							snprintf(res, len, "matrix_copy(%s-%s+1, %s-%s+1, %s, %s);", (yyvsp[-33].vv).string_exp, (yyvsp[-37].vv).string_exp, (yyvsp[-18].vv).string_exp, (yyvsp[-22].vv).string_exp, x, y);
							write_res(res, len);
							free(res);
							return 1333;
						} else {

							perror("Matrix Initialization \n");
							char *x =  (yyvsp[-12].vv).string_val;
							char *y =  (yyvsp[-3].vv).string_exp;

							len = strlen((yyvsp[-33].vv).string_exp) + strlen((yyvsp[-37].vv).string_exp) + strlen(x) + strlen(y) + 27 + strlen((yyvsp[-18].vv).string_exp) + strlen((yyvsp[-22].vv).string_exp);
							res = (char *) malloc(sizeof(char) * len);
							snprintf(res, len, "matrix_init(%s-%s+1, %s-%s+1, %s, %s);", (yyvsp[-33].vv).string_exp, (yyvsp[-37].vv).string_exp, (yyvsp[-18].vv).string_exp, (yyvsp[-22].vv).string_exp, y, x);
							write_res(res, len);
							free(res);
							return 1333;
						}
					} else if ((yyvsp[-3].vv).type == 2) {
						printf("MATRIX SCALE\n");
					}
				}
#line 1503 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 139 "grammar/c_syn.y" /* yacc.c:1652  */
    {index_sentry = (yyvsp[0].vv).sentry;}
#line 1509 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 145 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			if(index_sentry != (yyvsp[-11].vv).sentry || index_sentry != (yyvsp[-15].vv).sentry){
				perror("[-] loop doesn't follow optimization crits \n");
				return -1234;
			}
			char *res,*res1,*res2;
			int len ;
			int len2;
			if((yyvsp[-2].vv).type == 1){
				if((yyvsp[-2].vv).vec == (yyvsp[-7].vv).sentry && (yyvsp[-2].vv).index_sentry != 0 && (yyvsp[-2].vv).index_sentry == index_sentry ){
					//scaling....
					perror("Scaling optimization \n");
					len = strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-2].vv).right)+strlen((yyvsp[-2].vv).left)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).right,(yyvsp[-2].vv).left);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if((yyvsp[-2].vv).index_sentry != 0 && (yyvsp[-2].vv).index_sentry != index_sentry){
					perror("init_vec 1 \n");
					len = strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-7].vv).string_val)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-2].vv).right)+45;
					perror("strlen done\n");
					res = malloc(len);
					memset(res,0,len);
					perror("malloc done\n");
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-7].vv).string_val,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).left,(yyvsp[-2].vv).right);
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
			if((yyvsp[-2].vv).type == 2){
				perror("IDENTIFIER '[' IDENTIFIER ']'\n");
				if((yyvsp[-2].vv).vec != (yyvsp[-7].vv).sentry && (yyvsp[-2].vv).index_sentry != 0 && (yyvsp[-2].vv).index_sentry == index_sentry ){
					//scopy
					perror("Scopy optimization \n");
					len = strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-2].vv).vec->name)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-7].vv).string_val)+strlen((yyvsp[-17].vv).string_exp)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_scopy((const int)%s-%s+1,%s+%s,1,%s+%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).vec->name,(yyvsp[-17].vv).string_exp,(yyvsp[-7].vv).string_val,(yyvsp[-17].vv).string_exp);
					write_res(res,len);
					free(res);
					return 1333;

				}
				else if( (yyvsp[-2].vv).index_sentry != 0 && (yyvsp[-2].vv).index_sentry != index_sentry){
					perror("init_vec2  \n");
					len = strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-7].vv).string_val)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-2].vv).left)+45;
					res = malloc(len);
					memset(res,0,len);
					perror((yyvsp[-2].vv).left);
					snprintf(res,len,"init_fvec(%s-%s+1,%s+%s,(const float)%s);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-7].vv).string_val,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).left);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else{
					perror("init dependece 2 \n");
					return -123;
				}

			}
			else if((yyvsp[-2].vv).type == 3){
				if((yyvsp[-2].vv).vec == (yyvsp[-7].vv).sentry && (yyvsp[-2].vv).index_sentry != 0 && (yyvsp[-2].vv).index_sentry == index_sentry ){
					//scaling....
					perror("Scaling optimization 3\n");
					len = 100;//strlen($6.string_exp)+strlen($10.string_exp)+strlen($21.right)+strlen($21.left)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).left,(yyvsp[-2].vv).vec->name);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if((yyvsp[-2].vv).index_sentry != 0 && (yyvsp[-2].vv).index_sentry != index_sentry){
					perror("init_vec 3 \n");
					len = strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-7].vv).string_val)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-2].vv).right)+45;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-7].vv).string_val,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).right,(yyvsp[-2].vv).left);
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
			else if((yyvsp[-2].vv).type == 5){
				perror("init_vec 5 \n");
				len = strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-7].vv).string_val)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-2].vv).left)+45;
				res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-7].vv).string_val,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).left);
				perror("sprintf done\n");
				write_res(res,len);
				free(res);
				return 1333;
			}
			else if((yyvsp[-2].vv).type == 41){
				perror("axy 6 \n");
				//cblas_saxpy(const int size, const float alpha, const float *X,const int incX, float *Y, const int incY);
				//y = a*x + y
				if((yyvsp[-7].vv).sentry == (yyvsp[-2].vv).vec && (yyvsp[-7].vv).sentry == (yyvsp[-2].vv).vec2){
					//y = y*a + y*b
					// 1 - y = y * a
					// 2 - y = y + y *b
					perror("y = y*a+y*b :/ can't be done \n");
					return -1;
					//TODO delete later
					len = strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-7].vv).string_val)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).left,(yyvsp[-7].vv).string_val);
					len2 = strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-7].vv).string_val)*2+70;
					res2 = malloc(len2);
					snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).right,(yyvsp[-7].vv).string_val,(yyvsp[-7].vv).string_val);
					res1 = malloc(len+len2+3);
					snprintf(res1,len+len2+3,"%s%s",res,res2);
					printf("%s\n",res1);
					write_res(res1,len+len2+3);
					free(res);
					free(res1);
					free(res2);

				}
				else if((yyvsp[-7].vv).sentry == (yyvsp[-2].vv).vec && (yyvsp[-7].vv).sentry != (yyvsp[-2].vv).vec2){
					if((yyvsp[-2].vv).left != 0 && (yyvsp[-2].vv).right != 0){
						perror("Z = Z*a+Y*b =D \n");
						len = strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-7].vv).string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).left,(yyvsp[-7].vv).string_val);
						len2 = strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-2].vv).right)+strlen((yyvsp[-7].vv).string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).right,(yyvsp[-2].vv).vec2->name,(yyvsp[-7].vv).string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						free(res);
						free(res1);
						free(res2);
					}
					else if((yyvsp[-2].vv).left == 0 && (yyvsp[-2].vv).right != 0){
						perror("Z = Z +Y*b =D \n");
						len2 = strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-2].vv).right)+strlen((yyvsp[-7].vv).string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).right,(yyvsp[-2].vv).vec2->name,(yyvsp[-7].vv).string_val);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
					}
					else if((yyvsp[-2].vv).left != 0 && (yyvsp[-2].vv).right == 0){
						perror("Z = Z*a +Y =D \n");
						len = strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-2].vv).left)+strlen((yyvsp[-7].vv).string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).left,(yyvsp[-7].vv).string_val);
						len2 = strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-7].vv).string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).vec2->name,(yyvsp[-7].vv).string_val);
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
						len2 = strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-7].vv).string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).vec2->name,(yyvsp[-7].vv).string_val);
						printf("%s\n",res2);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
						return 1333;
					}



					return 1333;
				}
				else{
					//y = x*a + y*b
					perror("y = x*a+y*b =D \n");
					return -1;
				}
				return 1333;

			}
			else if((yyvsp[-2].vv).type == 42){
				perror("init_vec 6 \n");
				if((yyvsp[-7].vv).sentry == (yyvsp[-2].vv).vec || (yyvsp[-7].vv).sentry == (yyvsp[-2].vv).vec2){
					perror("optimization 42 can't be done :/ \n");
					return -1;
				}
				len = strlen((yyvsp[-13].vv).string_exp)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-7].vv).string_val)+strlen((yyvsp[-17].vv).string_exp)+strlen((yyvsp[-2].vv).left)+55;
				res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"init_fvec((const int)%s-%s+1,(float*)(%s+%s),(const float)%s);",(yyvsp[-13].vv).string_exp,(yyvsp[-17].vv).string_exp,(yyvsp[-7].vv).string_val,(yyvsp[-17].vv).string_exp,(yyvsp[-2].vv).left);
				perror("sprintf done\n");
				write_res(res,len);
				free(res);
				return 1333;
			}

			index_sentry = 0;
		}
#line 1738 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 371 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type  = 1; 
		
		(yyval.vv).depth = 0;
		(yyval.vv).index_dep = 0;
		
		if ((yyvsp[-4].vv).sentry == index_1_entry && (yyvsp[-1].vv).sentry == index_2_entry) {
			(yyval.vv).i = (yyvsp[-4].vv).sentry;
			(yyval.vv).j = (yyvsp[-1].vv).sentry;
		} else if ((yyvsp[-4].vv).sentry != index_1_entry && (yyvsp[-1].vv).sentry != index_2_entry) {
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
#line 1765 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 393 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).type = 2;
		
		if ((yyvsp[-6].vv).sentry == index_1_entry && (yyvsp[-3].vv).sentry == index_2_entry) {
			(yyval.vv).i = (yyvsp[-6].vv).sentry;
			(yyval.vv).j = (yyvsp[-3].vv).sentry;
		} else {
			perror("[-] unable to optimize \n");
			return -1;
		}
		(yyval.vv).vec = (yyvsp[-8].vv).sentry;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 1783 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 409 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 1810 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 431 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 1830 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 446 "grammar/c_syn.y" /* yacc.c:1652  */
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
			perror("passed sprintf\n");
			(yyval.vv).left = (yyvsp[-5].vv).string_val;
			(yyval.vv).vec = (yyvsp[-3].vv).sentry;
			(yyval.vv).index_sentry = (yyvsp[-1].vv).sentry;
		}
#line 1858 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 469 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 2152 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 758 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 2170 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 909 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	(yyval.zz).op_type = 0;
}
#line 2178 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 912 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	 	(yyval.zz).op_type = 1;
	}
#line 2186 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 984 "grammar/c_syn.y" /* yacc.c:1652  */
    {
        		(yyval.vv).list = (yyvsp[0].vv).list;
 	}
#line 2194 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 987 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

	}
#line 2203 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 993 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;

	}
#line 2213 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 998 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-3].vv).list,(yyvsp[-1].vv).list);

		int len1 = strlen((yyvsp[-3].vv).string_exp);
		int len2 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s[%s]",(yyvsp[-3].vv).string_exp,(yyvsp[-1].vv).string_exp);
		free((yyvsp[-3].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 2228 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 1008 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[-2].vv).list;

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "%s()",(yyvsp[-2].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);

	}
#line 2242 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 1017 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[-1].vv).list;

		int len1 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "%s++",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 2255 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 1025 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[-1].vv).list;

		int len1 = strlen((yyvsp[-1].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+3);
		snprintf((yyval.vv).string_exp,len1+3, "%s--",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);
	}
#line 2268 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 1035 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).list = (yyvsp[0].vv).list;
			(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;

	}
#line 2278 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 1040 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).list = (yyvsp[0].vv).list;

			int len2 = strlen((yyvsp[0].vv).string_exp);
			(yyval.vv).string_exp = malloc(len2+3);
			snprintf((yyval.vv).string_exp,len2+3, "++%s",(yyvsp[0].vv).string_exp);
			free((yyvsp[0].vv).string_exp);
	}
#line 2291 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 1048 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).list = (yyvsp[0].vv).list;

			int len2 = strlen((yyvsp[0].vv).string_exp);
			(yyval.vv).string_exp = malloc(len2+3);
			snprintf((yyval.vv).string_exp,len2+3, "++%s",(yyvsp[0].vv).string_exp);
			free((yyvsp[0].vv).string_exp);
	}
#line 2304 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 1058 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).list = (yyvsp[0].vv).list;
			(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2313 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 1062 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s*%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2328 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 1072 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list =concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s/%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2343 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 1082 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list  = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);
		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+5, "%s %% %s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2357 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 1093 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2366 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 1097 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 2382 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 1108 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 2398 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 1121 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	(yyval.vv).list = (yyvsp[0].vv).list;
	(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2407 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 1125 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 2423 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 1136 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 2439 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 1149 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2448 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 1153 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 2464 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 1164 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s>%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2479 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 1174 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s<=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2494 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 1184 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s>=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2509 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 1196 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2518 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 1200 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s==%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2533 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 1210 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s!=%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2548 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 1222 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2557 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 1226 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s&%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2572 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 1238 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2581 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 1242 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s^%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2596 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 1254 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2605 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 1258 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+2, "%s|%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2620 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 1270 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2629 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 1274 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s&&%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2644 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 1285 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;

		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2654 "y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 1290 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = concatenate((yyvsp[-2].vv).list,(yyvsp[0].vv).list);

		int len1 = strlen((yyvsp[-2].vv).string_exp);
		int len2 = strlen((yyvsp[0].vv).string_exp);
		(yyval.vv).string_exp = malloc(len1+len2+3);
		snprintf((yyval.vv).string_exp,len1+len2+3, "%s||%s",(yyvsp[-2].vv).string_exp,(yyvsp[0].vv).string_exp);
		free((yyvsp[-2].vv).string_exp);
		free((yyvsp[0].vv).string_exp);
	}
#line 2669 "y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 1304 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[0].vv).list;
		(yyval.vv).string_exp = (yyvsp[0].vv).string_exp;
	}
#line 2678 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 1308 "grammar/c_syn.y" /* yacc.c:1652  */
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
#line 2694 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 1321 "grammar/c_syn.y" /* yacc.c:1652  */
    {

	}
#line 2702 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 1443 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		push(&(yyval.vv).list,(yyvsp[0].vv).sentry);

		char * curr_var_name_tmp = (yyvsp[0].vv).string_val;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+1);
		snprintf((yyval.vv).string_exp,len+1, "%s",curr_var_name_tmp);
	}
#line 2715 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 1451 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		push(&(yyval.vv).list,0);
		char * curr_var_name_tmp = (yyvsp[0].vv).string_val;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+1);
		snprintf((yyval.vv).string_exp,len+1, "%s",curr_var_name_tmp);
	}
#line 2727 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 1458 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		push(&(yyval.vv).list,0);

		char * curr_var_name_tmp = (yyvsp[0].vv).string_val;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+1);
		snprintf((yyval.vv).string_exp,len+1, "%s",curr_var_name_tmp);
		float a = strtof(curr_var_name_tmp, NULL);
	}
#line 2741 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 1467 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).list = (yyvsp[-1].vv).list;

		char * curr_var_name_tmp = (yyvsp[-1].vv).string_exp;
		int len = strlen(curr_var_name_tmp);
		(yyval.vv).string_exp = malloc(len+3);
		snprintf((yyval.vv).string_exp,len+4, "(%s)",(yyvsp[-1].vv).string_exp);
		free((yyvsp[-1].vv).string_exp);

	}
#line 2756 "y.tab.c" /* yacc.c:1652  */
    break;


#line 2760 "y.tab.c" /* yacc.c:1652  */
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
#line 1483 "grammar/c_syn.y" /* yacc.c:1918  */


int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
