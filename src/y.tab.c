/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20190617

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "grammar/c_syn.y"
	#include<stdio.h>
	#include "headers/defs.h"
	#include "headers/y.tab.h"

	int for_depth_counter_var = 0;
	int direct_declarator_var = 0;
	int current_type_var = -1;
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 10 "grammar/c_syn.y"
typedef union{
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


		char * string_exp;
	}vv;

} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 55 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define FOR 257
#define WHILE 258
#define DO 259
#define IF 260
#define ELSE 261
#define RETURN 262
#define INT 263
#define VOID 264
#define FLOAT 265
#define CONST_Q 266
#define CONST_INT 267
#define CONST_FLOAT 268
#define IDENTIFIER 269
#define STRING 270
#define CONST 271
#define AND_OP 272
#define OR_OP 273
#define LE_OP 274
#define GE_OP 275
#define EQ_OP 276
#define NE_OP 277
#define INC 278
#define DEC 279
#define LEFT_OP 280
#define RIGHT_OP 281
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,   35,    5,    5,    5,    5,    6,    6,   18,
   18,   18,   18,   28,   28,    9,    9,   36,   20,   20,
   37,    4,    4,   19,   26,   26,   26,   21,   21,   21,
   21,   22,   22,   22,   23,   23,   23,   24,   24,   24,
   24,   24,   25,   25,   25,   29,   29,   30,   30,   31,
   31,   33,   33,   32,   32,   27,   27,   34,    7,    7,
   14,    2,    1,    1,    1,   15,   15,   13,   13,   12,
   12,   11,   11,   10,   10,   16,   16,   17,   17,    3,
    3,    3,    3,    8,    8,
};
static const YYINT yylen[] = {                            2,
    1,    2,    1,    2,    3,    3,    4,    1,    2,    1,
    1,    1,    1,    1,    2,    5,    7,    0,    6,    8,
    0,    1,    3,    1,    1,    2,    2,    1,    3,    3,
    3,    1,    3,    3,    1,    3,    3,    1,    3,    3,
    3,    3,    1,    3,    3,    1,    3,    1,    3,    1,
    3,    1,    3,    1,    3,    1,    3,    1,    1,    2,
    3,    1,    1,    1,    1,    1,    3,    1,    3,    2,
    1,    1,    4,    1,    2,    1,    3,    1,    3,    1,
    1,    1,    3,    1,    3,
};
static const YYINT yydefred[] = {                         0,
   18,    0,    0,    0,    0,    2,    0,    0,    0,   81,
   82,   80,    0,    0,    0,   24,    0,   25,    0,    0,
    0,    0,    0,    0,   22,    0,    0,    0,    0,   14,
    0,    0,    0,   26,   27,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   58,    0,    0,    0,    0,    0,   15,    0,   83,    0,
   19,   23,   30,   29,   31,    0,   28,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   57,    0,    0,    0,
    0,    0,    0,   64,   63,   65,    4,   62,    0,   10,
    0,    0,   12,   59,    8,   13,   11,    0,    0,   72,
    0,    0,    0,    0,   66,    0,    5,    9,    6,    0,
   60,   20,    0,   75,    0,    0,    0,   61,    0,    7,
    0,    0,    0,   69,   76,   67,    0,   73,   78,    0,
    0,   77,    0,   17,   79,
};
static const YYINT yydgoto[] = {                          2,
   88,   89,   16,   31,   90,   91,   92,    0,   93,  102,
  103,  104,  105,   94,  106,  124,  130,   95,   18,   96,
   19,   20,   21,   22,   23,   24,   25,   97,   26,   27,
   28,    0,   29,   52,    0,    5,    4,
};
static const YYINT yysindex[] = {                      -247,
    0,    0, -247, -226,   10,    0,   24,  189,  141,    0,
    0,    0,  189,  189,  189,    0,   33,    0,   14,  133,
 -145,   -7, -111,   12,    0,   16,  -11,  -37, -181,    0,
  -27,  141,  113,    0,    0,  -28,  189,  189,  189,  189,
  189,  189,  189,  189,  189,  189,  189,  189,  189,  189,
    0,  189,  189,  189,  189,  189,    0,  189,    0,   68,
    0,    0,    0,    0,    0,   14,    0,   14,  133,  133,
 -145, -145, -145, -145,   -7,   -7,    0, -111,   16,  -11,
  -37,  123,   78,    0,    0,    0,    0,    0,  -42,    0,
  172,   85,    0,    0,    0,    0,    0,  -28,  189,    0,
   69, -129,   65,  111,    0,   61,    0,    0,    0,  258,
    0,    0,  129,    0,   65, -143,  176,    0,  -42,    0,
  -28,   86,  176,    0,    0,    0,  -86,    0,    0,  -39,
  -28,    0,  176,    0,    0,
};
static const YYINT yyrindex[] = {                       -71,
    0,    0,    1,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -25,    8,
   93,  263,  390,  -35,    0,  419,  446,   21,   22,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -71,
    0,    0,    0,    0,    0,  -15,    0,   -2,   34,   44,
  101,  139,  300,  341,  348,  358,    0,  436,  444,  458,
   57,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -71,  -71,    0,    0,    0,    0,    0,    0,    0,    0,
  -79,    0,   53,   71,    0,    0,    0,    0,    0,  -71,
    0,    0,    0,    0,   82,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  169,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                       191,
    0,    0,    0,   63,  -14,  100,    0,    0,    0,  102,
  104,    0,   83,  112,    0, -119,    0,  -70,    0,  171,
  143,  145,  103,  147,  152,  509,   -4,    6,  153,  156,
  157,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 730
static const YYINT yytable[] = {                        101,
    1,   28,   28,  129,  133,   28,   28,   28,   28,   28,
    1,   28,   32,  135,   32,   32,   37,   32,   32,   32,
  108,   61,   33,   28,   28,   33,   28,   33,   33,   33,
    7,   57,   62,   32,   32,   34,   32,   58,   34,  108,
   34,   34,   34,   33,   33,   35,   33,   77,   35,    8,
   40,   35,   45,   53,   46,   39,   34,   34,   28,   34,
   38,   52,   56,    9,   52,   56,   35,   35,   32,   35,
   17,   36,   51,   36,   36,   33,   37,   36,   33,   52,
   56,   37,   54,  112,   37,  132,   55,   37,   28,   28,
   56,   34,   36,   36,   60,   36,   71,   53,   32,   32,
   53,   35,   37,   37,  119,   37,  127,   13,   33,   33,
  101,   71,  125,   71,   68,   53,  134,   99,  125,  118,
   82,   34,   34,  122,   13,   70,   30,   36,  125,   68,
   38,   35,   35,   38,   43,   44,   38,   37,   39,  100,
   70,   39,   70,   30,   39,   52,   56,   71,   72,   73,
   74,   38,   38,   59,   38,  116,   37,   36,   36,   39,
   39,  113,   39,   98,   49,   50,   37,   37,   37,  121,
    3,  117,   37,    3,  131,   41,   40,   42,  128,   40,
   13,   53,   40,   66,   68,   21,   38,   69,   70,   74,
   60,  110,   87,    6,   39,   75,   76,   40,   40,   30,
   40,  126,  114,  111,   78,  115,   79,   60,   16,  109,
   80,   13,   81,    0,    0,   13,   38,   38,    0,    0,
    0,    0,    0,    0,   39,   39,  100,   16,   13,    0,
   30,    0,   40,    0,    0,    0,   28,    0,   28,   28,
   28,   28,    0,    0,   28,   28,   32,    0,   32,   32,
   32,   32,    0,    0,   32,   32,   33,   21,   33,   33,
   33,   33,   40,   40,   33,   33,   47,   48,    0,   34,
    0,   34,   34,   34,   34,    0,    0,   34,   34,   35,
    0,   35,   35,   35,   35,    0,    0,   35,   35,    0,
    0,   16,   52,   16,   60,    0,  107,   13,  123,    0,
   43,    0,    0,   43,    0,   36,   43,   36,   36,   36,
   36,    0,    0,   36,   36,   37,   30,   37,   37,   37,
   37,   43,    0,   37,   37,    1,    0,   83,   53,    0,
   84,   85,   86,    0,   10,   11,   12,   41,    0,    0,
   41,    0,    1,   41,   83,   14,   15,   84,   85,   86,
    0,   10,   11,   12,    0,    0,   43,    0,   41,   41,
    0,   41,   14,   15,   38,    0,   38,   38,   38,   38,
    0,    0,   39,    0,   39,   39,   39,   39,   42,    0,
   60,   42,  120,    0,   42,   44,   43,   43,   44,    0,
    0,   44,    0,   41,    0,   45,    0,    0,   45,   42,
   42,   45,   42,    0,    0,    0,   44,   10,   11,   12,
   40,    0,   40,   40,   40,   40,   45,    0,   14,   15,
    0,    0,    0,   41,   41,   16,   16,   46,   16,    1,
   46,   83,    0,   46,   42,   16,   16,   16,   10,   11,
   12,   44,   10,   11,   12,    0,   16,   16,   46,   14,
   15,   45,    0,   14,   15,   10,   11,   12,    0,   48,
    0,    0,   48,    0,   42,   42,   14,   15,    0,    0,
    0,   44,   44,   47,    0,    0,   47,   48,    0,   47,
    0,   45,   45,   46,   49,    0,   50,   49,    0,   50,
    0,    0,    0,    0,   47,    0,    0,    0,   51,    0,
    0,   51,   49,    0,   50,    0,    0,    0,    0,    0,
    0,    0,   48,   46,   46,    1,   51,   83,    0,    0,
    0,    0,   34,   35,   10,   11,   12,    0,    0,   47,
    0,    0,    0,    0,   43,   14,   15,   49,   43,   43,
    0,    0,   48,   48,    0,    0,   63,   64,   65,   67,
   67,   67,   67,   67,   67,   67,   67,   67,   67,   47,
   47,   67,   67,   67,   67,    0,    0,   49,   49,   50,
   50,   41,    0,   41,   41,   41,   41,    0,    0,    0,
    0,   51,   51,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   42,    0,   42,   42,   42,   42,    0,   44,
    0,    0,    0,   44,   44,    0,    0,    0,    0,   45,
    0,    0,    0,   45,   45,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   46,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   48,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   47,    0,    0,
    0,    0,    0,    0,    0,   49,    0,   50,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   51,
};
static const YYINT yycheck[] = {                         42,
    0,   37,   38,  123,   44,   41,   42,   43,   44,   45,
  258,   47,   38,  133,    9,   41,   44,   43,   44,   45,
   91,   36,   38,   59,   60,   41,   62,   43,   44,   45,
  257,   59,   37,   59,   60,   38,   62,   32,   41,  110,
   43,   44,   45,   59,   60,   38,   62,   52,   41,   40,
   37,   44,   60,   38,   62,   42,   59,   60,   94,   62,
   47,   41,   41,   40,   44,   44,   59,   60,   94,   62,
    8,   38,   61,   41,   41,   13,   44,   44,   94,   59,
   59,   38,   94,   98,   41,  125,  124,   44,  124,  125,
  272,   94,   59,   60,  123,   62,   44,   41,  124,  125,
   44,   94,   59,   60,   44,   62,  121,   40,  124,  125,
   42,   59,  117,   61,   44,   59,  131,   40,  123,   59,
   58,  124,  125,  267,   40,   44,   59,   94,  133,   59,
   38,  124,  125,   41,  280,  281,   44,   94,   38,  269,
   59,   41,   61,   59,   44,  125,  125,   45,   46,   47,
   48,   59,   60,   41,   62,   91,   44,  124,  125,   59,
   60,   99,   62,   41,  276,  277,   44,  124,  125,   41,
    0,   61,   44,    3,  261,   43,   38,   45,   93,   41,
   40,  125,   44,   41,   42,  257,   94,   43,   44,  269,
  123,   92,  125,    3,   94,   49,   50,   59,   60,   59,
   62,  119,  101,   92,   53,  102,   54,  123,   40,  125,
   55,   40,   56,   -1,   -1,   40,  124,  125,   -1,   -1,
   -1,   -1,   -1,   -1,  124,  125,  269,   59,   40,   -1,
   59,   -1,   94,   -1,   -1,   -1,  272,   -1,  274,  275,
  276,  277,   -1,   -1,  280,  281,  272,   -1,  274,  275,
  276,  277,   -1,   -1,  280,  281,  272,  257,  274,  275,
  276,  277,  124,  125,  280,  281,  274,  275,   -1,  272,
   -1,  274,  275,  276,  277,   -1,   -1,  280,  281,  272,
   -1,  274,  275,  276,  277,   -1,   -1,  280,  281,   -1,
   -1,  123,  272,  125,  123,   -1,  125,   40,  123,   -1,
   38,   -1,   -1,   41,   -1,  272,   44,  274,  275,  276,
  277,   -1,   -1,  280,  281,  272,   59,  274,  275,  276,
  277,   59,   -1,  280,  281,  258,   -1,  260,  272,   -1,
  263,  264,  265,   -1,  267,  268,  269,   38,   -1,   -1,
   41,   -1,  258,   44,  260,  278,  279,  263,  264,  265,
   -1,  267,  268,  269,   -1,   -1,   94,   -1,   59,   60,
   -1,   62,  278,  279,  272,   -1,  274,  275,  276,  277,
   -1,   -1,  272,   -1,  274,  275,  276,  277,   38,   -1,
  123,   41,  125,   -1,   44,   38,  124,  125,   41,   -1,
   -1,   44,   -1,   94,   -1,   38,   -1,   -1,   41,   59,
   60,   44,   62,   -1,   -1,   -1,   59,  267,  268,  269,
  272,   -1,  274,  275,  276,  277,   59,   -1,  278,  279,
   -1,   -1,   -1,  124,  125,  257,  258,   38,  260,  258,
   41,  260,   -1,   44,   94,  267,  268,  269,  267,  268,
  269,   94,  267,  268,  269,   -1,  278,  279,   59,  278,
  279,   94,   -1,  278,  279,  267,  268,  269,   -1,   41,
   -1,   -1,   44,   -1,  124,  125,  278,  279,   -1,   -1,
   -1,  124,  125,   38,   -1,   -1,   41,   59,   -1,   44,
   -1,  124,  125,   94,   41,   -1,   41,   44,   -1,   44,
   -1,   -1,   -1,   -1,   59,   -1,   -1,   -1,   41,   -1,
   -1,   44,   59,   -1,   59,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   94,  124,  125,  258,   59,  260,   -1,   -1,
   -1,   -1,   14,   15,  267,  268,  269,   -1,   -1,   94,
   -1,   -1,   -1,   -1,  272,  278,  279,   94,  276,  277,
   -1,   -1,  124,  125,   -1,   -1,   38,   39,   40,   41,
   42,   43,   44,   45,   46,   47,   48,   49,   50,  124,
  125,   53,   54,   55,   56,   -1,   -1,  124,  125,  124,
  125,  272,   -1,  274,  275,  276,  277,   -1,   -1,   -1,
   -1,  124,  125,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  272,   -1,  274,  275,  276,  277,   -1,  272,
   -1,   -1,   -1,  276,  277,   -1,   -1,   -1,   -1,  272,
   -1,   -1,   -1,  276,  277,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  272,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  272,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  272,   -1,  272,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 281
#define YYUNDFTOKEN 321
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'%'","'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,
0,0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'['",0,"']'","'^'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"'{'","'|'","'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"FOR","WHILE","DO","IF","ELSE",
"RETURN","INT","VOID","FLOAT","CONST_Q","CONST_INT","CONST_FLOAT","IDENTIFIER",
"STRING","CONST","AND_OP","OR_OP","LE_OP","GE_OP","EQ_OP","NE_OP","INC","DEC",
"LEFT_OP","RIGHT_OP",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : optimizer_start",
"optimizer_start : iteration_statement",
"optimizer_start : iteration_statement optimizer_start",
"translation_unit : compound_statement",
"compound_statement : '{' '}'",
"compound_statement : '{' statement_list '}'",
"compound_statement : '{' declaration_list '}'",
"compound_statement : '{' declaration_list statement_list '}'",
"statement_list : statement",
"statement_list : statement_list statement",
"statement : compound_statement",
"statement : expression_statement",
"statement : selection_statement",
"statement : iteration_statement",
"expression_statement : ';'",
"expression_statement : expression ';'",
"selection_statement : IF '(' expression ')' compound_statement",
"selection_statement : IF '(' expression ')' compound_statement ELSE compound_statement",
"$$1 :",
"iteration_statement : WHILE $$1 '(' expression ')' compound_statement",
"iteration_statement : iter_counter FOR '(' expression_statement expression_statement expression ')' compound_statement",
"iter_counter :",
"expression : assignment_expression",
"expression : expression ',' assignment_expression",
"postfix_expression : primary_expression",
"unary_expression : postfix_expression",
"unary_expression : INC unary_expression",
"unary_expression : DEC unary_expression",
"multiplicative_expression : unary_expression",
"multiplicative_expression : multiplicative_expression '*' unary_expression",
"multiplicative_expression : multiplicative_expression '/' unary_expression",
"multiplicative_expression : multiplicative_expression '%' unary_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression '+' multiplicative_expression",
"additive_expression : additive_expression '-' multiplicative_expression",
"shift_expression : additive_expression",
"shift_expression : shift_expression LEFT_OP additive_expression",
"shift_expression : shift_expression RIGHT_OP additive_expression",
"relational_expression : shift_expression",
"relational_expression : relational_expression '<' shift_expression",
"relational_expression : relational_expression '>' shift_expression",
"relational_expression : relational_expression LE_OP shift_expression",
"relational_expression : relational_expression GE_OP shift_expression",
"equality_expression : relational_expression",
"equality_expression : equality_expression EQ_OP relational_expression",
"equality_expression : equality_expression NE_OP relational_expression",
"and_expression : equality_expression",
"and_expression : and_expression '&' equality_expression",
"exclusive_or_expression : and_expression",
"exclusive_or_expression : exclusive_or_expression '^' and_expression",
"inclusive_or_expression : exclusive_or_expression",
"inclusive_or_expression : inclusive_or_expression '|' exclusive_or_expression",
"logical_and_expression : inclusive_or_expression",
"logical_and_expression : logical_and_expression AND_OP inclusive_or_expression",
"logical_or_expression : logical_and_expression",
"logical_or_expression : logical_or_expression OR_OP logical_and_expression",
"assignment_expression : logical_and_expression",
"assignment_expression : unary_expression assignment_operator assignment_expression",
"assignment_operator : '='",
"declaration_list : declaration",
"declaration_list : declaration_list declaration",
"declaration : declaration_specifiers init_declarator_list ';'",
"declaration_specifiers : type_specifier",
"type_specifier : VOID",
"type_specifier : INT",
"type_specifier : FLOAT",
"init_declarator_list : init_declarator",
"init_declarator_list : init_declarator_list ',' init_declarator",
"init_declarator : declarator",
"init_declarator : declarator '=' initializer",
"declarator : pointer direct_declarator",
"declarator : direct_declarator",
"direct_declarator : IDENTIFIER",
"direct_declarator : direct_declarator '[' CONST_INT ']'",
"pointer : '*'",
"pointer : '*' pointer",
"initializer : assignment_expression",
"initializer : '{' initializer_list '}'",
"initializer_list : initializer",
"initializer_list : initializer_list ',' initializer",
"primary_expression : IDENTIFIER",
"primary_expression : CONST_INT",
"primary_expression : CONST_FLOAT",
"primary_expression : '(' expression ')'",
"identifier_list : IDENTIFIER",
"identifier_list : identifier_list ',' IDENTIFIER",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 411 "grammar/c_syn.y"

int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
#line 513 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 3:
#line 48 "grammar/c_syn.y"
	{
		printf("DONE ! \n");
		return 0;
	}
break;
case 4:
#line 55 "grammar/c_syn.y"
	{

	}
break;
case 5:
#line 58 "grammar/c_syn.y"
	{

	}
break;
case 6:
#line 61 "grammar/c_syn.y"
	{

	}
break;
case 7:
#line 64 "grammar/c_syn.y"
	{
	}
break;
case 8:
#line 73 "grammar/c_syn.y"
	{
	}
break;
case 9:
#line 75 "grammar/c_syn.y"
	{

	}
break;
case 10:
#line 80 "grammar/c_syn.y"
	{
	  }
break;
case 11:
#line 82 "grammar/c_syn.y"
	{
	}
break;
case 12:
#line 84 "grammar/c_syn.y"
	{
	}
break;
case 13:
#line 86 "grammar/c_syn.y"
	{
	}
break;
case 14:
#line 90 "grammar/c_syn.y"
	{
	}
break;
case 15:
#line 92 "grammar/c_syn.y"
	{

	}
break;
case 16:
#line 101 "grammar/c_syn.y"
	{

	}
break;
case 17:
#line 104 "grammar/c_syn.y"
	{
	}
break;
case 18:
#line 107 "grammar/c_syn.y"
	{printf("START-WHILE\n ");}
break;
case 19:
#line 107 "grammar/c_syn.y"
	{printf("END-WHILE\n ");}
break;
case 20:
#line 109 "grammar/c_syn.y"
	{

	}
break;
case 21:
#line 112 "grammar/c_syn.y"
	{}
break;
case 22:
#line 117 "grammar/c_syn.y"
	{

 	}
break;
case 23:
#line 120 "grammar/c_syn.y"
	{


	}
break;
case 24:
#line 126 "grammar/c_syn.y"
	{

	}
break;
case 25:
#line 135 "grammar/c_syn.y"
	{

	}
break;
case 26:
#line 138 "grammar/c_syn.y"
	{

	}
break;
case 27:
#line 141 "grammar/c_syn.y"
	{

	}
break;
case 28:
#line 146 "grammar/c_syn.y"
	{

	}
break;
case 29:
#line 149 "grammar/c_syn.y"
	{



	}
break;
case 30:
#line 154 "grammar/c_syn.y"
	{


	}
break;
case 31:
#line 158 "grammar/c_syn.y"
	{

	}
break;
case 32:
#line 163 "grammar/c_syn.y"
	{

	}
break;
case 33:
#line 166 "grammar/c_syn.y"
	{

	}
break;
case 34:
#line 169 "grammar/c_syn.y"
	{

	}
break;
case 35:
#line 174 "grammar/c_syn.y"
	{
	}
break;
case 36:
#line 176 "grammar/c_syn.y"
	{

	}
break;
case 37:
#line 179 "grammar/c_syn.y"
	{
	}
break;
case 38:
#line 183 "grammar/c_syn.y"
	{
	}
break;
case 39:
#line 185 "grammar/c_syn.y"
	{

	}
break;
case 40:
#line 188 "grammar/c_syn.y"
	{

	}
break;
case 41:
#line 191 "grammar/c_syn.y"
	{

	}
break;
case 42:
#line 194 "grammar/c_syn.y"
	{

	}
break;
case 43:
#line 199 "grammar/c_syn.y"
	{
	}
break;
case 44:
#line 201 "grammar/c_syn.y"
	{
	}
break;
case 45:
#line 203 "grammar/c_syn.y"
	{
	}
break;
case 46:
#line 207 "grammar/c_syn.y"
	{
	}
break;
case 47:
#line 209 "grammar/c_syn.y"
	{

	}
break;
case 48:
#line 214 "grammar/c_syn.y"
	{
	}
break;
case 49:
#line 216 "grammar/c_syn.y"
	{

	}
break;
case 50:
#line 221 "grammar/c_syn.y"
	{
	}
break;
case 51:
#line 223 "grammar/c_syn.y"
	{

	}
break;
case 52:
#line 228 "grammar/c_syn.y"
	{
	}
break;
case 53:
#line 230 "grammar/c_syn.y"
	{

	}
break;
case 54:
#line 235 "grammar/c_syn.y"
	{
	}
break;
case 55:
#line 237 "grammar/c_syn.y"
	{

	}
break;
case 56:
#line 244 "grammar/c_syn.y"
	{
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 57:
#line 247 "grammar/c_syn.y"
	{

	}
break;
case 58:
#line 252 "grammar/c_syn.y"
	{
	}
break;
case 59:
#line 258 "grammar/c_syn.y"
	{

	}
break;
case 60:
#line 261 "grammar/c_syn.y"
	{
	}
break;
case 61:
#line 268 "grammar/c_syn.y"
	{
	}
break;
case 62:
#line 275 "grammar/c_syn.y"
	{
	}
break;
case 63:
#line 282 "grammar/c_syn.y"
	{


	}
break;
case 64:
#line 286 "grammar/c_syn.y"
	{

	}
break;
case 65:
#line 289 "grammar/c_syn.y"
	{

	}
break;
case 66:
#line 295 "grammar/c_syn.y"
	{


	}
break;
case 67:
#line 299 "grammar/c_syn.y"
	{



	}
break;
case 68:
#line 308 "grammar/c_syn.y"
	{


	}
break;
case 69:
#line 312 "grammar/c_syn.y"
	{


	}
break;
case 70:
#line 321 "grammar/c_syn.y"
	{

	}
break;
case 71:
#line 324 "grammar/c_syn.y"
	{

	}
break;
case 72:
#line 331 "grammar/c_syn.y"
	{


	}
break;
case 73:
#line 339 "grammar/c_syn.y"
	{

        }
break;
case 74:
#line 350 "grammar/c_syn.y"
	{

	}
break;
case 75:
#line 354 "grammar/c_syn.y"
	{

	}
break;
case 76:
#line 361 "grammar/c_syn.y"
	{


	}
break;
case 77:
#line 365 "grammar/c_syn.y"
	{

	}
break;
case 78:
#line 370 "grammar/c_syn.y"
	{
	}
break;
case 79:
#line 372 "grammar/c_syn.y"
	{


	}
break;
case 80:
#line 380 "grammar/c_syn.y"
	{

	}
break;
case 81:
#line 383 "grammar/c_syn.y"
	{


	}
break;
case 82:
#line 387 "grammar/c_syn.y"
	{

	}
break;
case 83:
#line 393 "grammar/c_syn.y"
	{



	}
break;
case 84:
#line 403 "grammar/c_syn.y"
	{

	}
break;
case 85:
#line 406 "grammar/c_syn.y"
	{

	}
break;
#line 1197 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
