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
  	#include "headers/linkedlist.h"
	#include "headers/y.tab.h"
	
	int for_depth_counter_var = 0;
	int direct_declarator_var = 0;
	int current_type_var = -1;
    /*int yydebug = 1;*/
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 12 "grammar/c_syn.y"
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

		char *X, *Y;
		char *n;
		node id;
		int id_size;
		char * string_exp;
	}vv;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 59 "y.tab.c"

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
    0,   35,   35,    5,    5,    5,    5,    6,    6,   18,
   18,   18,   18,   28,   28,    9,    9,   36,   20,   20,
   37,    4,    4,   19,   19,   19,   19,   19,   26,   26,
   26,   21,   21,   21,   21,   22,   22,   22,   23,   23,
   23,   24,   24,   24,   24,   24,   25,   25,   25,   29,
   29,   30,   30,   31,   31,   33,   33,   32,   32,   27,
   27,   34,    7,    7,   14,    2,    1,    1,    1,   15,
   15,   13,   13,   12,   12,   11,   11,   10,   10,   16,
   16,   17,   17,    3,    3,    3,    3,    8,    8,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    2,    3,    3,    4,    1,    2,    1,
    1,    1,    1,    1,    2,    5,    7,    0,    6,    8,
    0,    1,    3,    1,    4,    3,    2,    2,    1,    2,
    2,    1,    3,    3,    3,    1,    3,    3,    1,    3,
    3,    1,    3,    3,    3,    3,    1,    3,    3,    1,
    3,    1,    3,    1,    3,    1,    3,    1,    3,    1,
    3,    1,    1,    2,    3,    1,    1,    1,    1,    1,
    3,    1,    3,    2,    1,    1,    4,    1,    2,    1,
    3,    1,    3,    1,    1,    1,    3,    1,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    2,    0,   18,    0,   68,   67,   69,   85,
   86,   84,    0,   14,    4,    0,    0,   66,    0,   24,
    0,   10,    0,    0,   12,   63,    8,    0,   13,    0,
    0,    0,    0,    0,    0,   22,   11,    0,    0,    0,
    0,    0,    3,    0,    0,    0,   30,   31,   76,    0,
    0,    0,    0,   70,    0,   15,    0,    5,    9,    6,
    0,   64,    0,    0,   27,   28,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   62,
    0,    0,    0,    0,    0,    0,    0,    0,   87,   79,
    0,    0,    0,   65,    0,   23,    7,   26,    0,   34,
   33,   35,    0,   32,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   61,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   73,   80,   71,   25,    0,    0,    0,
   77,   82,    0,    0,   19,    0,   81,    0,    0,   17,
   83,    0,   20,
};
static const YYINT yydgoto[] = {                          2,
   18,   19,   20,   21,   22,   23,   24,    0,   25,   51,
   52,   53,   54,   26,   55,  124,  133,   27,   28,   29,
   30,   31,   32,   33,   34,   35,   36,   37,   38,   39,
   40,    0,   41,   81,    4,   44,   42,
};
static const YYINT yysindex[] = {                      -121,
   68,    0,    0, -121,    0,    9,    0,    0,    0,    0,
    0,    0,  178,    0,    0,  178,  178,    0,  -39,    0,
  -18,    0,  265,  229,    0,    0,    0,   71,    0,  102,
   32, -253,  -15, -145,   44,    0,    0,  -29,    2,   26,
 -163, -144,    0,  125,  178,   -6,    0,    0,    0,  115,
  -99,   82,  119,    0,  -13,    0,  178,    0,    0,    0,
  304,    0,  141,  178,    0,    0,  178,  178,  178,  178,
  178,  178,  178,  178,  178,  178,  178,  178,  178,    0,
  178,  178,  178,  178,  178,  143,  178,   66,    0,    0,
   82,  -77,  -11,    0,  -39,    0,    0,    0,  -31,    0,
    0,    0,  102,    0,  102,   32,   32, -253, -253, -253,
 -253,  -15,  -15,    0, -145,  -29,    2,   26,  268,   76,
 -121,   99,  -11,    0,    0,    0,    0,  268, -121,  -67,
    0,    0,  -24,  178,    0, -121,    0,  -11,   77,    0,
    0, -121,    0,
};
static const YYINT yyrindex[] = {                         0,
  -62,    0,    0,  196,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -62,  -62,    0,    0,    0,  -37,    0,   -1,
   22,  104,  366,  522,  -26,    0,    0,  168,  461,  546,
  128,    0,    0,    0,    0,    0,    0,    0,    0,  -68,
    0,   30,    6,    0,    0,    0,    0,    0,    0,    0,
  -62,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   41,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   10,    0,   35,   81,   92,  117,  140,  281,
  359,  392,  417,    0,  536,  379,  468,  547,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  261,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    0,   19,  266,  179,    0,    0,    0,  154,
  156,    0,  113,  189,    0,  -52,    0,   -9,    0,    0,
   67,   95,  148,  110,  132,  628,   33,  -89,  136,  131,
  135,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 819
static const YYINT yytable[] = {                         29,
   29,    1,   50,   29,   29,   29,   29,   29,   82,   29,
   32,   32,   57,   59,   32,   32,   32,   32,   32,  138,
   32,   29,   29,   29,   29,   57,   72,   73,   13,  128,
   95,   46,   32,   32,   89,   32,   36,   57,  134,   36,
   56,   36,   36,   36,   74,   94,   75,   37,   45,   72,
   37,   59,   37,   37,   37,   29,   29,   36,   36,   39,
   36,  127,   39,   88,   72,   39,   32,   32,   37,   37,
  132,   37,   38,   75,   70,   38,   71,   38,   38,   38,
   39,   39,   99,   39,   74,  141,   29,   29,   75,   96,
   75,   36,   36,   38,   38,   83,   38,   32,   32,   74,
  137,   74,   37,   37,   80,  120,  121,   13,   85,   57,
   63,  123,   86,  114,   39,   39,  129,  142,   40,   57,
   57,   40,   36,   36,   40,  125,   14,   38,   38,   41,
   78,   79,   41,   37,   37,   41,  103,  105,   69,   40,
   40,   42,   40,   68,   42,   39,   39,   42,   67,   84,
   41,   41,  139,   41,   43,  125,   50,   43,   38,   38,
   43,   64,   42,   42,   87,   42,  106,  107,   60,   49,
  125,   60,   92,   40,   40,   43,   43,   44,   43,   93,
   44,   98,  119,   44,   41,   41,   60,  112,  113,  122,
    1,  131,   15,  136,   21,    1,   42,   42,   44,   44,
   78,   44,   61,   90,   40,   40,   91,  126,   52,   43,
   43,   52,   62,  115,  117,   41,   41,   13,  116,  118,
   60,  108,  109,  110,  111,    0,   52,   42,   42,   49,
    0,    0,   44,   44,   29,    0,   29,   29,   29,   29,
   43,   43,   29,   29,    0,   32,    0,   32,   32,   32,
   32,    0,   60,   32,   32,   10,   11,   12,   76,   77,
   52,   52,    0,   44,   44,    3,   16,   17,   13,   43,
   36,    0,   36,   36,   36,   36,    0,    0,   36,   36,
    0,   37,    0,   37,   37,   37,   37,   14,    0,   37,
   37,   52,   52,   39,    0,   39,   39,   39,   39,    0,
   16,   39,   39,    0,   13,    0,   38,   13,   38,   38,
   38,   38,    0,    0,   38,   38,    0,    0,   45,   16,
    0,   45,    0,   14,   45,    5,   14,    6,    0,    0,
    7,    8,    9,    0,   10,   11,   12,    0,    0,   45,
   45,    0,   45,   13,    0,   16,   17,    0,   65,   66,
    0,    1,   40,   60,   40,   40,   40,   40,    0,    0,
   40,   40,   14,   41,    0,   41,   41,   41,   41,    0,
    0,   41,   41,   45,   45,   42,    0,   42,   42,   42,
   42,    0,    0,   16,    0,   16,  130,    1,   43,   58,
   43,   43,   43,   43,  135,    0,   46,    0,    0,   46,
    0,  140,   46,   47,   45,   45,   47,  143,    0,   47,
    0,   44,    0,   44,   44,   44,   44,   46,   46,   53,
   46,    0,   53,    0,   47,    0,    1,    0,   97,   48,
    0,    0,   48,    0,    0,   48,    0,   53,    0,   52,
    0,    0,    0,    0,   10,   11,   12,    0,    0,    0,
   48,   46,   46,    0,   49,   16,   17,   49,   47,   47,
   49,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   53,   53,    0,    0,   49,    0,    0,    0,    0,
    0,    0,   46,   46,   48,   48,    5,    0,    6,   47,
   47,    7,    8,    9,    0,   10,   11,   12,    0,    0,
    0,   54,   53,   53,   54,    0,   16,   17,   55,   49,
   49,   55,    0,    0,    0,   48,   48,   16,   16,   54,
   16,    0,    5,    0,    6,    0,   55,   16,   16,   16,
    0,   10,   11,   12,   10,   11,   12,    0,   16,   16,
   49,   49,   16,   17,    0,   16,   17,    0,    0,    0,
    0,    0,   45,   54,   45,   45,   45,   45,    0,   50,
   55,    5,   50,    6,    0,   50,    0,    0,    0,    0,
   10,   11,   12,   51,    0,    0,   51,    0,    0,   51,
   50,   16,   17,    0,   54,   54,   56,   57,    0,   56,
   57,   55,   55,    0,   51,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   56,   57,    0,    0,    0,    0,
    0,    0,    0,    0,   50,   50,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   51,   51,
   46,    0,   46,   46,   46,   46,    0,   47,   56,   57,
    0,   47,   47,   47,   48,   50,   50,    0,    0,    0,
   53,    0,    0,    0,    0,    0,    0,    0,    0,   51,
   51,    0,    0,   48,    0,    0,    0,   48,   48,    0,
   56,   57,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   49,    0,
    0,    0,   49,   49,  100,  101,  102,  104,  104,  104,
  104,  104,  104,  104,  104,  104,  104,    0,    0,  104,
  104,  104,  104,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   54,    0,    0,    0,    0,    0,    0,   55,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   50,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   51,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   56,   57,
};
static const YYINT yycheck[] = {                         37,
   38,  123,   42,   41,   42,   43,   44,   45,   38,   47,
   37,   38,   44,   23,   41,   42,   43,   44,   45,   44,
   47,   59,   60,   61,   62,   44,  280,  281,   40,  119,
   44,   13,   59,   60,   41,   62,   38,   44,  128,   41,
   59,   43,   44,   45,   60,   59,   62,   38,   40,   44,
   41,   61,   43,   44,   45,   93,   94,   59,   60,   38,
   62,   93,   41,   45,   59,   44,   93,   94,   59,   60,
  123,   62,   38,   44,   43,   41,   45,   43,   44,   45,
   59,   60,   64,   62,   44,  138,  124,  125,   59,   57,
   61,   93,   94,   59,   60,   94,   62,  124,  125,   59,
  125,   61,   93,   94,   61,   87,   41,   40,  272,   44,
   40,  123,  257,   81,   93,   94,   41,   41,   38,   44,
   44,   41,  124,  125,   44,   93,   59,   93,   94,   38,
  276,  277,   41,  124,  125,   44,   70,   71,   37,   59,
   60,   38,   62,   42,   41,  124,  125,   44,   47,  124,
   59,   60,  134,   62,   38,  123,   42,   41,  124,  125,
   44,   91,   59,   60,   40,   62,   72,   73,   41,  269,
  138,   44,   91,   93,   94,   59,   60,   38,   62,   61,
   41,   41,   40,   44,   93,   94,   59,   78,   79,  267,
  123,   93,  125,  261,  257,    0,   93,   94,   59,   60,
  269,   62,   24,   50,  124,  125,   51,   95,   41,   93,
   94,   44,   24,   82,   84,  124,  125,   40,   83,   85,
   93,   74,   75,   76,   77,   -1,   59,  124,  125,  269,
   -1,   -1,   93,   94,  272,   -1,  274,  275,  276,  277,
  124,  125,  280,  281,   -1,  272,   -1,  274,  275,  276,
  277,   -1,  125,  280,  281,  267,  268,  269,  274,  275,
   93,   94,   -1,  124,  125,    0,  278,  279,   40,    4,
  272,   -1,  274,  275,  276,  277,   -1,   -1,  280,  281,
   -1,  272,   -1,  274,  275,  276,  277,   59,   -1,  280,
  281,  124,  125,  272,   -1,  274,  275,  276,  277,   -1,
   40,  280,  281,   -1,   40,   -1,  272,   40,  274,  275,
  276,  277,   -1,   -1,  280,  281,   -1,   -1,   38,   59,
   -1,   41,   -1,   59,   44,  258,   59,  260,   -1,   -1,
  263,  264,  265,   -1,  267,  268,  269,   -1,   -1,   59,
   60,   -1,   62,   40,   -1,  278,  279,   -1,  278,  279,
   -1,  123,  272,  125,  274,  275,  276,  277,   -1,   -1,
  280,  281,   59,  272,   -1,  274,  275,  276,  277,   -1,
   -1,  280,  281,   93,   94,  272,   -1,  274,  275,  276,
  277,   -1,   -1,  123,   -1,  125,  121,  123,  272,  125,
  274,  275,  276,  277,  129,   -1,   38,   -1,   -1,   41,
   -1,  136,   44,   38,  124,  125,   41,  142,   -1,   44,
   -1,  272,   -1,  274,  275,  276,  277,   59,   60,   41,
   62,   -1,   44,   -1,   59,   -1,  123,   -1,  125,   38,
   -1,   -1,   41,   -1,   -1,   44,   -1,   59,   -1,  272,
   -1,   -1,   -1,   -1,  267,  268,  269,   -1,   -1,   -1,
   59,   93,   94,   -1,   38,  278,  279,   41,   93,   94,
   44,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   93,   94,   -1,   -1,   59,   -1,   -1,   -1,   -1,
   -1,   -1,  124,  125,   93,   94,  258,   -1,  260,  124,
  125,  263,  264,  265,   -1,  267,  268,  269,   -1,   -1,
   -1,   41,  124,  125,   44,   -1,  278,  279,   41,   93,
   94,   44,   -1,   -1,   -1,  124,  125,  257,  258,   59,
  260,   -1,  258,   -1,  260,   -1,   59,  267,  268,  269,
   -1,  267,  268,  269,  267,  268,  269,   -1,  278,  279,
  124,  125,  278,  279,   -1,  278,  279,   -1,   -1,   -1,
   -1,   -1,  272,   93,  274,  275,  276,  277,   -1,   38,
   93,  258,   41,  260,   -1,   44,   -1,   -1,   -1,   -1,
  267,  268,  269,   38,   -1,   -1,   41,   -1,   -1,   44,
   59,  278,  279,   -1,  124,  125,   41,   41,   -1,   44,
   44,  124,  125,   -1,   59,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   59,   59,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   93,   94,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   93,   94,
  272,   -1,  274,  275,  276,  277,   -1,  272,   93,   93,
   -1,  276,  277,   16,   17,  124,  125,   -1,   -1,   -1,
  272,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  124,
  125,   -1,   -1,  272,   -1,   -1,   -1,  276,  277,   -1,
  125,  125,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,   -1,
   -1,   -1,  276,  277,   67,   68,   69,   70,   71,   72,
   73,   74,   75,   76,   77,   78,   79,   -1,   -1,   82,
   83,   84,   85,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  272,   -1,   -1,   -1,   -1,   -1,   -1,  272,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  272,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,  272,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 1
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
"$accept : start",
"start : translation_unit",
"translation_unit : compound_statement",
"translation_unit : translation_unit compound_statement",
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
"postfix_expression : postfix_expression '[' expression ']'",
"postfix_expression : postfix_expression '(' ')'",
"postfix_expression : postfix_expression INC",
"postfix_expression : postfix_expression DEC",
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
#line 437 "grammar/c_syn.y"

node createNode(){
    node temp; 
    temp = (node)malloc(sizeof(struct LinkedList)); 
    temp->next = NULL;
    return temp;
}

node addNode(node head, symbol_p value){
    node temp,p;
    temp = createNode();
	int len = strlen(value);
    temp->entry = (symbol_p) malloc(len * sizeof(symbol_p));
	free(value);

    strncpy(temp->entry, value, len);
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
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
#line 570 "y.tab.c"

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
case 1:
#line 46 "grammar/c_syn.y"
	{

}
break;
case 2:
#line 50 "grammar/c_syn.y"
	{
	}
break;
case 3:
#line 52 "grammar/c_syn.y"
	{

	}
break;
case 4:
#line 57 "grammar/c_syn.y"
	{

	}
break;
case 5:
#line 60 "grammar/c_syn.y"
	{

	}
break;
case 6:
#line 63 "grammar/c_syn.y"
	{

	}
break;
case 7:
#line 66 "grammar/c_syn.y"
	{


	}
break;
case 8:
#line 77 "grammar/c_syn.y"
	{
	}
break;
case 9:
#line 79 "grammar/c_syn.y"
	{

	}
break;
case 10:
#line 84 "grammar/c_syn.y"
	{

	  }
break;
case 11:
#line 87 "grammar/c_syn.y"
	{

	}
break;
case 12:
#line 90 "grammar/c_syn.y"
	{

	}
break;
case 13:
#line 93 "grammar/c_syn.y"
	{
	}
break;
case 14:
#line 97 "grammar/c_syn.y"
	{

	}
break;
case 15:
#line 100 "grammar/c_syn.y"
	{

	}
break;
case 16:
#line 109 "grammar/c_syn.y"
	{

	}
break;
case 17:
#line 112 "grammar/c_syn.y"
	{

	}
break;
case 18:
#line 116 "grammar/c_syn.y"
	{printf("START-WHILE\n ");}
break;
case 19:
#line 116 "grammar/c_syn.y"
	{}
break;
case 20:
#line 118 "grammar/c_syn.y"
	{

	}
break;
case 21:
#line 121 "grammar/c_syn.y"
	{for_depth_counter_var++;}
break;
case 22:
#line 126 "grammar/c_syn.y"
	{

 	}
break;
case 23:
#line 129 "grammar/c_syn.y"
	{

	}
break;
case 24:
#line 134 "grammar/c_syn.y"
	{

	}
break;
case 25:
#line 137 "grammar/c_syn.y"
	{

	}
break;
case 26:
#line 140 "grammar/c_syn.y"
	{

	}
break;
case 27:
#line 143 "grammar/c_syn.y"
	{

	}
break;
case 28:
#line 146 "grammar/c_syn.y"
	{

	}
break;
case 29:
#line 151 "grammar/c_syn.y"
	{

	}
break;
case 30:
#line 154 "grammar/c_syn.y"
	{

	}
break;
case 31:
#line 157 "grammar/c_syn.y"
	{

	}
break;
case 32:
#line 162 "grammar/c_syn.y"
	{

	}
break;
case 33:
#line 165 "grammar/c_syn.y"
	{

	}
break;
case 34:
#line 168 "grammar/c_syn.y"
	{

	}
break;
case 35:
#line 171 "grammar/c_syn.y"
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
#line 182 "grammar/c_syn.y"
	{

	}
break;
case 39:
#line 187 "grammar/c_syn.y"
	{


	}
break;
case 40:
#line 191 "grammar/c_syn.y"
	{


	}
break;
case 41:
#line 195 "grammar/c_syn.y"
	{

	}
break;
case 42:
#line 200 "grammar/c_syn.y"
	{


	}
break;
case 43:
#line 204 "grammar/c_syn.y"
	{

	}
break;
case 44:
#line 207 "grammar/c_syn.y"
	{

	}
break;
case 45:
#line 210 "grammar/c_syn.y"
	{


	}
break;
case 46:
#line 214 "grammar/c_syn.y"
	{

	}
break;
case 47:
#line 219 "grammar/c_syn.y"
	{

	}
break;
case 48:
#line 222 "grammar/c_syn.y"
	{


	}
break;
case 49:
#line 226 "grammar/c_syn.y"
	{

	}
break;
case 50:
#line 231 "grammar/c_syn.y"
	{


	}
break;
case 51:
#line 235 "grammar/c_syn.y"
	{

	}
break;
case 52:
#line 240 "grammar/c_syn.y"
	{


	}
break;
case 53:
#line 244 "grammar/c_syn.y"
	{

	}
break;
case 54:
#line 249 "grammar/c_syn.y"
	{


	}
break;
case 55:
#line 253 "grammar/c_syn.y"
	{

	}
break;
case 56:
#line 258 "grammar/c_syn.y"
	{

	}
break;
case 57:
#line 261 "grammar/c_syn.y"
	{


	}
break;
case 58:
#line 267 "grammar/c_syn.y"
	{

	}
break;
case 59:
#line 270 "grammar/c_syn.y"
	{

	}
break;
case 60:
#line 277 "grammar/c_syn.y"
	{

	}
break;
case 61:
#line 280 "grammar/c_syn.y"
	{


	}
break;
case 62:
#line 286 "grammar/c_syn.y"
	{

	}
break;
case 63:
#line 293 "grammar/c_syn.y"
	{

	}
break;
case 64:
#line 296 "grammar/c_syn.y"
	{

	}
break;
case 65:
#line 306 "grammar/c_syn.y"
	{


	}
break;
case 66:
#line 315 "grammar/c_syn.y"
	{

	}
break;
case 67:
#line 324 "grammar/c_syn.y"
	{

	}
break;
case 68:
#line 327 "grammar/c_syn.y"
	{

	}
break;
case 69:
#line 330 "grammar/c_syn.y"
	{

	}
break;
case 70:
#line 336 "grammar/c_syn.y"
	{

	}
break;
case 71:
#line 339 "grammar/c_syn.y"
	{

	}
break;
case 72:
#line 346 "grammar/c_syn.y"
	{


	}
break;
case 73:
#line 350 "grammar/c_syn.y"
	{


	}
break;
case 74:
#line 359 "grammar/c_syn.y"
	{

	}
break;
case 75:
#line 362 "grammar/c_syn.y"
	{

	}
break;
case 76:
#line 369 "grammar/c_syn.y"
	{

	}
break;
case 77:
#line 372 "grammar/c_syn.y"
	{

        }
break;
case 78:
#line 383 "grammar/c_syn.y"
	{

	}
break;
case 79:
#line 387 "grammar/c_syn.y"
	{


	}
break;
case 80:
#line 395 "grammar/c_syn.y"
	{
	}
break;
case 81:
#line 397 "grammar/c_syn.y"
	{

	}
break;
case 82:
#line 402 "grammar/c_syn.y"
	{
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 83:
#line 405 "grammar/c_syn.y"
	{

	}
break;
case 84:
#line 412 "grammar/c_syn.y"
	{

	}
break;
case 85:
#line 415 "grammar/c_syn.y"
	{

	}
break;
case 86:
#line 418 "grammar/c_syn.y"
	{

	}
break;
case 87:
#line 421 "grammar/c_syn.y"
	{

	}
break;
case 88:
#line 429 "grammar/c_syn.y"
	{

	}
break;
case 89:
#line 432 "grammar/c_syn.y"
	{

	}
break;
#line 1308 "y.tab.c"
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
