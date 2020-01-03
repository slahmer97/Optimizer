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

	#include <stdlib.h>
	#include <stdio.h>
	#include "headers/defs.h"
	#include "headers/symbol.h"
	#include "headers/linkedlist.h"
	#include "headers/ast.h"
	#include "headers/y.tab.h"

	int for_depth_counter_var = 0;
	int direct_declarator_var = 0;
	int current_type_var = -1;
	int yydebug = 1;

#line 85 "y.tab.c" /* yacc.c:337  */
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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FOR = 258,
    WHILE = 259,
    DO = 260,
    IF = 261,
    ELSE = 262,
    RETURN = 263,
    INT = 264,
    VOID = 265,
    FLOAT = 266,
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
#define FOR 258
#define WHILE 259
#define DO 260
#define IF 261
#define ELSE 262
#define RETURN 263
#define INT 264
#define VOID 265
#define FLOAT 266
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
#line 15 "grammar/c_syn.y" /* yacc.c:352  */

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
		node id;
		struct ast* _ast;
		char * string_exp;
	}vv;


#line 201 "y.tab.c" /* yacc.c:352  */
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
#define YYLAST   193

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

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
       0,    48,    48,    49,    59,    61,    65,    69,    79,    83,
      87,    91,    95,    99,   105,   107,   116,   119,   123,   123,
     125,   137,   142,   146,   150,   154,   158,   161,   165,   171,
     175,   179,   185,   189,   193,   197,   203,   207,   211,   217,
     221,   225,   231,   235,   239,   243,   247,   253,   257,   261,
     267,   271,   277,   281,   287,   291,   297,   301,   319,   323,
     329,   335,   338,   346,   355,   363,   367,   370,   375,   379,
     386,   390,   399,   402,   410,   417,   421,   426,   435,   438,
     445,   449,   455,   459,   465,   471,   475,   479,   487,   491
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FOR", "WHILE", "DO", "IF", "ELSE",
  "RETURN", "INT", "VOID", "FLOAT", "CONST_Q", "CONST_INT", "CONST_FLOAT",
  "IDENTIFIER", "STRING", "CONST", "'='", "'('", "')'", "';'", "'}'",
  "'{'", "']'", "'['", "'/'", "'*'", "'+'", "'-'", "'<'", "'>'", "'%'",
  "AND_OP", "OR_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "INC", "DEC",
  "LEFT_OP", "RIGHT_OP", "','", "'&'", "'^'", "'|'", "$accept",
  "optimizer_start", "compound_statement", "statement_list", "statement",
  "expression_statement", "selection_statement", "iteration_statement",
  "$@1", "iter_counter", "expression", "postfix_expression",
  "unary_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "assignment_expression", "assignment_operator",
  "declaration_list", "declaration", "declaration_specifiers",
  "type_specifier", "init_declarator_list", "init_declarator",
  "declarator", "direct_declarator", "pointer", "initializer",
  "initializer_list", "primary_expression", "identifier_list", YY_NULLPTR
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

#define YYPACT_NINF -63

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define YYTABLE_NINF -22

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,   -63,    30,   103,    88,    50,   -63,   -63,    89,    60,
      24,   -63,   -63,   -63,    60,    60,    60,   -16,    64,    80,
      70,   -10,   111,   130,   131,    92,    96,    98,   115,   -63,
     -63,   -63,    24,     7,   -11,   -63,   -63,   133,    60,   134,
      60,   -63,   -63,   -63,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,   -63,   -63,     1,   -63,   -63,   -63,    62,
     -63,   -63,   -63,   -63,   -63,    70,    70,   -10,   -10,   111,
     111,   111,   111,   130,   130,   131,    92,    96,    98,    -7,
     143,   -63,   -63,   -63,   -63,   -63,   124,   -63,   -63,   -63,
     -63,    38,   -63,     2,   -63,   -63,   133,    60,   -63,   -63,
     -63,   136,   -63,   -63,   140,    12,   -63,   154,   110,   164,
     -63,    11,   -63,   -63,   -63,     2,    53,     6,   167,   110,
     133,   -63,    53,   -63,   -63,   -63,   -63,    15,   157,   175,
     -63,     3,   -63,   168,   -63,   133,   -63,    53,   -63,   -63,
     -63
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      21,    18,     0,     2,     0,     0,     1,     3,     0,     0,
       0,    85,    86,    84,     0,     0,     0,     0,    29,    32,
      36,    39,    42,    47,    50,    52,    54,    56,    58,    22,
      24,    14,     0,     0,     0,    30,    31,     0,     0,     0,
       0,    27,    28,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    87,    21,    19,    23,    26,     0,
      59,    34,    33,    35,    32,    37,    38,    40,    41,    43,
      44,    45,    46,    48,    49,    51,    53,    55,    57,     0,
       0,    66,    65,    67,     4,    10,    21,     8,    11,    12,
      13,    21,    61,     0,    64,    25,     0,     0,     5,     9,
       6,    21,    62,    74,    78,     0,    68,    70,    73,     0,
      20,     0,     7,    79,    63,     0,     0,     0,     0,    72,
       0,    69,     0,    80,    71,    88,    76,     0,     0,    16,
      82,     0,    77,     0,    75,     0,    81,     0,    89,    17,
      83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   181,   -35,    84,   -31,    52,   -63,    87,   -63,   -63,
      -6,   -63,    66,   122,   123,    79,   121,   128,   129,   127,
     132,   -63,   -38,   -63,   -63,    90,   -63,   -63,   -63,    65,
     -63,    73,    75,   -62,   -63,   -63,   -63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    95,    96,    97,    98,    99,   100,     5,     4,
      33,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    44,   101,   102,   103,   104,   115,   116,
     117,   118,   119,   134,   141,    30,   137
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,     1,    66,    17,    37,     1,    70,    90,    34,    64,
      91,    92,    93,   106,    11,    12,    13,   113,    48,    49,
      14,   135,    31,    94,    65,   146,   136,    38,    63,   114,
       6,   130,    38,   124,    69,   142,    38,    11,    12,    13,
      15,    16,     1,    14,    90,    31,   147,    91,    92,    93,
      38,    11,    12,    13,    38,   125,    89,    14,   143,    31,
     110,    65,    32,    15,    16,   109,    11,    12,    13,     9,
     140,   120,    14,    11,    12,    13,   132,    15,    16,    14,
     109,    35,    36,    39,    62,   150,   105,     3,   133,    40,
       3,     8,    15,    16,   133,   139,    45,    46,    43,    15,
      16,   121,    47,    41,    42,    38,   -21,     1,    10,   133,
     149,    71,    72,    73,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,     1,   127,
      90,    79,    80,    81,    82,   128,    58,    11,    12,    13,
       1,    59,    90,    14,    60,    31,   108,    65,    61,    11,
      12,    13,    50,    51,    68,    14,    65,    31,   122,    65,
      52,    53,   107,    15,    16,    54,    55,   114,    56,    57,
      75,    76,   126,    77,    78,    15,    16,    83,    84,   113,
     138,   144,   145,   148,     7,   111,    85,    87,    86,   123,
     131,   112,   129,    88
};

static const yytype_uint8 yycheck[] =
{
      38,     4,    37,     9,    20,     4,    44,     6,    14,    20,
       9,    10,    11,    20,    13,    14,    15,    15,    28,    29,
      19,    15,    21,    22,    23,    22,    20,    43,    21,    27,
       0,    20,    43,    21,    40,    20,    43,    13,    14,    15,
      39,    40,     4,    19,     6,    21,    43,     9,    10,    11,
      43,    13,    14,    15,    43,    43,    62,    19,    43,    21,
      22,    23,    10,    39,    40,    96,    13,    14,    15,    19,
     132,   106,    19,    13,    14,    15,    23,    39,    40,    19,
     111,    15,    16,    19,    32,   147,    24,     0,   126,    25,
       3,     3,    39,    40,   132,   130,    26,    27,    18,    39,
      40,   107,    32,    39,    40,    43,     3,     4,    19,   147,
     145,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     4,    19,
       6,    52,    53,    54,    55,    25,    44,    13,    14,    15,
       4,    45,     6,    19,    46,    21,    22,    23,    33,    13,
      14,    15,    41,    42,    20,    19,    23,    21,    22,    23,
      30,    31,    19,    39,    40,    35,    36,    27,    37,    38,
      48,    49,    18,    50,    51,    39,    40,    56,    57,    15,
      13,    24,     7,    15,     3,   101,    58,    60,    59,   114,
     125,   101,   119,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    48,    54,    56,    55,     0,    48,     3,    19,
      19,    13,    14,    15,    19,    39,    40,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      82,    21,    52,    57,    57,    59,    59,    20,    43,    19,
      25,    39,    40,    18,    70,    26,    27,    32,    28,    29,
      41,    42,    30,    31,    35,    36,    37,    38,    44,    45,
      46,    33,    52,    21,    20,    23,    49,    69,    20,    57,
      69,    59,    59,    59,    59,    60,    60,    61,    61,    62,
      62,    62,    62,    63,    63,    64,    65,    66,    67,    57,
       6,     9,    10,    11,    22,    49,    50,    51,    52,    53,
      54,    71,    72,    73,    74,    24,    20,    19,    22,    51,
      22,    50,    72,    15,    27,    75,    76,    77,    78,    79,
      49,    57,    22,    79,    21,    43,    18,    19,    25,    78,
      20,    76,    23,    69,    80,    15,    20,    83,    13,    49,
      80,    81,    20,    43,    24,     7,    22,    43,    15,    49,
      80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    49,    50,    50,
      51,    51,    51,    51,    52,    52,    53,    53,    55,    54,
      54,    56,    57,    57,    58,    58,    58,    58,    58,    59,
      59,    59,    60,    60,    60,    60,    61,    61,    61,    62,
      62,    62,    63,    63,    63,    63,    63,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      70,    71,    71,    72,    73,    74,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    82,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     3,     4,     1,     2,
       1,     1,     1,     1,     1,     2,     5,     7,     0,     6,
       8,     0,     1,     3,     1,     4,     3,     2,     2,     1,
       2,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     3,
       1,     3,     2,     1,     1,     4,     3,     4,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     3
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
#line 59 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	}
#line 1417 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 61 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[-1].vv).id;
		(yyval.vv)._ast = (yyvsp[-1].vv)._ast;
	}
#line 1426 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 65 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[-1].vv).id;
		(yyval.vv)._ast = (yyvsp[-1].vv)._ast;
	}
#line 1435 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 69 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[-1].vv).id);
	}
#line 1443 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 79 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1452 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 83 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-1].vv).id, (yyvsp[0].vv).id);
	}
#line 1460 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 87 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	  }
#line 1469 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 91 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1478 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 95 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1487 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 99 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1496 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 105 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	}
#line 1503 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 107 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[-1].vv).id;
		(yyval.vv)._ast = (yyvsp[-1].vv)._ast;
	}
#line 1512 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 116 "grammar/c_syn.y" /* yacc.c:1652  */
    {

	}
#line 1520 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 119 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	}
#line 1527 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 123 "grammar/c_syn.y" /* yacc.c:1652  */
    {printf("START-WHILE\n ");}
#line 1533 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 123 "grammar/c_syn.y" /* yacc.c:1652  */
    {printf("END-WHILE\n ");}
#line 1539 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 125 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		int n = 0;
		while((yyval.vv).id->next != NULL) {
			(yyval.vv).id = (yyval.vv).id->next;
			n++;
		}
		printf("test: %d\n", n);
		(yyval.vv)._ast = ast_for_operation((yyvsp[-4].vv)._ast, (yyvsp[-3].vv)._ast, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
		ast_print((yyval.vv)._ast, 0);
		optimize_for_lvl1((yyval.vv)._ast);
	}
#line 1556 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 137 "grammar/c_syn.y" /* yacc.c:1652  */
    {}
#line 1562 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 142 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
 	}
#line 1571 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 146 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	}
#line 1579 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 150 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1588 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 154 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-3].vv).id, (yyvsp[-1].vv).id);
		(yyval.vv)._ast = ast_new_operation(AST_ARR_ACCESS, (yyvsp[-3].vv)._ast, (yyvsp[-1].vv)._ast);
	}
#line 1597 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 158 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[-2].vv).id;
	}
#line 1605 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 161 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[-1].vv).id;
		(yyval.vv)._ast = ast_new_operation(AST_INC,(yyvsp[-1].vv)._ast,0);
	}
#line 1614 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 165 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[-1].vv).id;
		(yyval.vv)._ast = ast_new_operation(AST_INC,(yyvsp[-1].vv)._ast,0);
	}
#line 1623 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 171 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1632 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 175 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = ast_new_operation(AST_INC, NULL, (yyvsp[0].vv)._ast);
	}
#line 1641 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 179 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = ast_new_operation(AST_INC, NULL, (yyvsp[0].vv)._ast);
	}
#line 1650 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 185 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1659 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 189 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_MUL, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1668 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 193 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_DIV, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1677 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 197 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_MOD, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1686 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 203 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1695 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 207 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_ADD, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1704 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 211 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_SUB, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1713 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 217 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1722 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 221 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_LEFT_OP, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1731 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 225 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_RIGHT_OP, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1740 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 231 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1749 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 235 "grammar/c_syn.y" /* yacc.c:1652  */
    {
    	(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
		(yyval.vv)._ast = ast_new_operation(AST_LOWER, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1758 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 239 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      	(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
		(yyval.vv)._ast = ast_new_operation(AST_GREATER, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1767 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 243 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      	(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
		(yyval.vv)._ast = ast_new_operation(AST_LOWER_EQUAL, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1776 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 247 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      	(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
		(yyval.vv)._ast = ast_new_operation(AST_GREATER_EQUAL, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1785 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 253 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1794 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 257 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_EQUAL, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1803 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 261 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_NOT_EQUAL, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1812 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 267 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1821 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 271 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_AND, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1830 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 277 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1839 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 281 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_EOR, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1848 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 287 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1857 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 291 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_IOR, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1866 "y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 297 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1875 "y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 301 "grammar/c_syn.y" /* yacc.c:1652  */
    {
      (yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	  (yyval.vv)._ast = ast_new_operation(AST_AND_OP, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1884 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 319 "grammar/c_syn.y" /* yacc.c:1652  */
    {
   	 (yyval.vv).id = (yyvsp[0].vv).id;
	 (yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1893 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 323 "grammar/c_syn.y" /* yacc.c:1652  */
    {
    	(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	    (yyval.vv)._ast = ast_new_operation(AST_ASSIGN, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 1902 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 329 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	}
#line 1909 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 335 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
	}
#line 1917 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 338 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-1].vv).id, (yyvsp[0].vv).id);
	}
#line 1925 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 346 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[-1].vv).id);
		(yyval.vv)._ast = ast_new_operation(AST_DEC_LIST,0,(yyvsp[-1].vv)._ast);
	}
#line 1934 "y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 355 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
	}
#line 1942 "y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 363 "grammar/c_syn.y" /* yacc.c:1652  */
    {


	}
#line 1951 "y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 367 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		
	}
#line 1959 "y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 370 "grammar/c_syn.y" /* yacc.c:1652  */
    {
	}
#line 1966 "y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 375 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1975 "y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 379 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	}
#line 1983 "y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 386 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 1992 "y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 390 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
		(yyval.vv)._ast = ast_new_operation(AST_ASSIGN, (yyvsp[-2].vv)._ast, (yyvsp[0].vv)._ast);
	}
#line 2001 "y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 399 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-1].vv).id, (yyvsp[0].vv).id);
	}
#line 2009 "y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 402 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 2018 "y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 410 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		symbol_p tmp = 0;
		int ret = lookup_symbol_entry((yyvsp[0].vv).string_val, &tmp);
		(yyval.vv).id = addNode((yyvsp[0].vv).id, tmp);
		(yyval.vv)._ast = ast_new_id((yyvsp[0].vv).string_val);
	}
#line 2029 "y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 417 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).id = fusion((yyvsp[-3].vv).id, (yyvsp[-1].vv).id);
			(yyval.vv)._ast = ast_new_operation(AST_ARR_ACCESS, (yyvsp[-3].vv)._ast, (yyvsp[-1].vv)._ast);
        }
#line 2038 "y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 421 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).id = (yyvsp[-2].vv).id;
			(yyval.vv)._ast = (yyvsp[-2].vv)._ast;
		}
#line 2047 "y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 426 "grammar/c_syn.y" /* yacc.c:1652  */
    {
			(yyval.vv).id = fusion((yyvsp[-3].vv).id, (yyvsp[-1].vv).id);
			(yyval.vv)._ast = (yyvsp[-3].vv)._ast;
		}
#line 2056 "y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 435 "grammar/c_syn.y" /* yacc.c:1652  */
    {

	}
#line 2064 "y.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 438 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
	}
#line 2072 "y.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 445 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 2081 "y.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 449 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[-1].vv).id;
		(yyval.vv)._ast = (yyvsp[-1].vv)._ast;
	}
#line 2090 "y.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 455 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = (yyvsp[0].vv)._ast;
	}
#line 2099 "y.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 459 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
	}
#line 2107 "y.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 465 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		symbol_p tmp = 0;
		int ret = lookup_symbol_entry((yyvsp[0].vv).string_val, &tmp);
		(yyval.vv).id = addNode((yyvsp[0].vv).id, tmp);
		(yyval.vv)._ast = ast_new_id((yyvsp[0].vv).string_val);
	}
#line 2118 "y.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 471 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (node) 0;
		(yyval.vv)._ast = ast_new_number((yyvsp[0].vv).string_val);
	}
#line 2127 "y.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 475 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (node) 0;
		(yyval.vv)._ast = ast_new_float((yyvsp[0].vv).string_val);
	}
#line 2136 "y.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 479 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[-1].vv).id;
		(yyval.vv)._ast = (yyvsp[-1].vv)._ast;
	}
#line 2145 "y.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 487 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = (yyvsp[0].vv).id;
		(yyval.vv)._ast = ast_new_id((yyvsp[0].vv).string_val);
	}
#line 2154 "y.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 491 "grammar/c_syn.y" /* yacc.c:1652  */
    {
		(yyval.vv).id = fusion((yyvsp[-2].vv).id, (yyvsp[0].vv).id);
		 (yyval.vv)._ast = ast_new_operation(AST_LIST, (yyvsp[-2].vv)._ast, ast_new_id((yyvsp[0].vv).string_val));
	}
#line 2163 "y.tab.c" /* yacc.c:1652  */
    break;


#line 2167 "y.tab.c" /* yacc.c:1652  */
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
#line 496 "grammar/c_syn.y" /* yacc.c:1918  */

node createNode(void){
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    return temp;
}

node fusion(node x, node y) {
	node head, tmp = x;
	if (tmp == NULL)
		head = y;
	else {
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = y;
		head = x;
	}
	return head;
}

node addNode(node head, symbol_p value){
    node temp,p;
    temp = createNode();
    temp->entry = (symbol_p) malloc(sizeof(symbol_p));
    temp->entry = value;
    if(head == NULL){
        head = temp;
    }
    else{
        p  = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}

int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n", str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
