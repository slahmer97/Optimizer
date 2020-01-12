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
	symbol_p op_index;
	symbol_p inc_index;
	char * assig_exp;
	char * sh_exp;
	int do_gen = 1;
    /*int yydebug = 1;*/
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 19 "grammar/c_syn.y"
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
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 85 "y.tab.c"

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
    0,   21,   22,   22,   24,   25,   23,   26,   27,   28,
   29,   30,   20,   12,   12,   12,   12,   12,   19,   19,
    3,    3,    4,    4,    4,    4,    4,   10,   10,   10,
    5,    5,    5,    5,    6,    6,    6,    7,    7,    7,
    8,    8,    8,    8,    8,    9,    9,    9,   13,   13,
   14,   14,   15,   15,   17,   17,   16,   16,   11,   11,
   18,    1,    1,    1,    2,    2,    2,    2,
};
static const YYINT yylen[] = {                            2,
    1,    0,    1,    1,    1,   25,   22,    0,    0,    0,
    0,    0,   21,    6,    4,    6,    3,    1,    1,    1,
    1,    3,    1,    4,    3,    2,    2,    1,    2,    2,
    1,    3,    3,    3,    1,    3,    3,    1,    3,    3,
    1,    3,    3,    3,    3,    1,    3,    3,    1,    3,
    1,    3,    1,    3,    1,    3,    1,    3,    1,    3,
    1,    1,    1,    1,    1,    1,    1,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,    8,    0,    0,   66,   67,   65,
    0,    0,    0,   23,    0,    0,    0,    0,    0,    0,
    0,    9,    0,    0,    0,    0,    0,    0,   21,   29,
   30,    0,    0,   26,   27,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   61,    0,
    0,    0,    0,    0,    0,    0,   68,    0,   25,    0,
   33,   32,   34,    0,   31,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   60,    0,    0,    0,    0,    0,
    0,   22,   24,   10,    0,   20,   19,    0,    0,    0,
    0,   12,    0,    0,    0,    0,   63,   62,   64,    0,
    2,    0,    3,    4,    5,    0,    2,   13,    0,    2,
    0,    2,    0,    2,    0,    2,    0,    2,    0,    2,
    0,    2,    0,    2,    0,    2,    0,    2,    0,    2,
    0,    2,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   18,    0,    0,
    0,    0,    7,    0,    0,    0,    0,    0,    0,    0,
    0,    6,    0,    0,   14,   16,
};
static const YYINT yydgoto[] = {                          2,
  100,   14,   28,   15,   16,   17,   18,   19,   20,   65,
   29,  149,   23,   24,   25,   26,   27,   50,   88,    3,
  101,  102,  103,  104,  105,    6,   51,   85,   90,   93,
};
static const YYINT yysindex[] = {                      -258,
  -31,    0,    0, -249,    0,  -29,  -11,    0,    0,    0,
  -11,  -11,  -11,    0,   -9,    3,  -30, -174,  -13, -157,
  -19,    0,   14,  -39,  -65, -208, -193,  -14,    0,    0,
    0,   49,  -11,    0,    0,  -11,  -11,  -11,  -11,  -11,
  -11,  -11,  -11,  -11,  -11,  -11,  -11,  -11,    0,  -11,
   38,  -11,  -11,  -11,  -11,  -11,    0,  -11,    0,  -18,
    0,    0,    0,    3,    0,    3,  -30,  -30, -174, -174,
 -174, -174,  -13,  -13,    0, -168, -157,   14,  -39, -193,
  -65,    0,    0,    0,  -57,    0,    0,  -11, -174,   45,
 -160,    0, -165,   83,    5,  -90,    0,    0,    0, -134,
    0,   20,    0,    0,    0,  -19,    0,    0, -114,    0,
   82,    0,  -92,    0,   86,    0,  124,    0,  -82,    0,
   97,    0,  -80,    0,  100,    0,  -19,    0,  -74,    0,
  107,    0,  -66,  -64,  115,  118,  152,  -55,  -51,  119,
  128,  -19,  -49,   18,  129,  130,  181,    0,   34,  -19,
  -45,  -40,    0,   18,  -28,  137,  141,  199,  186,  221,
   -3,    0,   24,  178,    0,    0,
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
  113,    0,    0,    0,    0,    0,    0,    0,  213,    0,
    0,    0,    0,    0,    0,   15,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -26,    1,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  229,    0,   37,
    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0, -126,  256,    0,   91,  134,  106,  138,  242,  618,
   36,  144,  246,  241,  244,    0,  252,   32,    0,    0,
  693,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 825
static const YYINT yytable[] = {                         28,
   28,    1,   86,   28,   28,   28,   28,   28,    4,   28,
   65,   65,   39,   65,   40,   65,   65,  147,   65,    5,
   65,   28,   28,   28,   28,   58,   57,  147,   11,   58,
   32,    7,   65,   65,   65,   65,  165,   23,   23,   38,
   23,   49,   22,   23,   37,   23,   43,   23,   44,   36,
   57,   52,   57,   57,   53,   28,   28,   11,   54,   23,
   23,   23,   23,   11,   55,   31,   31,   65,   57,   31,
   31,   31,   31,   31,   83,   31,  154,   35,   56,   15,
   35,   33,   35,   35,   35,   75,   28,   31,   31,   59,
   31,   23,  153,   82,   23,   15,   76,   65,   35,   35,
   84,   35,   57,   91,   36,   41,   42,   36,   92,   36,
   36,   36,   94,   55,   38,   55,   55,   38,   47,   48,
   38,   31,   31,   95,   23,   36,   36,   96,   36,   64,
   66,   55,   35,   35,  106,   38,   38,  109,   38,   59,
   37,   59,   59,   37,  108,   37,   37,   37,   69,   70,
   71,   72,   31,   56,  111,   56,   56,   59,  129,   36,
   36,   37,   37,   35,   37,   55,   97,   98,   99,   38,
   38,   56,  113,  144,   67,   68,  115,   39,  117,  148,
   39,  155,  119,   39,   73,   74,  121,  123,  125,  148,
   36,   59,  127,   89,  131,   37,   37,  133,   39,   39,
   38,   39,  135,   40,  136,   56,   40,  137,  138,   40,
  139,  142,   58,  140,   58,   58,   87,  141,  143,  145,
  151,  150,  152,  156,   40,   40,   37,   40,  157,  160,
   58,  161,   39,   39,   28,   28,   28,   28,   28,   28,
  159,  154,   28,   28,  162,   65,   65,   65,   65,   65,
   65,   65,   65,   65,   65,    8,    9,   10,   40,   40,
   45,   46,  163,   39,   58,  164,   12,   13,   34,   35,
  166,   11,   23,   23,   23,   23,   23,   23,   23,   23,
   23,   23,   57,    2,    8,    9,  146,   17,   60,   40,
    8,    9,   10,   77,   79,   12,   13,  158,   78,   81,
   31,   31,   31,   31,   31,   31,   80,    0,   31,   31,
    0,   35,   35,   35,   35,   35,   35,    0,    0,   35,
   35,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   36,   36,
   36,   36,   36,   36,   55,   55,   36,   36,   38,   38,
   38,   38,   38,   38,    0,    0,   38,   38,    0,    0,
    0,    0,    0,    0,    0,    0,   41,    0,    0,   41,
    0,   41,   41,    0,   37,   37,   37,   37,   37,   37,
    0,    0,   37,   37,   56,   56,    0,   41,   41,    0,
   41,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   42,    0,    0,   42,    0,   42,   42,    0,
    0,   39,   39,   39,   39,   39,   39,    0,    0,   39,
   39,   41,   41,   42,   42,    0,   42,   43,    0,    0,
   43,    0,   43,   43,    0,    0,    0,   40,   40,   40,
   40,   40,   40,    0,   58,   40,   40,    0,   43,   43,
   44,   43,   41,   44,    0,   44,   44,   42,   42,   53,
    0,   53,   53,   45,    0,    0,   45,    0,   45,   45,
   46,   44,   44,   46,   44,   46,   46,   53,    0,    0,
    0,    0,   43,   43,   45,   45,    0,   45,   42,   47,
    0,   46,   47,    0,   47,   47,   48,    0,    0,   48,
    0,   48,   48,    0,    0,   44,   44,    0,    0,   49,
   47,   53,   49,   43,   49,   49,    0,   48,   45,   45,
    0,    0,    0,    0,    0,   46,   46,    0,    0,   50,
   49,    0,   50,    0,   50,   50,   44,   51,    0,   51,
   51,    0,   53,    0,   47,   47,    0,    0,    0,   45,
   50,   48,   48,    0,    0,   51,   46,    0,    0,   52,
    0,   52,   52,    0,   49,   49,    0,    0,    0,   54,
    0,   54,   54,    0,    0,   47,    0,   52,    0,    0,
    0,    0,   48,    0,   50,   50,    0,   54,    0,   51,
   51,    0,    0,    0,    0,   49,    0,    0,    0,    0,
   41,   41,   41,   41,   41,   41,    0,    0,    0,    0,
    0,   52,   52,    0,    0,   50,    0,    0,    0,    0,
   51,   54,    0,    0,   21,    0,    0,    0,   21,   30,
   31,    0,    0,    0,    0,    0,   42,   42,   42,   42,
   42,   42,   52,    0,    0,    0,    0,    0,    0,    0,
   21,    0,   54,   61,   62,   63,    0,    0,    0,    0,
    0,   43,   43,   43,   43,   43,   43,   21,    0,    0,
    0,    0,    0,    0,    0,   21,    0,    0,    0,    0,
    0,    0,    0,    0,   44,   44,   44,   44,   44,   44,
   53,   53,    0,    0,    0,    0,    0,   45,   45,   45,
   45,   45,   45,    0,   46,   46,    0,    0,   46,   46,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   47,   47,    0,    0,   47,   47,    0,
   48,   48,    0,    0,   48,   48,    0,    0,    0,    0,
    0,    0,    0,   49,   49,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   21,    0,   50,   50,    0,    0,    0,   51,   51,
    0,   21,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   52,   52,    0,  107,    0,    0,    0,    0,    0,  110,
   54,   54,  112,    0,  114,    0,  116,    0,  118,    0,
  120,    0,  122,    0,  124,    0,  126,    0,  128,    0,
  130,    0,  132,    0,  134,
};
static const YYINT yycheck[] = {                         37,
   38,  260,   60,   41,   42,   43,   44,   45,   40,   47,
   37,   38,   43,   40,   45,   42,   43,  144,   45,  269,
   47,   59,   60,   61,   62,   44,   41,  154,   40,   44,
   40,   61,   59,   60,   61,   62,  163,   37,   38,   37,
   40,   61,    7,   43,   42,   45,   60,   47,   62,   47,
   41,   38,   43,   44,   94,   93,   94,   40,  124,   59,
   60,   61,   62,   40,  273,   37,   38,   94,   59,   41,
   42,   43,   44,   45,   93,   47,   43,   38,  272,   43,
   41,   91,   43,   44,   45,   50,  124,   59,   60,   41,
   62,   91,   59,   58,   94,   59,   59,  124,   59,   60,
  269,   62,   93,   59,   38,  280,  281,   41,  269,   43,
   44,   45,  278,   41,   38,   43,   44,   41,  276,  277,
   44,   93,   94,   41,  124,   59,   60,  123,   62,   39,
   40,   59,   93,   94,  269,   59,   60,  106,   62,   41,
   38,   43,   44,   41,  125,   43,   44,   45,   43,   44,
   45,   46,  124,   41,  269,   43,   44,   59,  127,   93,
   94,   59,   60,  124,   62,   93,  257,  258,  259,   93,
   94,   59,   91,  142,   41,   42,  269,   38,   93,  144,
   41,  150,   59,   44,   47,   48,  269,   91,  269,  154,
  124,   93,   93,   88,  269,   93,   94,   91,   59,   60,
  124,   62,  269,   38,  269,   93,   41,   93,   91,   44,
   59,   93,   41,  269,   43,   44,  274,  269,   91,  269,
   91,   93,   42,  269,   59,   60,  124,   62,  269,   93,
   59,   91,   93,   94,  272,  273,  274,  275,  276,  277,
  269,   43,  280,  281,   59,  272,  273,  274,  275,  276,
  277,  278,  279,  280,  281,  267,  268,  269,   93,   94,
  274,  275,   42,  124,   93,  269,  278,  279,  278,  279,
   93,   59,  272,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  273,  269,  267,  268,  269,   59,   33,  124,
  267,  268,  269,   52,   54,  278,  279,  154,   53,   56,
  272,  273,  274,  275,  276,  277,   55,   -1,  280,  281,
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
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  272,  273,   -1,   -1,  276,  277,   -1,
  272,  273,   -1,   -1,  276,  277,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  272,  273,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  144,   -1,  272,  273,   -1,   -1,   -1,  272,  273,
   -1,  154,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  272,  273,   -1,  101,   -1,   -1,   -1,   -1,   -1,  107,
  272,  273,  110,   -1,  112,   -1,  114,   -1,  116,   -1,
  118,   -1,  120,   -1,  122,   -1,  124,   -1,  126,   -1,
  128,   -1,  130,   -1,  132,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 281
#define YYUNDFTOKEN 314
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
0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : optimizer_start",
"optimizer_start : optimization1",
"a :",
"level1 : level1_1",
"level1 : level1_2",
"level1_2 : vec_swap",
"vec_swap : type_specifier IDENTIFIER assignment_operator IDENTIFIER '[' IDENTIFIER ']' ';' IDENTIFIER '[' IDENTIFIER ']' assignment_operator IDENTIFIER '[' IDENTIFIER ']' ';' IDENTIFIER '[' IDENTIFIER ']' assignment_operator IDENTIFIER ';'",
"level1_1 : a a a a a a a a a a a a a a a IDENTIFIER '[' IDENTIFIER ']' assignment_operator optimization1_1 ';'",
"$$1 :",
"$$2 :",
"$$3 :",
"$$4 :",
"$$5 :",
"optimization1 : FOR '(' IDENTIFIER $$1 '=' assignment_expression $$2 ';' IDENTIFIER $$3 comp_op shift_expression $$4 ';' IDENTIFIER $$5 INC ')' '{' level1 '}'",
"optimization1_1 : IDENTIFIER '[' IDENTIFIER ']' '*' primary_expression",
"optimization1_1 : IDENTIFIER '[' IDENTIFIER ']'",
"optimization1_1 : primary_expression '*' IDENTIFIER '[' IDENTIFIER ']'",
"optimization1_1 : optimization1_1 '+' optimization1_1",
"optimization1_1 : assignment_expression",
"comp_op : LE_OP",
"comp_op : '<'",
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
"type_specifier : VOID",
"type_specifier : INT",
"type_specifier : FLOAT",
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
#line 1192 "grammar/c_syn.y"

int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
#line 549 "y.tab.c"

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
case 6:
#line 86 "grammar/c_syn.y"
	{
	   		if(yystack.l_mark[-23].vv.sentry == yystack.l_mark[-1].vv.sentry && index_sentry == yystack.l_mark[-19].vv.sentry && index_sentry == yystack.l_mark[-9].vv.sentry &&
	   		   yystack.l_mark[-14].vv.sentry == index_sentry && yystack.l_mark[-4].vv.sentry == index_sentry && yystack.l_mark[-16].vv.sentry != yystack.l_mark[-6].vv.sentry &&
	   		   yystack.l_mark[-21].vv.sentry == yystack.l_mark[-16].vv.sentry && yystack.l_mark[-11].vv.sentry == yystack.l_mark[-6].vv.sentry ) {
				void cblas_sswap(const int size, float *X, const int incX,float *Y, const int incY);

				int len = strlen(sh_exp)+strlen(assig_exp)+strlen(yystack.l_mark[-16].vv.string_val)+
				      strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)+strlen(assig_exp)+50;
				char* res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"cblas_sswap((const int)%s-%s+1,(%s+%s),1,(%s+%s),1);",sh_exp,assig_exp,yystack.l_mark[-16].vv.string_val,assig_exp,yystack.l_mark[-6].vv.string_val,assig_exp);
				write_res(res,len);
				free(res);
				return 1333;
	   		   }
	   		   else{
						perror("Swap form without conditions!\n");
	   		   }
	   }
break;
case 7:
#line 110 "grammar/c_syn.y"
	{
			if(index_sentry != op_index || index_sentry != inc_index){
				perror("[-] loop doesn't follow optimization crits \n");
				return -1234;
			}
			char *res,*res1,*res2;
			int len ;
			int len2;
			if(yystack.l_mark[-1].vv.type == 1){
				if(yystack.l_mark[-1].vv.vec == yystack.l_mark[-6].vv.sentry && yystack.l_mark[-1].vv.index_sentry != 0 && yystack.l_mark[-1].vv.index_sentry == index_sentry ){
					/*scaling....*/
					perror("Scaling optimization \n");
					len = strlen(assig_exp)+strlen(sh_exp)+strlen(yystack.l_mark[-1].vv.right)+strlen(yystack.l_mark[-1].vv.left)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.right,yystack.l_mark[-6].vv.string_val);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if(yystack.l_mark[-1].vv.index_sentry != 0 && yystack.l_mark[-1].vv.index_sentry != index_sentry){
					perror("init_vec 1 \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)+strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.left)+strlen(yystack.l_mark[-1].vv.right)+45;
					perror("strlen done\n");
					res = malloc(len);
					memset(res,0,len);
					perror("malloc done\n");
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",sh_exp,assig_exp,yystack.l_mark[-6].vv.string_val,assig_exp,yystack.l_mark[-1].vv.left,yystack.l_mark[-1].vv.right);
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
			if(yystack.l_mark[-1].vv.type == 2){
				perror("IDENTIFIER '[' IDENTIFIER ']'\n");
				if(yystack.l_mark[-1].vv.vec != yystack.l_mark[-6].vv.sentry && yystack.l_mark[-1].vv.index_sentry != 0 && yystack.l_mark[-1].vv.index_sentry == index_sentry ){
					/*scopy*/
					perror("Scopy optimization \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.vec->name)+strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)+strlen(assig_exp)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_scopy((const int)%s-%s+1,%s+%s,1,%s+%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.vec->name,assig_exp,yystack.l_mark[-6].vv.string_val,assig_exp);
					write_res(res,len);
					free(res);
					return 1333;

				}
				else if( yystack.l_mark[-1].vv.index_sentry != 0 && yystack.l_mark[-1].vv.index_sentry != index_sentry){
					perror("init_vec2  \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)+strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.left)+45;
					res = malloc(len);
					memset(res,0,len);
					perror(yystack.l_mark[-1].vv.left);
					snprintf(res,len,"init_fvec(%s-%s+1,%s+%s,(const float)%s);",sh_exp,assig_exp,yystack.l_mark[-6].vv.string_val,assig_exp,yystack.l_mark[-1].vv.left);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else{
					perror("init dependece 2 \n");
					return -123;
				}

			}
			else if(yystack.l_mark[-1].vv.type == 3){
				if(yystack.l_mark[-1].vv.vec == yystack.l_mark[-6].vv.sentry && yystack.l_mark[-1].vv.index_sentry != 0 && yystack.l_mark[-1].vv.index_sentry == index_sentry ){
					/*scaling....*/
					perror("Scaling optimization 3\n");
					len = 100;/*strlen(assig_exp)+strlen(sh_exp)+strlen($21.right)+strlen($21.left)+50;*/
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.left,yystack.l_mark[-1].vv.vec->name);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if(yystack.l_mark[-1].vv.index_sentry != 0 && yystack.l_mark[-1].vv.index_sentry != index_sentry){
					perror("init_vec 193 \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)+strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.left)+strlen(yystack.l_mark[-1].vv.right)+45;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",sh_exp,assig_exp,yystack.l_mark[-6].vv.string_val,assig_exp,yystack.l_mark[-1].vv.right,yystack.l_mark[-1].vv.left);
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
			else if(yystack.l_mark[-1].vv.type == 5){
				perror("init_vec 209 \n");
				len = strlen(sh_exp)+strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)+strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.left)+45;
				res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s);",sh_exp,assig_exp,yystack.l_mark[-6].vv.string_val,assig_exp,yystack.l_mark[-1].vv.left);
				perror("sprintf done\n");
				write_res(res,len);
				free(res);
				return 1333;
			}
			else if(yystack.l_mark[-1].vv.type == 41){
				perror("axy 6 \n");
				/*y = a*x + y*/
				if(yystack.l_mark[-6].vv.sentry == yystack.l_mark[-1].vv.vec && yystack.l_mark[-6].vv.sentry == yystack.l_mark[-1].vv.vec2){
					/*y = y*a + y*b*/
					/* 1 - y = y * a*/
					/* 2 - y = y + y *b*/
					perror("y = y*a+y*b :/ can't be done \n");
					return -1;
					/*TODO delete later*/
					len = strlen(assig_exp)+strlen(sh_exp)+strlen(yystack.l_mark[-1].vv.left)+strlen(yystack.l_mark[-6].vv.string_val)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.left,yystack.l_mark[-6].vv.string_val);
					len2 = strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.left)+strlen(yystack.l_mark[-6].vv.string_val)*2+70;
					res2 = malloc(len2);
					snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.right,yystack.l_mark[-6].vv.string_val,yystack.l_mark[-6].vv.string_val);
					res1 = malloc(len+len2+3);
					snprintf(res1,len+len2+3,"%s%s",res,res2);
					printf("%s\n",res1);
					write_res(res1,len+len2+3);
					free(res);
					free(res1);
					free(res2);

				}
				else if(yystack.l_mark[-6].vv.sentry == yystack.l_mark[-1].vv.vec && yystack.l_mark[-6].vv.sentry != yystack.l_mark[-1].vv.vec2){
					if(yystack.l_mark[-1].vv.left != 0 && yystack.l_mark[-1].vv.right != 0){
						perror("Z = Z*a+Y*b =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen(yystack.l_mark[-1].vv.left)+strlen(yystack.l_mark[-6].vv.string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.left,yystack.l_mark[-6].vv.string_val);
						len2 = strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.right)+strlen(yystack.l_mark[-6].vv.string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.right,yystack.l_mark[-1].vv.vec2->name,yystack.l_mark[-6].vv.string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						free(res);
						free(res1);
						free(res2);
					}
					else if(yystack.l_mark[-1].vv.left == 0 && yystack.l_mark[-1].vv.right != 0){
						perror("Z = Z +Y*b =D \n");
						len2 = strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.right)+strlen(yystack.l_mark[-6].vv.string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.right,yystack.l_mark[-1].vv.vec2->name,yystack.l_mark[-6].vv.string_val);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
					}
					else if(yystack.l_mark[-1].vv.left != 0 && yystack.l_mark[-1].vv.right == 0){
						perror("Z = Z*a +Y =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen(yystack.l_mark[-1].vv.left)+strlen(yystack.l_mark[-6].vv.string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.left,yystack.l_mark[-6].vv.string_val);
						len2 = strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.vec2->name,yystack.l_mark[-6].vv.string_val);
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
						len2 = strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.vec2->name,yystack.l_mark[-6].vv.string_val);
						printf("%s\n",res2);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
						return 1333;
					}



					return 1333;
				}
				else if(yystack.l_mark[-6].vv.sentry != yystack.l_mark[-1].vv.vec && yystack.l_mark[-6].vv.sentry == yystack.l_mark[-1].vv.vec2){
					perror("X = a*Y + X");
					if(yystack.l_mark[-1].vv.left != 0 && yystack.l_mark[-1].vv.right != 0){
						perror("Z = Z*a+Y*b =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen(yystack.l_mark[-1].vv.left)+strlen(yystack.l_mark[-6].vv.string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.left,yystack.l_mark[-6].vv.string_val);
						len2 = strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.right)+strlen(yystack.l_mark[-6].vv.string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.right,yystack.l_mark[-1].vv.vec2->name,yystack.l_mark[-6].vv.string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						free(res);
						free(res1);
						free(res2);
					}
					else if(yystack.l_mark[-1].vv.left == 0 && yystack.l_mark[-1].vv.right != 0){
						perror("Z = Z + a*Y =D \n");
						len2 = strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.right)+strlen(yystack.l_mark[-6].vv.string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.right,yystack.l_mark[-1].vv.vec2->name,yystack.l_mark[-6].vv.string_val);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
					}
					else if(yystack.l_mark[-1].vv.left != 0 && yystack.l_mark[-1].vv.right == 0){
						printf("=======> HERE : %s\n",yystack.l_mark[-1].vv.vec->name);
						printf("=======> HERE : %s\n",yystack.l_mark[-1].vv.vec2->name);
						perror("Z = a*Z +Y =D \n");
						len2 = strlen(assig_exp)*3+strlen(sh_exp)+strlen(yystack.l_mark[-6].vv.string_val)+strlen(yystack.l_mark[-1].vv.vec->name)+strlen(yystack.l_mark[-1].vv.left)+100;
						res2 = malloc(len2);
						memset(res2,0,len2);
						snprintf(res2,len2,"cblas_saxpy((const int)(%s)-(%s)+1,(const float)(%s),(const float*)(%s+(%s)),1,(%s+(%s)),1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.left,yystack.l_mark[-6].vv.string_val,assig_exp,yystack.l_mark[-1].vv.vec->name,assig_exp);
						printf("$$=====%s\n",res2);
						write_res(res2,len2+3);
						free(res2);
						return 1333;
/*=============================================================================*/
					}
					else {
						perror("X = X + Y \n");
						len2 = strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,yystack.l_mark[-1].vv.vec2->name,yystack.l_mark[-6].vv.string_val);
						printf("%s\n",res2);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
						return 1333;
					}



				}
				else{
					/*y = x*a + y*b*/
					perror("error is here...\n");
					perror("y = x*a+y*b =D \n");
					return -1;
				}
				return 1333;

			}
			else if(yystack.l_mark[-1].vv.type == 42){
				perror("init_vec 6 \n");
				if(yystack.l_mark[-6].vv.sentry == yystack.l_mark[-1].vv.vec || yystack.l_mark[-6].vv.sentry == yystack.l_mark[-1].vv.vec2){
					perror("optimization 42 can't be done :/ \n");
					return -1;
				}
				len = strlen(sh_exp)+strlen(assig_exp)+strlen(yystack.l_mark[-6].vv.string_val)+strlen(assig_exp)+strlen(yystack.l_mark[-1].vv.left)+55;
				res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"init_fvec((const int)%s-%s+1,(float*)(%s+%s),(const float)%s);",sh_exp,assig_exp,yystack.l_mark[-6].vv.string_val,assig_exp,yystack.l_mark[-1].vv.left);
				perror("sprintf done\n");
				write_res(res,len);
				free(res);
				return 1333;
			}

			index_sentry = 0;
}
break;
case 8:
#line 395 "grammar/c_syn.y"
	{index_sentry = yystack.l_mark[0].vv.sentry;}
break;
case 9:
#line 397 "grammar/c_syn.y"
	{assig_exp = yystack.l_mark[0].vv.string_exp;}
break;
case 10:
#line 397 "grammar/c_syn.y"
	{op_index =yystack.l_mark[0].vv.sentry; }
break;
case 11:
#line 397 "grammar/c_syn.y"
	{sh_exp = yystack.l_mark[0].vv.string_exp;}
break;
case 12:
#line 397 "grammar/c_syn.y"
	{inc_index=yystack.l_mark[0].vv.sentry;}
break;
case 14:
#line 404 "grammar/c_syn.y"
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
			int left_len = strlen(yystack.l_mark[-5].vv.string_val)+strlen(yystack.l_mark[-3].vv.string_val)+4;
			yyval.vv.left = malloc(left_len);
			memset(yyval.vv.left,0,left_len);
			snprintf(yyval.vv.left,left_len,"%s[%s]",yystack.l_mark[-5].vv.string_val,yystack.l_mark[-3].vv.string_val);

			yyval.vv.right = yystack.l_mark[0].vv.string_exp;
			yyval.vv.vec = yystack.l_mark[-5].vv.sentry;
			yyval.vv.index_sentry = yystack.l_mark[-3].vv.sentry;

		}
break;
case 15:
#line 426 "grammar/c_syn.y"
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
case 16:
#line 441 "grammar/c_syn.y"
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
			yyval.vv.left = yystack.l_mark[-5].vv.string_exp;
			yyval.vv.vec = yystack.l_mark[-3].vv.sentry;
			yyval.vv.index_sentry = yystack.l_mark[-1].vv.sentry;
		}
break;
case 17:
#line 463 "grammar/c_syn.y"
	{
			yyval.vv.type = 4;
			yyval.vv.depth = (yystack.l_mark[-2].vv.depth > yystack.l_mark[0].vv.depth)?yystack.l_mark[-2].vv.depth:yystack.l_mark[0].vv.depth;
			yyval.vv.depth = yyval.vv.depth+1;
			if(yyval.vv.depth > 1){
				perror("depth is greater than 1");
				return -144;
			}
			perror("optimization1_1 '+' optimization1_1 \n");

			if(yystack.l_mark[-2].vv.type == 1 && yystack.l_mark[0].vv.type == 1){
				perror("1-1\n");
				/*three cases axy,init,dependence error.*/
				yyval.vv.vec = yystack.l_mark[-2].vv.vec;
				yyval.vv.vec2 = yystack.l_mark[0].vv.vec;
				if(yystack.l_mark[-2].vv.index_sentry == index_sentry &&  yystack.l_mark[0].vv.index_sentry == index_sentry){
					if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-2].vv.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					yyval.vv.type = 41;
					yyval.vv.index_sentry = yystack.l_mark[-2].vv.index_sentry;
					yyval.vv.left = yystack.l_mark[-2].vv.right;
					yyval.vv.right = yystack.l_mark[0].vv.right;
					/*to perform axy  y = a*x + y*/
				}
				else if(yystack.l_mark[-2].vv.index_sentry != index_sentry && yystack.l_mark[0].vv.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					yyval.vv.type = 42;
					int len = strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[-2].vv.right)+strlen(yystack.l_mark[0].vv.left)+strlen(yystack.l_mark[0].vv.right)+6;
					yyval.vv.left = malloc(len);
					memset(yyval.vv.left,0,len);
					snprintf(yyval.vv.left,len,"%s*%s+%s*%s",yystack.l_mark[-2].vv.left,yystack.l_mark[-2].vv.right,yystack.l_mark[0].vv.left,yystack.l_mark[0].vv.right);

				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}
			}
			else if(yystack.l_mark[-2].vv.type == 1 && yystack.l_mark[0].vv.type == 2){
				perror("1-2\n");
				/* Z = X*a + Y ..*/
				yyval.vv.vec = yystack.l_mark[-2].vv.vec;
				yyval.vv.vec2 = yystack.l_mark[0].vv.vec;
				if(yystack.l_mark[-2].vv.index_sentry == index_sentry &&  yystack.l_mark[0].vv.index_sentry == index_sentry){
					if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-2].vv.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 43 optimization \n");
					yyval.vv.index_sentry = yystack.l_mark[-2].vv.index_sentry;
					yyval.vv.left = yystack.l_mark[-2].vv.right;
					yyval.vv.right = 0;
					yyval.vv.type = 41;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != index_sentry && yystack.l_mark[0].vv.index_sentry != index_sentry){
					perror("--------> condition 44 optimization \n");
					yyval.vv.type = 42;
					int len = strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[-2].vv.right)+strlen(yystack.l_mark[0].vv.left)+strlen(yystack.l_mark[0].vv.right)+6;
					yyval.vv.left = malloc(len);
					memset(yyval.vv.left,0,len);
					snprintf(yyval.vv.left,len,"%s*%s+%s*%s",yystack.l_mark[-2].vv.left,yystack.l_mark[-2].vv.right,yystack.l_mark[0].vv.left);
				}
				else{
					perror("optimization + optimization dependence 2\n");
					return -1;
				}
			}
			else if (yystack.l_mark[-2].vv.type == 1 && yystack.l_mark[0].vv.type == 3){
				perror("1-3\n");
				yyval.vv.vec = yystack.l_mark[-2].vv.vec;
				yyval.vv.vec2 = yystack.l_mark[0].vv.vec;
				if(yystack.l_mark[-2].vv.index_sentry == index_sentry &&  yystack.l_mark[0].vv.index_sentry == index_sentry){
					if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-2].vv.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					yyval.vv.type = 41;
					yyval.vv.index_sentry = yystack.l_mark[-2].vv.index_sentry;
					yyval.vv.left = yystack.l_mark[-2].vv.right;
					yyval.vv.right = yystack.l_mark[0].vv.left;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != index_sentry && yystack.l_mark[0].vv.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					yyval.vv.type = 42;
					int len = strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[-2].vv.right)+strlen(yystack.l_mark[0].vv.left)+strlen(yystack.l_mark[0].vv.right)+6;
					yyval.vv.left = malloc(len);
					memset(yyval.vv.left,0,len);
					snprintf(yyval.vv.left,len,"%s*%s+%s*%s",yystack.l_mark[-2].vv.left,yystack.l_mark[-2].vv.right,yystack.l_mark[0].vv.left,yystack.l_mark[0].vv.right);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}
			}
			else if(yystack.l_mark[-2].vv.type == 2 && yystack.l_mark[0].vv.type == 1){
				perror("2-1\n");
				/* Z = X + Y*a ..*/
				yyval.vv.vec = yystack.l_mark[-2].vv.vec;
				yyval.vv.vec2 = yystack.l_mark[0].vv.vec;
				if(yystack.l_mark[-2].vv.index_sentry == index_sentry &&  yystack.l_mark[0].vv.index_sentry == index_sentry){
					if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-2].vv.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 43 optimization \n");
					yyval.vv.index_sentry = yystack.l_mark[-2].vv.index_sentry;
					yyval.vv.right = yystack.l_mark[0].vv.right;
					yyval.vv.left = 0;
					yyval.vv.type = 41;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != index_sentry && yystack.l_mark[0].vv.index_sentry != index_sentry){
					perror("--------> condition 44 optimization \n");
					yyval.vv.type = 42;
					int len = strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[-2].vv.right)+strlen(yystack.l_mark[0].vv.left)+strlen(yystack.l_mark[0].vv.right)+6;
					yyval.vv.left = malloc(len);
					memset(yyval.vv.left,0,len);
					snprintf(yyval.vv.left,len,"%s+%s*%s",yystack.l_mark[-2].vv.left,yystack.l_mark[0].vv.left,yystack.l_mark[0].vv.right);
				}
				else{
					perror("optimization + optimization dependence 2\n");
					return -1;
				}

			}
			else if(yystack.l_mark[-2].vv.type == 2 && yystack.l_mark[0].vv.type == 2){
				perror("2-2\n");
				/* Z = X + Y ..*/
				yyval.vv.vec = yystack.l_mark[-2].vv.vec;
				yyval.vv.vec2 = yystack.l_mark[0].vv.vec;
				if(yystack.l_mark[-2].vv.index_sentry == index_sentry &&  yystack.l_mark[0].vv.index_sentry == index_sentry){
					if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-2].vv.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 43 optimization \n");
					yyval.vv.index_sentry = yystack.l_mark[-2].vv.index_sentry;
					yyval.vv.right = 0;
					yyval.vv.left = 0;
					yyval.vv.type = 41;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != index_sentry && yystack.l_mark[0].vv.index_sentry != index_sentry){
					perror("--------> condition 44 optimization \n");
					yyval.vv.type = 42;
					int len = strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[0].vv.left)+6;
					yyval.vv.left = malloc(len);
					memset(yyval.vv.left,0,len);
					snprintf(yyval.vv.left,len,"%s+%s",yystack.l_mark[-2].vv.left,yystack.l_mark[0].vv.left);
				}
				else{
					perror("optimization + optimization dependence 3\n");
					return -1;
				}

			}
			else if(yystack.l_mark[-2].vv.type == 2 && yystack.l_mark[0].vv.type == 3){
				/* X = Z + a*W*/
				perror("2-3\n");
				yyval.vv.vec = yystack.l_mark[-2].vv.vec;
				yyval.vv.vec2 = yystack.l_mark[0].vv.vec;
				if(yystack.l_mark[-2].vv.index_sentry == index_sentry &&  yystack.l_mark[0].vv.index_sentry == index_sentry){
					if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-2].vv.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					yyval.vv.type = 41;
					yyval.vv.index_sentry = yystack.l_mark[-2].vv.index_sentry;
					yyval.vv.left = 0;
					yyval.vv.right =  yystack.l_mark[0].vv.left;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != index_sentry && yystack.l_mark[0].vv.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					yyval.vv.type = 42;
					int len = strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[0].vv.left)+strlen(yystack.l_mark[0].vv.right)+6;
					yyval.vv.left = malloc(len);
					memset(yyval.vv.left,0,len);
					snprintf(yyval.vv.left,len,"%s+%s*%s",yystack.l_mark[-2].vv.left,yystack.l_mark[0].vv.right,yystack.l_mark[0].vv.left);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}

			}
			else if(yystack.l_mark[-2].vv.type == 3 && yystack.l_mark[0].vv.type == 3){
				perror("3-3\n");
				/* Y = a*Z+b*W*/
				/*three cases axy,init,dependence error.*/
				yyval.vv.vec = yystack.l_mark[-2].vv.vec;
				yyval.vv.vec2 = yystack.l_mark[0].vv.vec;
				if(yystack.l_mark[-2].vv.index_sentry == index_sentry &&  yystack.l_mark[0].vv.index_sentry == index_sentry){
					if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-2].vv.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					yyval.vv.type = 41;
					yyval.vv.index_sentry = yystack.l_mark[-2].vv.index_sentry;
					yyval.vv.left = yystack.l_mark[-2].vv.left;
					yyval.vv.right = yystack.l_mark[0].vv.left;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != index_sentry && yystack.l_mark[0].vv.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					yyval.vv.type = 42;
					int len = strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[-2].vv.right)+strlen(yystack.l_mark[0].vv.left)+strlen(yystack.l_mark[0].vv.right)+6;
					yyval.vv.left = malloc(len);
					memset(yyval.vv.left,0,len);
					snprintf(yyval.vv.left,len,"%s*%s+%s*%s",yystack.l_mark[-2].vv.right,yystack.l_mark[-2].vv.left,yystack.l_mark[0].vv.right,yystack.l_mark[0].vv.left);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}
			}
			else if(yystack.l_mark[-2].vv.type == 3 && yystack.l_mark[0].vv.type == 1){
				perror("3-1\n");
				/* Y = a*Z+W*b*/
				yyval.vv.vec = yystack.l_mark[-2].vv.vec;
				yyval.vv.vec2 = yystack.l_mark[0].vv.vec;
				if(yystack.l_mark[-2].vv.index_sentry == index_sentry &&  yystack.l_mark[0].vv.index_sentry == index_sentry){
					if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-2].vv.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					yyval.vv.type = 41;
					yyval.vv.index_sentry = yystack.l_mark[-2].vv.index_sentry;
					yyval.vv.left = yystack.l_mark[-2].vv.left;
					yyval.vv.right = yystack.l_mark[0].vv.right;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != index_sentry && yystack.l_mark[0].vv.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					yyval.vv.type = 42;
					int len = strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[-2].vv.right)+strlen(yystack.l_mark[0].vv.left)+strlen(yystack.l_mark[0].vv.right)+6;
					yyval.vv.left = malloc(len);
					memset(yyval.vv.left,0,len);
					snprintf(yyval.vv.left,len,"%s*%s+%s*%s",yystack.l_mark[-2].vv.left,yystack.l_mark[-2].vv.right,yystack.l_mark[0].vv.left,yystack.l_mark[0].vv.right);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}

			}
			else if(yystack.l_mark[-2].vv.type == 3 && yystack.l_mark[0].vv.type == 2){
				perror("3-2\n");
				/* X = a*W + Z*/
				yyval.vv.vec = yystack.l_mark[-2].vv.vec;
				yyval.vv.vec2 = yystack.l_mark[0].vv.vec;

				if(yystack.l_mark[-2].vv.index_sentry == index_sentry &&  yystack.l_mark[0].vv.index_sentry == index_sentry){
					if(yystack.l_mark[-2].vv.vec == yystack.l_mark[-2].vv.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					yyval.vv.type = 41;
					yyval.vv.index_sentry = yystack.l_mark[-2].vv.index_sentry;
					yyval.vv.left = yystack.l_mark[-2].vv.left;
					yyval.vv.right =  0;
				}
				else if(yystack.l_mark[-2].vv.index_sentry != index_sentry && yystack.l_mark[0].vv.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					yyval.vv.type = 42;
					int len = strlen(yystack.l_mark[-2].vv.left)+strlen(yystack.l_mark[0].vv.left)+strlen(yystack.l_mark[-2].vv.right)+6;
					yyval.vv.left = malloc(len);
					memset(yyval.vv.left,0,len);
					snprintf(yyval.vv.left,len,"%s*%s+%s",yystack.l_mark[-2].vv.left,yystack.l_mark[-2].vv.right,yystack.l_mark[0].vv.left);
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
break;
case 18:
#line 753 "grammar/c_syn.y"
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
case 19:
#line 768 "grammar/c_syn.y"
	{
	yyval.zz.op_type = 0;
}
break;
case 20:
#line 771 "grammar/c_syn.y"
	{
	 	yyval.zz.op_type = 1;
	}
break;
case 21:
#line 785 "grammar/c_syn.y"
	{
        		yyval.vv.list = yystack.l_mark[0].vv.list;
 	}
break;
case 22:
#line 788 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

	}
break;
case 23:
#line 794 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;

	}
break;
case 24:
#line 799 "grammar/c_syn.y"
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
case 25:
#line 809 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-2].vv.list;

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+3);
		snprintf(yyval.vv.string_exp,len1+3, "%s()",yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);

	}
break;
case 26:
#line 818 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;

		int len1 = strlen(yystack.l_mark[-1].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+3);
		snprintf(yyval.vv.string_exp,len1+3, "%s++",yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);
	}
break;
case 27:
#line 826 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;

		int len1 = strlen(yystack.l_mark[-1].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+3);
		snprintf(yyval.vv.string_exp,len1+3, "%s--",yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);
	}
break;
case 28:
#line 836 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
			yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;

	}
break;
case 29:
#line 841 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;

			int len2 = strlen(yystack.l_mark[0].vv.string_exp);
			yyval.vv.string_exp = malloc(len2+3);
			snprintf(yyval.vv.string_exp,len2+3, "++%s",yystack.l_mark[0].vv.string_exp);
			free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 30:
#line 849 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;

			int len2 = strlen(yystack.l_mark[0].vv.string_exp);
			yyval.vv.string_exp = malloc(len2+3);
			snprintf(yyval.vv.string_exp,len2+3, "++%s",yystack.l_mark[0].vv.string_exp);
			free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 31:
#line 859 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
			yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 32:
#line 863 "grammar/c_syn.y"
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
case 33:
#line 873 "grammar/c_syn.y"
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
case 34:
#line 883 "grammar/c_syn.y"
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
case 35:
#line 894 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 36:
#line 898 "grammar/c_syn.y"
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
case 37:
#line 909 "grammar/c_syn.y"
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
case 38:
#line 922 "grammar/c_syn.y"
	{
	yyval.vv.list = yystack.l_mark[0].vv.list;
	yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 39:
#line 926 "grammar/c_syn.y"
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
case 40:
#line 937 "grammar/c_syn.y"
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
case 41:
#line 950 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 42:
#line 954 "grammar/c_syn.y"
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
case 43:
#line 965 "grammar/c_syn.y"
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
case 44:
#line 975 "grammar/c_syn.y"
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
case 45:
#line 985 "grammar/c_syn.y"
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
case 46:
#line 997 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 47:
#line 1001 "grammar/c_syn.y"
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
case 48:
#line 1011 "grammar/c_syn.y"
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
case 49:
#line 1023 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 50:
#line 1027 "grammar/c_syn.y"
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
case 51:
#line 1039 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 52:
#line 1043 "grammar/c_syn.y"
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
case 53:
#line 1055 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 54:
#line 1059 "grammar/c_syn.y"
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
case 55:
#line 1071 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 56:
#line 1075 "grammar/c_syn.y"
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
case 57:
#line 1086 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;

		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 58:
#line 1091 "grammar/c_syn.y"
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
case 59:
#line 1105 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 60:
#line 1109 "grammar/c_syn.y"
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
case 61:
#line 1122 "grammar/c_syn.y"
	{

	}
break;
case 62:
#line 1131 "grammar/c_syn.y"
	{
		yyval.vv.type = VOID;
	}
break;
case 63:
#line 1134 "grammar/c_syn.y"
	{
		yyval.vv.type = INT;

	}
break;
case 64:
#line 1138 "grammar/c_syn.y"
	{
		yyval.vv.type = FLOAT;

	}
break;
case 65:
#line 1151 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);

		char * curr_var_name_tmp = yystack.l_mark[0].vv.string_val;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+1);
		snprintf(yyval.vv.string_exp,len+1, "%s",curr_var_name_tmp);
	}
break;
case 66:
#line 1159 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);
		char * curr_var_name_tmp = yystack.l_mark[0].vv.string_val;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+1);
		snprintf(yyval.vv.string_exp,len+1, "%s",curr_var_name_tmp);
	}
break;
case 67:
#line 1166 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);

		char * curr_var_name_tmp = yystack.l_mark[0].vv.string_val;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+1);
		snprintf(yyval.vv.string_exp,len+1, "%s",curr_var_name_tmp);
		float a = strtof(curr_var_name_tmp, NULL);
	}
break;
case 68:
#line 1175 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;

		char * curr_var_name_tmp = yystack.l_mark[-1].vv.string_exp;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+3);
		snprintf(yyval.vv.string_exp,len+4, "(%s)",yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);

	}
break;
#line 1963 "y.tab.c"
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
