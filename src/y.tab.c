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
  	#include "headers/linkedlist.h"
	#include<stdio.h>
	#include "headers/defs.h"
	#include "headers/y.tab.h"
	#include <stdlib.h>
	int for_depth_counter_var = 0;
	int direct_declarator_var = 0;
	int current_type_var = -1;

	symbol_p index_sentry;


	int do_gen = 1;
    /*int yydebug = 1;*/
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 17 "grammar/c_syn.y"
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
		node_t*list;
		char *X, *Y;
		char *n;
		int id_size;
		char * string_exp;


		symbol_p index_sentry;
		symbol_p vec;
		char* left;
		char* right;
		unsigned short index_dep : 1;
		unsigned short exp_dep : 1;
		int depth;
	}vv;
	struct {
		int op_type;
	}zz;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 75 "y.tab.c"

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

#define INT 257
#define VOID 258
#define FLOAT 259
#define FOR 260
#define WHILE 261
#define DO 262
#define IF 263
#define ELSE 264
#define RETURN 265
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
    0,   38,   37,   27,   27,   27,   27,   27,   39,   28,
   28,   36,   36,    5,    5,    5,    5,    6,    6,   17,
   17,   17,   17,   29,   29,    8,    8,   40,   19,   19,
   41,    4,    4,   18,   18,   18,   18,   18,   25,   25,
   25,   20,   20,   20,   20,   21,   21,   21,   22,   22,
   22,   23,   23,   23,   23,   23,   24,   24,   24,   30,
   30,   31,   31,   32,   32,   34,   34,   33,   33,   26,
   26,   35,    7,    7,   13,    2,    1,    1,    1,   14,
   14,   12,   12,   11,   11,   10,   10,    9,    9,   15,
   15,   16,   16,    3,    3,    3,    3,
};
static const YYINT yylen[] = {                            2,
    1,    0,   23,    6,    4,    6,    3,    1,   26,    2,
    0,    1,    1,    2,    3,    3,    4,    1,    2,    1,
    1,    1,    1,    1,    2,    5,    7,    0,    6,    7,
    0,    1,    3,    1,    4,    3,    2,    2,    1,    2,
    2,    1,    3,    3,    3,    1,    3,    3,    1,    3,
    3,    1,    3,    3,    3,    3,    1,    3,    3,    1,
    3,    1,    3,    1,    3,    1,    3,    1,    3,    1,
    3,    1,    1,    2,    3,    1,    1,    1,    1,    1,
    3,    1,    3,    2,    1,    1,    4,    1,    2,    1,
    3,    1,    3,    1,    1,    1,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,    2,    0,    0,   95,   96,   94,
    0,    0,    0,   34,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   32,   40,
   41,    0,    0,   37,   38,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   72,    0,
    0,    0,    0,    0,    0,    0,   97,    0,   36,    0,
   44,   43,   45,    0,   42,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   71,    0,    0,    0,    0,    0,
    0,   33,   35,   13,   12,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    8,
    0,    0,    0,    0,    0,    0,    0,    3,    0,    0,
    0,    0,    0,    4,    6,
};
static const YYINT yydgoto[] = {                          2,
    0,    0,   14,   28,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   15,    0,   16,
   17,   18,   19,   20,   65,   29,  101,    0,    0,   23,
   24,   25,   26,   27,   50,   86,    3,    6,    0,    0,
    0,
};
static const YYINT yysindex[] = {                      -251,
  -27,    0,    0, -241,    0,  -31,  -11,    0,    0,    0,
  -11,  -11,  -11,    0,   -9,    3,  -25, -201,  -13, -180,
  -29,  -22,   17,  -35,  -59, -198, -186,   49,    0,    0,
    0,   53,  -11,    0,    0,  -11,  -11,  -11,  -11,  -11,
  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,    0,  -11,
 -168,  -11,  -11,  -11,  -11,  -11,    0,  -11,    0,  -41,
    0,    0,    0,    3,    0,    3,  -25,  -25, -201, -201,
 -201, -201,  -13,  -13,    0,  -45, -180,   17,  -35, -186,
  -59,    0,    0,    0,    0,  -11,  -57, -165, -169,   72,
   -4, -145,   44, -138,   62,  -29,   18,   68,  126,    0,
  -17, -100,  -96,   51,   18,   81,   86,    0,  136,  138,
  -87,   24,   90,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -37,   40,   77,  329,  433,  472,
   29,    0,  497,  419,   73,   99,   10,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   67,    0,  103,  140,  166,  365,  390,
  413,  426,  452,  459,    0,    0,  492,  519,  529,  172,
  113,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -26,    1,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  127,  -16,
    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,   33,  152,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  110,
   65,  144,  104,  141,  618,   70,   89,    0,    0,  142,
  149,  153,    0,  143,  109,    0,    0,    0,    0,    0,
    0,
};
#define YYTABLESIZE 802
static const YYINT yytable[] = {                         39,
   39,   88,   58,   39,   39,   39,   39,   39,    1,   39,
   94,   94,    4,   94,   84,   94,   94,   39,   94,   40,
   94,   39,   39,   39,   39,  105,    5,    5,   11,    7,
   32,   49,   94,   94,   94,   94,   51,   34,   34,   38,
   34,  104,    5,   34,   37,   34,   43,   34,   44,   36,
   68,   83,   68,   68,   52,   39,   39,   11,   53,   34,
   34,   34,   34,   11,   54,   42,   42,   94,   68,   42,
   42,   42,   42,   42,   55,   42,   22,   46,   41,   42,
   46,   33,   46,   46,   46,   56,   39,   42,   42,   57,
   42,   34,   58,   59,   34,   47,   48,   94,   46,   46,
   76,   46,   68,   89,   47,   67,   68,   47,   90,   47,
   47,   47,   91,   66,   49,   66,   66,   49,   92,   75,
   49,   42,   42,   93,   34,   47,   47,   82,   47,   99,
   95,   66,   46,   46,   94,   49,   49,   99,   49,   70,
   48,   70,   70,   48,  114,   48,   48,   48,   64,   66,
   73,   74,   42,   67,   96,   67,   67,   70,  102,   47,
   47,   48,   48,   46,   48,   66,  100,  103,  106,   49,
   49,   67,  107,  110,  100,  108,  111,   50,  105,  112,
   50,  113,  115,   50,   60,    7,   69,   70,   71,   72,
   47,   70,   77,  109,   78,   48,   48,   80,   50,   50,
   49,   50,   79,   51,   97,   67,   51,    0,   81,   51,
    0,    0,   69,    0,   69,   69,    0,    0,    0,    0,
    0,    0,   41,   42,   51,   51,   48,   51,   85,   87,
   69,    0,   50,   50,   39,   39,   39,   39,   39,   39,
    0,    0,   39,   39,    0,   94,   94,   94,   94,   94,
   94,   94,   94,   94,   94,    8,    9,   10,   51,   51,
   45,   46,    0,   50,   69,    0,   12,   13,   34,   35,
    0,    0,   34,   34,   34,   34,   34,   34,   34,   34,
   34,   34,   68,    0,    8,    9,   98,    0,    0,   51,
    8,    9,   10,    0,    0,   12,   13,    0,    0,    0,
   42,   42,   42,   42,   42,   42,    0,    0,   42,   42,
    0,   46,   46,   46,   46,   46,   46,    0,    0,   46,
   46,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   47,   47,
   47,   47,   47,   47,   66,   66,   47,   47,   49,   49,
   49,   49,   49,   49,    0,    0,   49,   49,    0,    0,
    0,    0,    0,    0,    0,    0,   52,    0,    0,   52,
    0,   52,   52,    0,   48,   48,   48,   48,   48,   48,
    0,    0,   48,   48,   67,   67,    0,   52,   52,    0,
   52,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   53,    0,    0,   53,    0,   53,   53,    0,
    0,   50,   50,   50,   50,   50,   50,    0,    0,   50,
   50,   52,   52,   53,   53,    0,   53,   54,    0,    0,
   54,    0,   54,   54,    0,    0,    0,   51,   51,   51,
   51,   51,   51,    0,   69,   51,   51,    0,   54,   54,
   55,   54,   52,   55,    0,   55,   55,   53,   53,   64,
    0,   64,   64,   56,    0,    0,   56,    0,   56,   56,
   57,   55,   55,   57,   55,   57,   57,   64,    0,    0,
    0,    0,   54,   54,   56,   56,    0,   56,   53,   58,
    0,   57,   58,    0,   58,   58,   59,    0,    0,   59,
    0,   59,   59,    0,    0,   55,   55,    0,    0,   60,
   58,   64,   60,   54,   60,   60,    0,   59,   56,   56,
    0,    0,    0,    0,    0,   57,   57,    0,    0,   61,
   60,    0,   61,    0,   61,   61,   55,   62,    0,   62,
   62,    0,   64,    0,   58,   58,    0,    0,    0,   56,
   61,   59,   59,    0,    0,   62,   57,    0,    0,   63,
    0,   63,   63,    0,   60,   60,    0,    0,    0,   65,
    0,   65,   65,    0,    0,   58,    0,   63,    0,    0,
    0,    0,   59,    0,   61,   61,    0,   65,    0,   62,
   62,    0,    0,    0,    0,   60,    0,    0,    0,    0,
   52,   52,   52,   52,   52,   52,    0,    0,    0,    0,
    0,   63,   63,    0,    0,   61,    0,    0,    0,    0,
   62,   65,    0,    0,   21,    0,    0,    0,   21,   30,
   31,    0,    0,    0,    0,    0,   53,   53,   53,   53,
   53,   53,   63,    0,    0,    0,    0,    0,    0,    0,
   21,    0,   65,   61,   62,   63,    0,    0,    0,    0,
    0,   54,   54,   54,   54,   54,   54,   21,    0,    0,
    0,    0,    0,    0,    0,   21,    0,    0,    0,    0,
    0,    0,    0,    0,   55,   55,   55,   55,   55,   55,
   64,   64,    0,    0,    0,    0,    0,   56,   56,   56,
   56,   56,   56,    0,   57,   57,    0,    0,   57,   57,
    0,    0,    0,    0,   21,    0,    0,    0,    0,    0,
    0,    0,   21,   58,   58,    0,    0,   58,   58,    0,
   59,   59,    0,    0,   59,   59,    0,    0,    0,    0,
    0,    0,    0,   60,   60,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   61,   61,    0,    0,    0,   62,   62,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   63,   63,    0,    0,    0,    0,    0,    0,    0,    0,
   65,   65,
};
static const YYINT yycheck[] = {                         37,
   38,   59,   44,   41,   42,   43,   44,   45,  260,   47,
   37,   38,   40,   40,   60,   42,   43,   43,   45,   45,
   47,   59,   60,   61,   62,   43,   43,  269,   40,   61,
   40,   61,   59,   60,   61,   62,   59,   37,   38,   37,
   40,   59,   59,   43,   42,   45,   60,   47,   62,   47,
   41,   93,   43,   44,   38,   93,   94,   40,   94,   59,
   60,   61,   62,   40,  124,   37,   38,   94,   59,   41,
   42,   43,   44,   45,  273,   47,    7,   38,  280,  281,
   41,   91,   43,   44,   45,  272,  124,   59,   60,   41,
   62,   91,   44,   41,   94,  276,  277,  124,   59,   60,
  269,   62,   93,  269,   38,   41,   42,   41,  278,   43,
   44,   45,   41,   41,   38,   43,   44,   41,  123,   50,
   44,   93,   94,  269,  124,   59,   60,   58,   62,   97,
  269,   59,   93,   94,   91,   59,   60,  105,   62,   41,
   38,   43,   44,   41,  112,   43,   44,   45,   39,   40,
   47,   48,  124,   41,   93,   43,   44,   59,   91,   93,
   94,   59,   60,  124,   62,   93,   97,   42,  269,   93,
   94,   59,  269,   93,  105,  125,   91,   38,   43,   42,
   41,  269,   93,   44,   33,   59,   43,   44,   45,   46,
  124,   93,   52,  105,   53,   93,   94,   55,   59,   60,
  124,   62,   54,   38,   96,   93,   41,   -1,   56,   44,
   -1,   -1,   41,   -1,   43,   44,   -1,   -1,   -1,   -1,
   -1,   -1,  280,  281,   59,   60,  124,   62,  274,   86,
   59,   -1,   93,   94,  272,  273,  274,  275,  276,  277,
   -1,   -1,  280,  281,   -1,  272,  273,  274,  275,  276,
  277,  278,  279,  280,  281,  267,  268,  269,   93,   94,
  274,  275,   -1,  124,   93,   -1,  278,  279,  278,  279,
   -1,   -1,  272,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  273,   -1,  267,  268,  269,   -1,   -1,  124,
  267,  268,  269,   -1,   -1,  278,  279,   -1,   -1,   -1,
  272,  273,  274,  275,  276,  277,   -1,   -1,  280,  281,
   -1,  272,  273,  274,  275,  276,  277,   -1,   -1,  280,
  281,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,  273,
  274,  275,  276,  277,  272,  273,  280,  281,  272,  273,
  274,  275,  276,  277,   -1,   -1,  280,  281,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   38,   -1,   -1,   41,
   -1,   43,   44,   -1,  272,  273,  274,  275,  276,  277,
   -1,   -1,  280,  281,  272,  273,   -1,   59,   60,   -1,
   62,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   38,   -1,   -1,   41,   -1,   43,   44,   -1,
   -1,  272,  273,  274,  275,  276,  277,   -1,   -1,  280,
  281,   93,   94,   59,   60,   -1,   62,   38,   -1,   -1,
   41,   -1,   43,   44,   -1,   -1,   -1,  272,  273,  274,
  275,  276,  277,   -1,  273,  280,  281,   -1,   59,   60,
   38,   62,  124,   41,   -1,   43,   44,   93,   94,   41,
   -1,   43,   44,   38,   -1,   -1,   41,   -1,   43,   44,
   38,   59,   60,   41,   62,   43,   44,   59,   -1,   -1,
   -1,   -1,   93,   94,   59,   60,   -1,   62,  124,   38,
   -1,   59,   41,   -1,   43,   44,   38,   -1,   -1,   41,
   -1,   43,   44,   -1,   -1,   93,   94,   -1,   -1,   38,
   59,   93,   41,  124,   43,   44,   -1,   59,   93,   94,
   -1,   -1,   -1,   -1,   -1,   93,   94,   -1,   -1,   38,
   59,   -1,   41,   -1,   43,   44,  124,   41,   -1,   43,
   44,   -1,  124,   -1,   93,   94,   -1,   -1,   -1,  124,
   59,   93,   94,   -1,   -1,   59,  124,   -1,   -1,   41,
   -1,   43,   44,   -1,   93,   94,   -1,   -1,   -1,   41,
   -1,   43,   44,   -1,   -1,  124,   -1,   59,   -1,   -1,
   -1,   -1,  124,   -1,   93,   94,   -1,   59,   -1,   93,
   94,   -1,   -1,   -1,   -1,  124,   -1,   -1,   -1,   -1,
  272,  273,  274,  275,  276,  277,   -1,   -1,   -1,   -1,
   -1,   93,   94,   -1,   -1,  124,   -1,   -1,   -1,   -1,
  124,   93,   -1,   -1,    7,   -1,   -1,   -1,   11,   12,
   13,   -1,   -1,   -1,   -1,   -1,  272,  273,  274,  275,
  276,  277,  124,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   33,   -1,  124,   36,   37,   38,   -1,   -1,   -1,   -1,
   -1,  272,  273,  274,  275,  276,  277,   50,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   58,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  272,  273,  274,  275,  276,  277,
  272,  273,   -1,   -1,   -1,   -1,   -1,  272,  273,  274,
  275,  276,  277,   -1,  272,  273,   -1,   -1,  276,  277,
   -1,   -1,   -1,   -1,   97,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  105,  272,  273,   -1,   -1,  276,  277,   -1,
  272,  273,   -1,   -1,  276,  277,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  272,  273,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  272,  273,   -1,   -1,   -1,  272,  273,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  272,  273,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 281
#define YYUNDFTOKEN 325
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INT","VOID","FLOAT","FOR","WHILE",
"DO","IF","ELSE","RETURN","CONST_Q","CONST_INT","CONST_FLOAT","IDENTIFIER",
"STRING","CONST","AND_OP","OR_OP","LE_OP","GE_OP","EQ_OP","NE_OP","INC","DEC",
"LEFT_OP","RIGHT_OP",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : optimizer_start",
"optimizer_start : optimization1",
"$$1 :",
"optimization1 : FOR '(' IDENTIFIER $$1 '=' assignment_expression ';' IDENTIFIER comp_op shift_expression ';' IDENTIFIER INC ')' '{' IDENTIFIER '[' IDENTIFIER ']' assignment_operator optimization1_1 ';' '}'",
"optimization1_1 : IDENTIFIER '[' IDENTIFIER ']' '*' primary_expression",
"optimization1_1 : IDENTIFIER '[' IDENTIFIER ']'",
"optimization1_1 : primary_expression '*' IDENTIFIER '[' IDENTIFIER ']'",
"optimization1_1 : optimization1_1 '+' optimization1_1",
"optimization1_1 : assignment_expression",
"rule11 : FOR '(' IDENTIFIER '=' assignment_expression ';' IDENTIFIER comp_op shift_expression ';' IDENTIFIER INC ')' '{' IDENTIFIER '[' IDENTIFIER ']' assignment_operator IDENTIFIER '[' IDENTIFIER ']' sscale ';' '}'",
"sscale : '*' primary_expression",
"sscale :",
"comp_op : LE_OP",
"comp_op : '<'",
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
"$$2 :",
"iteration_statement : WHILE $$2 '(' expression ')' compound_statement",
"iteration_statement : FOR '(' expression_statement expression_statement expression ')' compound_statement",
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
"assignment_expression : logical_or_expression",
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
#line 980 "grammar/c_syn.y"

int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
#line 559 "y.tab.c"

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
case 2:
#line 65 "grammar/c_syn.y"
	{index_sentry = yystack.l_mark[0].vv.sentry;}
break;
case 3:
#line 71 "grammar/c_syn.y"
	{
			if(index_sentry != yystack.l_mark[-11].vv.sentry || index_sentry != yystack.l_mark[-15].vv.sentry){
				perror("[-] loop doesn't follow optimization crits \n");
				return -1234;
			}
			char *res;
			int len ;
			if(yystack.l_mark[-2].vv.type == 1){
				if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-7].vv.sentry && yystack.l_mark[-2].vv.index_sentry != 0 && yystack.l_mark[-2].vv.index_sentry == index_sentry ){
					/*scaling....*/
					perror("Scaling optimization \n");
					len = strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-13].vv.string_exp)+strlen(yystack.l_mark[-2].vv.right)+strlen(yystack.l_mark[-2].vv.left)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",yystack.l_mark[-13].vv.string_exp,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-2].vv.right,yystack.l_mark[-2].vv.left);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != 0 && yystack.l_mark[-2].vv.index_sentry != index_sentry){
					perror("init_vec 1 \n");
					len = strlen(yystack.l_mark[-13].vv.string_exp)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-7].vv.string_val)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[-2].vv.right)+45;
					perror("strlen done\n");
					res = malloc(len);
					memset(res,0,len);
					perror("malloc done\n");
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",yystack.l_mark[-13].vv.string_exp,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-7].vv.string_val,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-2].vv.left,yystack.l_mark[-2].vv.right);
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
			if(yystack.l_mark[-2].vv.type == 2){
				perror("IDENTIFIER '[' IDENTIFIER ']'\n");
				if(yystack.l_mark[-2].vv.vec != yystack.l_mark[-7].vv.sentry && yystack.l_mark[-2].vv.index_sentry != 0 && yystack.l_mark[-2].vv.index_sentry == index_sentry ){
					/*scopy*/
					perror("Scopy optimization \n");
					len = strlen(yystack.l_mark[-13].vv.string_exp)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-2].vv.vec->name)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-7].vv.string_val)+strlen(yystack.l_mark[-17].vv.string_exp)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_scopy((const int)%s-%s+1,%s+%s,1,%s+%s,1);",yystack.l_mark[-13].vv.string_exp,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-2].vv.vec->name,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-7].vv.string_val,yystack.l_mark[-17].vv.string_exp);
					write_res(res,len);
					free(res);
					return 1333;

				}
				else if( yystack.l_mark[-2].vv.index_sentry != 0 && yystack.l_mark[-2].vv.index_sentry != index_sentry){
					perror("init_vec2  \n");
					len = strlen(yystack.l_mark[-13].vv.string_exp)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-7].vv.string_val)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-2].vv.left)+45;
					res = malloc(len);
					memset(res,0,len);
					perror(yystack.l_mark[-2].vv.left);
					snprintf(res,len,"init_fvec(%s-%s+1,%s+%s,(const float)%s);",yystack.l_mark[-13].vv.string_exp,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-7].vv.string_val,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-2].vv.left);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else{
					perror("init dependece 2 \n");
					return -123;
				}

			}
			else if(yystack.l_mark[-2].vv.type == 3){
				if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-7].vv.sentry && yystack.l_mark[-2].vv.index_sentry != 0 && yystack.l_mark[-2].vv.index_sentry == index_sentry ){
					/*scaling....*/
					perror("Scaling optimization 3\n");
					len = 100;/*strlen($6.string_exp)+strlen($10.string_exp)+strlen($21.right)+strlen($21.left)+50;*/
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",yystack.l_mark[-13].vv.string_exp,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-2].vv.left,yystack.l_mark[-2].vv.vec->name);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != 0 && yystack.l_mark[-2].vv.index_sentry != index_sentry){
					perror("init_vec 3 \n");
					len = strlen(yystack.l_mark[-13].vv.string_exp)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-7].vv.string_val)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[-2].vv.right)+45;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",yystack.l_mark[-13].vv.string_exp,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-7].vv.string_val,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-2].vv.right,yystack.l_mark[-2].vv.left);
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
			else if(yystack.l_mark[-2].vv.type == 5){
					perror("init_vec 5 \n");
					len = strlen(yystack.l_mark[-13].vv.string_exp)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-7].vv.string_val)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-2].vv.left)+45;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s);",yystack.l_mark[-13].vv.string_exp,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-7].vv.string_val,yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-2].vv.left);
					perror("sprintf done\n");
					write_res(res,len);
					free(res);
					return 1333;
			}
			index_sentry = 0;
		}
break;
case 4:
#line 184 "grammar/c_syn.y"
	{
			yyval.vv.type = 1;
			yyval.vv.depth = 0;
			yyval.vv.index_dep = 0;
			if(yystack.l_mark[-3].vv.sentry == index_sentry){
				yyval.vv.index_dep = 1;
			}
			yyval.vv.exp_dep = dep_exist(index_sentry,yystack.l_mark[0].vv.list);
			if(yyval.vv.exp_dep == 1){
				perror("[-] multplication dependence exist \n");
				return -1233;
			}
			int left_len = strlen(yystack.l_mark[-5].vv.string_val)+strlen(yystack.l_mark[-3].vv.string_val);
			yyval.vv.left = malloc(left_len+3);
			snprintf(yyval.vv.left,left_len,"%s[%s]",yystack.l_mark[-5].vv.string_val,yystack.l_mark[-3].vv.string_val);

			yyval.vv.right = yystack.l_mark[0].vv.string_exp;
			yyval.vv.vec = yystack.l_mark[-5].vv.sentry;
			yyval.vv.index_sentry = yystack.l_mark[-3].vv.sentry;

		}
break;
case 5:
#line 205 "grammar/c_syn.y"
	{
			yyval.vv.type = 2;
			yyval.vv.depth = 0;

			yyval.vv.vec = yystack.l_mark[-3].vv.sentry;
			yyval.vv.index_sentry = yystack.l_mark[-1].vv.sentry;


			int left_len = strlen(yystack.l_mark[-3].vv.string_val)+strlen(yystack.l_mark[-1].vv.string_val)+3;
			printf("left len : %d\n",left_len);
			yyval.vv.left = malloc(left_len);
			memset(yyval.vv.left,0,left_len);
			snprintf(yyval.vv.left,left_len,"%s[%s]",yystack.l_mark[-3].vv.string_val,yystack.l_mark[-1].vv.string_val);
			printf("left len : %d\n",left_len);
		}
break;
case 6:
#line 220 "grammar/c_syn.y"
	{

			perror("primary_expression '*' IDENTIFIER '[' IDENTIFIER ']' \n");
			yyval.vv.type = 3;
			yyval.vv.depth = 0;
			yyval.vv.index_dep = 0;
			if(yystack.l_mark[-3].vv.sentry == index_sentry){
				yyval.vv.index_dep = 1;
			}
			yyval.vv.exp_dep = dep_exist(index_sentry,yystack.l_mark[-5].vv.list);
			if(yyval.vv.exp_dep == 1){
				perror("[-] left multplication dependence exist \n");
				return -1233;
			}
			int right_len = strlen(yystack.l_mark[-3].vv.string_val)+strlen(yystack.l_mark[-1].vv.string_val)+3;
			yyval.vv.right = malloc(right_len);
			memset(yyval.vv.right,0,right_len);
			snprintf(yyval.vv.right,right_len,"%s[%s]",yystack.l_mark[-3].vv.string_val,yystack.l_mark[-1].vv.string_val);
			perror("passed sprintf\n");
			yyval.vv.left = yystack.l_mark[-5].vv.string_val;
			yyval.vv.vec = yystack.l_mark[-3].vv.sentry;
			yyval.vv.index_sentry = yystack.l_mark[-1].vv.sentry;
		}
break;
case 7:
#line 243 "grammar/c_syn.y"
	{
			yyval.vv.type = 4;
			yyval.vv.depth = (yystack.l_mark[-2].vv.depth > yystack.l_mark[0].vv.depth)?yystack.l_mark[-2].vv.depth:yystack.l_mark[0].vv.depth;
			yyval.vv.depth = yyval.vv.depth+1;
			if(yyval.vv.depth > 1){
				perror("depth is greater than 1");
				return -144;
			}
			perror("optimization1_1 '+' optimization1_1 \n");

		}
break;
case 8:
#line 254 "grammar/c_syn.y"
	{
			perror("Logical or expr \n");
			yyval.vv.type = 5;
			yyval.vv.depth = 0;

			int op = dep_exist(index_sentry,yystack.l_mark[0].vv.list);
			if(op == 1){
				perror("init logical expr failed\n");
				return -123;
			}

			yyval.vv.left = yystack.l_mark[0].vv.string_exp;
		}
break;
case 9:
#line 270 "grammar/c_syn.y"
	{
 			/* $3.sentry; $8.sentry; $12.sentry; $14.sentry; $17.sentry; $19.sentry;*/
			symbol_p t = yystack.l_mark[-11].vv.sentry;
			symbol_p z =  yystack.l_mark[-6].vv.sentry;
			char *res;
			int assig_len = strlen(yystack.l_mark[-21].vv.string_exp);
			int shift_len = strlen(yystack.l_mark[-17].vv.string_exp);
			int index_len = strlen(yystack.l_mark[-23].vv.string_val);
			int dest_len = strlen(yystack.l_mark[-11].vv.string_val);
			int orig_len = strlen(yystack.l_mark[-6].vv.string_val);
			if( yystack.l_mark[-2].vv.type == 1){
				if(z == t){
					perror("[-] Copying vec to it self is not supported yet\n");
					return -33;
				}
				if( t != 0 && z != 0){
					if(!(t->glob_type == FLOAT && z->glob_type == FLOAT)){
						perror("[-] TYPE is not supported yet ");/*: %d",t->glob_type);*/
						return -33;
					}

				}
				printf("EXPR : %s\n",yystack.l_mark[-21].vv.string_exp);
				int total_len = assig_len+shift_len+index_len+dest_len+orig_len+32;
				if( yystack.l_mark[-23].vv.sentry == yystack.l_mark[-15].vv.sentry && yystack.l_mark[-23].vv.sentry == yystack.l_mark[-19].vv.sentry && yystack.l_mark[-23].vv.sentry == yystack.l_mark[-9].vv.sentry && yystack.l_mark[-23].vv.sentry == yystack.l_mark[-4].vv.sentry){
					/*cblas_ccopy(const int N, const void *X, const int incX,void *Y, const int incY);*/
					res = malloc(total_len);
					memset(res,0,total_len);
					if(yystack.l_mark[-18].zz.op_type == 0)
						snprintf(res,total_len,"cblas_scopy(%s-%s+1,(%s+%s),%s,(%s+%s),%s);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-6].vv.string_val,"1",yystack.l_mark[-11].vv.string_val,yystack.l_mark[-21].vv.string_exp,"1");
					else if(yystack.l_mark[-18].zz.op_type == 1)
						snprintf(res,total_len-2,"cblas_scopy(%s-%s,(%s+%s),%s,(%s+%s),%s);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-6].vv.string_val,"1",yystack.l_mark[-11].vv.string_val,yystack.l_mark[-21].vv.string_exp,"1");

					printf("\n---------------\nFunc : \n %s \n---------------\n",res);
					perror("[+] Optimization copy\n");
					FILE* f = fopen(OPTIMIZER_FILE,"w");
					fprintf(f,"%s",res);
					fclose(f);
					globalData.symbol->bytes_count = total_len;
					free(res);
					perror("Optimization 93");
					return 1333;
				}
				else if (yystack.l_mark[-4].vv.sentry != yystack.l_mark[-23].vv.sentry && yystack.l_mark[-6].vv.sentry != yystack.l_mark[-23].vv.sentry ){

					/* init_vec(t,N,expr);*/
					int lenn = assig_len*2+shift_len+dest_len+orig_len+strlen(yystack.l_mark[-4].vv.string_val)+35;
					res = malloc(lenn);
					memset(res,0,lenn);
					if(yystack.l_mark[-18].zz.op_type == 0)
						snprintf(res,lenn,"init_fvec(%s-%s+1,(float*)(%s+%s),%s[%s]);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-11].vv.string_val,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-6].vv.string_val,yystack.l_mark[-4].vv.string_val);
					else if(yystack.l_mark[-18].zz.op_type == 1)
						snprintf(res,lenn-2,"init_fvec(%s-%s,(float*)(%s+%s),%s[%s]);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-11].vv.string_val,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-6].vv.string_val,yystack.l_mark[-4].vv.string_val);

					FILE* f = fopen(OPTIMIZER_FILE,"w");
					fprintf(f,"%s",res);
					fclose(f);
					globalData.symbol->bytes_count = lenn;
					free(res);
					perror("Optimization 111");
					return 1333;
				}
				else{
					printf("[-] init dependence !\n");
					return -1;
				}
 			}
 			else if(yystack.l_mark[-2].vv.type == 2){

 				node_t* head = yystack.l_mark[-2].vv.list;
				printf("-------> head : %p\n",head);
				while(head != 0 && head->val != yystack.l_mark[-23].vv.sentry){
					printf("-------> %p\n",head->val);
					head = head->next;
				}
				printf("-------> sentry : %p\n",yystack.l_mark[-23].vv.sentry);
				if(head  != 0){
 					perror("[-] multiplication with dependence\n");
 					return -1;
 				}

 				if(z != t){
 					if(yystack.l_mark[-4].vv.sentry != yystack.l_mark[-23].vv.sentry){
						/* init_vec(t,N,expr);*/
						int lenn = assig_len*2+shift_len+dest_len+orig_len+strlen(yystack.l_mark[-4].vv.string_val)+strlen(yystack.l_mark[-2].vv.string_val)+100;
						res = malloc(lenn);
						memset(res,0,lenn);
						if(yystack.l_mark[-18].zz.op_type == 0)
							snprintf(res,lenn,"init_fvec(%s-%s+1,(float*)(%s+%s),%s[%s]*%s);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-11].vv.string_val,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-6].vv.string_val,yystack.l_mark[-4].vv.string_val,yystack.l_mark[-2].vv.string_exp);
						else if(yystack.l_mark[-18].zz.op_type == 1)
							snprintf(res,lenn-2,"init_fvec(%s-%s,(float*)(%s+%s),%s[%s]*%s);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-11].vv.string_val,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-6].vv.string_val,yystack.l_mark[-4].vv.string_val,yystack.l_mark[-2].vv.string_exp);
						FILE* f = fopen(OPTIMIZER_FILE,"w");
						fprintf(f,"%s",res);
						fclose(f);
						globalData.symbol->bytes_count = lenn;
						free(res);
						perror("Optimization 147");
						return 1333;
					}
					else{
						perror("[-] init_vec dependecy found\n");
						return -1;
					}
 				}

				perror("[+] optimization found sscale\n");
				/*void cblas_sscal(const int size, const float alpha, float *X, const int incX);*/
				int total_len = 60+strlen(yystack.l_mark[-21].vv.string_exp)+strlen(yystack.l_mark[-17].vv.string_exp)+strlen(yystack.l_mark[-11].vv.string_val)+strlen(yystack.l_mark[-2].vv.string_exp);
				char *res = malloc(total_len);
				if(yystack.l_mark[-18].zz.op_type == 0)
					snprintf(res,total_len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-2].vv.string_exp,yystack.l_mark[-11].vv.string_val);
				else if(yystack.l_mark[-18].zz.op_type == 1)
					snprintf(res,total_len-2,"cblas_sscal((const int)%s-%s,(const float)%s,%s,1);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-2].vv.string_exp,yystack.l_mark[-11].vv.string_val);


				printf("\n---------------\nFunc : \n %s \n---------------\n",res);
				FILE* f = fopen(OPTIMIZER_FILE,"w");
				fprintf(f,"%s",res);
				fclose(f);
				globalData.symbol->bytes_count = total_len;
				free(res);
				return 1333;
				perror("Optimization 173");
 			}
             	}
break;
case 10:
#line 395 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
		yyval.vv.type = 2;
	}
break;
case 11:
#line 400 "grammar/c_syn.y"
	{
		yyval.vv.type = 1;
	}
break;
case 12:
#line 405 "grammar/c_syn.y"
	{
	yyval.zz.op_type = 0;
}
break;
case 13:
#line 408 "grammar/c_syn.y"
	{
	 	yyval.zz.op_type = 1;
	}
break;
case 14:
#line 413 "grammar/c_syn.y"
	{

	}
break;
case 15:
#line 416 "grammar/c_syn.y"
	{

	}
break;
case 16:
#line 419 "grammar/c_syn.y"
	{

	}
break;
case 17:
#line 422 "grammar/c_syn.y"
	{


	}
break;
case 18:
#line 432 "grammar/c_syn.y"
	{
	}
break;
case 19:
#line 434 "grammar/c_syn.y"
	{

	}
break;
case 20:
#line 439 "grammar/c_syn.y"
	{
	  }
break;
case 21:
#line 441 "grammar/c_syn.y"
	{
	}
break;
case 22:
#line 443 "grammar/c_syn.y"
	{

	}
break;
case 23:
#line 446 "grammar/c_syn.y"
	{
	}
break;
case 24:
#line 450 "grammar/c_syn.y"
	{

	}
break;
case 25:
#line 453 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
		/*print_list($$.list);*/
	}
break;
case 26:
#line 462 "grammar/c_syn.y"
	{

	}
break;
case 27:
#line 465 "grammar/c_syn.y"
	{

	}
break;
case 28:
#line 469 "grammar/c_syn.y"
	{}
break;
case 29:
#line 469 "grammar/c_syn.y"
	{}
break;
case 30:
#line 471 "grammar/c_syn.y"
	{
		return 1333;
	}
break;
case 31:
#line 475 "grammar/c_syn.y"
	{for_depth_counter_var++;}
break;
case 32:
#line 480 "grammar/c_syn.y"
	{
        		yyval.vv.list = yystack.l_mark[0].vv.list;
 	}
break;
case 33:
#line 483 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

	}
break;
case 34:
#line 489 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;

	}
break;
case 35:
#line 494 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-3].vv.list,yystack.l_mark[-1].vv.list);

		int len1 = strlen(yystack.l_mark[-3].vv.string_exp);
		int len2 = strlen(yystack.l_mark[-1].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s[%s]",yystack.l_mark[-3].vv.string_exp,yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-3].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);
	}
break;
case 36:
#line 504 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-2].vv.list;

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+3);
		snprintf(yyval.vv.string_exp,len1+3, "%s()",yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);

	}
break;
case 37:
#line 513 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;

		int len1 = strlen(yystack.l_mark[-1].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+3);
		snprintf(yyval.vv.string_exp,len1+3, "%s++",yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);
	}
break;
case 38:
#line 521 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;

		int len1 = strlen(yystack.l_mark[-1].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+3);
		snprintf(yyval.vv.string_exp,len1+3, "%s--",yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);
	}
break;
case 39:
#line 531 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
			yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;

	}
break;
case 40:
#line 536 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;

			int len2 = strlen(yystack.l_mark[0].vv.string_exp);
			yyval.vv.string_exp = malloc(len2+3);
			snprintf(yyval.vv.string_exp,len2+3, "++%s",yystack.l_mark[0].vv.string_exp);
			free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 41:
#line 544 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;

			int len2 = strlen(yystack.l_mark[0].vv.string_exp);
			yyval.vv.string_exp = malloc(len2+3);
			snprintf(yyval.vv.string_exp,len2+3, "++%s",yystack.l_mark[0].vv.string_exp);
			free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 42:
#line 554 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
			yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 43:
#line 558 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s*%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 44:
#line 568 "grammar/c_syn.y"
	{
		yyval.vv.list =concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s/%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 45:
#line 578 "grammar/c_syn.y"
	{
		yyval.vv.list  = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+5, "%s %% %s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 46:
#line 589 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 47:
#line 593 "grammar/c_syn.y"
	{
		yyval.vv.list  = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+2, "%s+%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 48:
#line 604 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+2, "%s-%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 49:
#line 617 "grammar/c_syn.y"
	{
	yyval.vv.list = yystack.l_mark[0].vv.list;
	yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 50:
#line 621 "grammar/c_syn.y"
	{
		yyval.vv.list  = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s<<%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 51:
#line 632 "grammar/c_syn.y"
	{
		yyval.vv.list  = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s>>%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 52:
#line 645 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 53:
#line 649 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s<%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 54:
#line 660 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s>%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 55:
#line 670 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s<=%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 56:
#line 680 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s>=%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 57:
#line 692 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 58:
#line 696 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s==%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 59:
#line 706 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s!=%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 60:
#line 718 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 61:
#line 722 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+2, "%s&%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 62:
#line 734 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 63:
#line 738 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+2, "%s^%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 64:
#line 750 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 65:
#line 754 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+2, "%s|%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 66:
#line 766 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 67:
#line 770 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s&&%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 68:
#line 781 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;

		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 69:
#line 786 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s||%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 70:
#line 800 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 71:
#line 804 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+2);
		snprintf(yyval.vv.string_exp,len1+len2+2, "%s=%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 72:
#line 817 "grammar/c_syn.y"
	{

	}
break;
case 73:
#line 824 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 74:
#line 827 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-1].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 75:
#line 838 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 76:
#line 846 "grammar/c_syn.y"
	{

	}
break;
case 77:
#line 853 "grammar/c_syn.y"
	{

	}
break;
case 78:
#line 856 "grammar/c_syn.y"
	{

	}
break;
case 79:
#line 859 "grammar/c_syn.y"
	{

	}
break;
case 80:
#line 865 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 81:
#line 868 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
	}
break;
case 82:
#line 875 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 83:
#line 878 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
	}
break;
case 84:
#line 886 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);
	}
break;
case 85:
#line 889 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 86:
#line 896 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);
	}
break;
case 87:
#line 899 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-3].vv.list;
        }
break;
case 88:
#line 910 "grammar/c_syn.y"
	{

	}
break;
case 89:
#line 914 "grammar/c_syn.y"
	{


	}
break;
case 90:
#line 922 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 91:
#line 925 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 92:
#line 930 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 93:
#line 933 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
	}
break;
case 94:
#line 939 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);

		char * curr_var_name_tmp = yystack.l_mark[0].vv.string_val;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+1);
		snprintf(yyval.vv.string_exp,len+1, "%s",curr_var_name_tmp);
	}
break;
case 95:
#line 947 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);
		char * curr_var_name_tmp = yystack.l_mark[0].vv.string_val;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+1);
		snprintf(yyval.vv.string_exp,len+1, "%s",curr_var_name_tmp);
	}
break;
case 96:
#line 954 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);

		char * curr_var_name_tmp = yystack.l_mark[0].vv.string_val;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+1);
		snprintf(yyval.vv.string_exp,len+1, "%s",curr_var_name_tmp);
		float a = strtof(curr_var_name_tmp, NULL);
	}
break;
case 97:
#line 963 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;

		char * curr_var_name_tmp = yystack.l_mark[-1].vv.string_exp;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+3);
		snprintf(yyval.vv.string_exp,len+4, "(%s)",yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);

	}
break;
#line 1835 "y.tab.c"
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
