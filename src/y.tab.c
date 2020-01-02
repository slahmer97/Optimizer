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
		node_t*list;
		char *X, *Y;
		char *n;
		int id_size;
		char * string_exp;
	}vv;
	struct {
		int op_type;
	}zz;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 61 "y.tab.c"

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
    0,   37,   28,   28,   36,   36,    5,    5,    5,    5,
    6,    6,   18,   18,   18,   18,   29,   29,    9,    9,
   38,   20,   20,   39,    4,    4,   19,   19,   19,   19,
   19,   26,   26,   26,   21,   21,   21,   21,   22,   22,
   22,   23,   23,   23,   24,   24,   24,   24,   24,   25,
   25,   25,   30,   30,   31,   31,   32,   32,   34,   34,
   33,   33,   27,   27,   35,    7,    7,   14,    2,    1,
    1,    1,   15,   15,   13,   13,   12,   12,   11,   11,
   10,   10,   16,   16,   17,   17,    3,    3,    3,    3,
    8,    8,
};
static const YYINT yylen[] = {                            2,
    1,   26,    2,    0,    1,    1,    2,    3,    3,    4,
    1,    2,    1,    1,    1,    1,    1,    2,    5,    7,
    0,    6,    7,    0,    1,    3,    1,    4,    3,    2,
    2,    1,    2,    2,    1,    3,    3,    3,    1,    3,
    3,    1,    3,    3,    1,    3,    3,    3,    3,    1,
    3,    3,    1,    3,    1,    3,    1,    3,    1,    3,
    1,    3,    1,    3,    1,    1,    2,    3,    1,    1,
    1,    1,    1,    3,    1,    3,    2,    1,    1,    4,
    1,    2,    1,    3,    1,    3,    1,    1,    1,    3,
    1,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,    0,    0,   88,   89,   87,    0,
    0,    0,   27,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   25,   33,   34,
    0,    0,   30,   31,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   65,    0,    0,
    0,    0,    0,    0,    0,   90,    0,   29,    0,   37,
   36,   38,    0,   35,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   64,    0,    0,    0,    0,    0,    0,
   26,   28,    6,    5,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    3,    0,    2,
};
static const YYINT yydgoto[] = {                          2,
    0,    0,   13,   27,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   14,    0,
   15,   16,   17,   18,   19,   64,   28,  102,    0,   22,
   23,   24,   25,   26,   49,   85,    3,    0,    0,
};
static const YYINT yysindex[] = {                      -251,
  -10,    0,    0, -234,  -23,  146,    0,    0,    0,  146,
  146,  146,    0,  -14,  161,   -4, -267,  -33, -231,   25,
  -12,   33,  -11,  -35, -183, -172,  -13,    0,    0,    0,
   60,  146,    0,    0,  146,  146,  146,  146,  146,  146,
  146,  146,  146,  146,  146,  146,  146,    0,  146, -159,
  146,  146,  146,  146,  146,    0,  146,    0,  -41,    0,
    0,    0,  161,    0,  161,   -4,   -4, -267, -267, -267,
 -267,  -33,  -33,    0,  -40, -231,   33,  -11, -172,  -35,
    0,    0,    0,    0,  146,  -57, -157, -164,   78,    2,
 -147,   39, -138,   40,   25, -133,   46, -130,   55,  107,
   -8,   96,    0,   32,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -37,   -1,   22,   83,  346,  379,  -26,
    0,  393,  416,  120,   67,  126,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   10,    0,   35,   47,   58,   94,  106,  134,
  302,  353,  360,    0,    0,  389,  400,  421,  417,  170,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   99,
    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,   61,  131,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   11,   24,  147,   28,  118,  486,   56,    0,    0,  121,
  127,  119,    0,  129,   86,    0,    0,    0,    0,
};
#define YYTABLESIZE 694
static const YYINT yytable[] = {                         32,
   32,   87,   57,   32,   32,   32,   32,   32,    1,   32,
   35,   35,   40,   41,   35,   35,   35,   35,   35,   83,
   35,   32,   32,   32,   32,   31,   42,   56,   43,    4,
   57,   10,   35,   35,    5,   35,   39,    6,   38,   39,
   39,   39,   39,   39,   46,   47,   50,   40,   63,   65,
   40,   82,   40,   40,   40,   32,   32,   39,   39,   42,
   39,   21,   42,   66,   67,   42,   35,   35,   40,   40,
   51,   40,   41,   72,   73,   41,   32,   41,   41,   41,
   42,   42,   52,   42,   43,   48,   32,   43,   53,   54,
   43,   39,   39,   41,   41,   44,   41,   35,   44,   55,
   58,   44,   40,   40,   74,   43,   43,   63,   43,   75,
   63,   88,   81,   89,   42,   42,   44,   44,   90,   44,
   45,   92,   39,   45,   91,   63,   45,   41,   41,   93,
   94,   46,   95,   40,   46,   97,   98,   46,   99,   43,
   43,   45,   45,   47,   45,   42,   47,  100,  101,   47,
   44,   44,   46,   46,  104,   46,  105,    4,   41,   63,
   59,  103,   59,   59,   47,   47,   61,   47,   76,   61,
   43,   48,   77,   80,   48,   45,   45,   48,   59,   78,
   96,   44,   79,    0,   61,   10,   46,   46,   68,   69,
   70,   71,   48,   48,    0,   48,    0,   37,   47,   47,
    0,    0,   36,    0,    0,    0,   45,   35,    0,    0,
   60,    0,   59,   60,    0,    0,    0,   46,   61,    0,
    0,    0,   40,   41,    0,    0,   48,   48,   60,   47,
    0,   86,    0,   84,   32,   32,   32,   32,   32,   32,
   44,   45,   32,   32,    0,   35,   35,   35,   35,   35,
   35,    0,    0,   35,   35,    0,    0,   48,    7,    8,
    9,    0,   60,   33,   34,    0,    0,    0,    0,    0,
   39,   39,   39,   39,   39,   39,    0,    0,   39,   39,
    0,   40,   40,   40,   40,   40,   40,    0,    0,   40,
   40,    0,    0,   42,   42,   42,   42,   42,   42,    0,
    0,   42,   42,    0,    0,    0,   41,   41,   41,   41,
   41,   41,    0,    0,   41,   41,    0,    0,   43,   43,
   43,   43,   43,   43,    0,    0,   43,   43,    0,   44,
   44,   44,   44,   44,   44,    0,    0,   44,   44,   49,
    0,    0,   49,    0,    0,   49,    0,    0,    0,    0,
    0,    0,    0,    0,   45,   45,   45,   45,   45,   45,
   49,   49,    0,   49,    0,   46,   46,   46,   46,   46,
   46,    0,    0,    0,    0,    0,    0,   47,   47,   47,
   47,   47,   47,   50,    0,    0,   50,    0,    0,   50,
   51,   59,   59,   51,   49,   49,   51,   52,   61,    0,
   52,    0,    0,   52,   50,   48,   48,   48,   48,   48,
   48,   51,    7,    8,    9,    0,   53,    0,   52,   53,
    0,    0,   53,   11,   12,   49,   54,    0,    0,   54,
    0,    0,   54,   55,    0,    0,   55,   53,   50,   50,
   56,   60,   60,   56,    0,   51,   51,   54,    0,    0,
    0,   55,   52,   52,    0,    0,   57,   62,   56,   57,
   62,   58,    0,    0,   58,    0,    0,    0,    0,   50,
    0,   53,   53,    0,   57,   62,   51,    0,    0,   58,
    0,   54,   54,   52,    0,   55,   55,    0,    0,    0,
    0,   20,   56,   56,    0,   20,   29,   30,    0,    0,
    0,    0,   53,    0,    0,    0,    0,    0,   57,   62,
    0,    0,   54,   58,    0,    0,   55,   20,    0,    0,
   60,   61,   62,   56,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   20,    0,    0,    0,    0,   57,
    0,    0,   20,    0,   58,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   49,   49,   49,   49,   49,   49,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   50,   50,    0,
    0,   50,   50,    0,   51,   51,    0,    0,   51,   51,
    0,   52,   52,    0,    0,   52,   52,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   53,   53,    0,    0,    0,    0,    0,    0,    0,    0,
   54,   54,    0,    0,   55,   55,    0,    0,    0,    0,
    0,   56,   56,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   57,   57,   62,
    0,    0,   58,   58,
};
static const YYINT yycheck[] = {                         37,
   38,   59,   44,   41,   42,   43,   44,   45,  260,   47,
   37,   38,  280,  281,   41,   42,   43,   44,   45,   60,
   47,   59,   60,   61,   62,   40,   60,   41,   62,   40,
   44,   40,   59,   60,  269,   62,   38,   61,   43,   41,
   45,   43,   44,   45,  276,  277,   59,   38,   38,   39,
   41,   93,   43,   44,   45,   93,   94,   59,   60,   38,
   62,    6,   41,   40,   41,   44,   93,   94,   59,   60,
   38,   62,   38,   46,   47,   41,   91,   43,   44,   45,
   59,   60,   94,   62,   38,   61,  124,   41,  124,  273,
   44,   93,   94,   59,   60,   38,   62,  124,   41,  272,
   41,   44,   93,   94,   49,   59,   60,   41,   62,  269,
   44,  269,   57,  278,   93,   94,   59,   60,   41,   62,
   38,  269,  124,   41,  123,   59,   44,   93,   94,   91,
  269,   38,   93,  124,   41,  269,   91,   44,  269,   93,
   94,   59,   60,   38,   62,  124,   41,   93,   42,   44,
   93,   94,   59,   60,   59,   62,  125,   59,  124,   93,
   41,  101,   32,   44,   59,   60,   41,   62,   51,   44,
  124,   38,   52,   55,   41,   93,   94,   44,   59,   53,
   95,  124,   54,   -1,   59,   40,   93,   94,   42,   43,
   44,   45,   59,   60,   -1,   62,   -1,   37,   93,   94,
   -1,   -1,   42,   -1,   -1,   -1,  124,   47,   -1,   -1,
   41,   -1,   93,   44,   -1,   -1,   -1,  124,   93,   -1,
   -1,   -1,  280,  281,   -1,   -1,   93,   94,   59,  124,
   -1,   85,   -1,  274,  272,  273,  274,  275,  276,  277,
  274,  275,  280,  281,   -1,  272,  273,  274,  275,  276,
  277,   -1,   -1,  280,  281,   -1,   -1,  124,  267,  268,
  269,   -1,   93,  278,  279,   -1,   -1,   -1,   -1,   -1,
  272,  273,  274,  275,  276,  277,   -1,   -1,  280,  281,
   -1,  272,  273,  274,  275,  276,  277,   -1,   -1,  280,
  281,   -1,   -1,  272,  273,  274,  275,  276,  277,   -1,
   -1,  280,  281,   -1,   -1,   -1,  272,  273,  274,  275,
  276,  277,   -1,   -1,  280,  281,   -1,   -1,  272,  273,
  274,  275,  276,  277,   -1,   -1,  280,  281,   -1,  272,
  273,  274,  275,  276,  277,   -1,   -1,  280,  281,   38,
   -1,   -1,   41,   -1,   -1,   44,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  272,  273,  274,  275,  276,  277,
   59,   60,   -1,   62,   -1,  272,  273,  274,  275,  276,
  277,   -1,   -1,   -1,   -1,   -1,   -1,  272,  273,  274,
  275,  276,  277,   38,   -1,   -1,   41,   -1,   -1,   44,
   38,  272,  273,   41,   93,   94,   44,   38,  273,   -1,
   41,   -1,   -1,   44,   59,  272,  273,  274,  275,  276,
  277,   59,  267,  268,  269,   -1,   38,   -1,   59,   41,
   -1,   -1,   44,  278,  279,  124,   38,   -1,   -1,   41,
   -1,   -1,   44,   41,   -1,   -1,   44,   59,   93,   94,
   41,  272,  273,   44,   -1,   93,   94,   59,   -1,   -1,
   -1,   59,   93,   94,   -1,   -1,   41,   41,   59,   44,
   44,   41,   -1,   -1,   44,   -1,   -1,   -1,   -1,  124,
   -1,   93,   94,   -1,   59,   59,  124,   -1,   -1,   59,
   -1,   93,   94,  124,   -1,   93,   94,   -1,   -1,   -1,
   -1,    6,   93,   94,   -1,   10,   11,   12,   -1,   -1,
   -1,   -1,  124,   -1,   -1,   -1,   -1,   -1,   93,   93,
   -1,   -1,  124,   93,   -1,   -1,  124,   32,   -1,   -1,
   35,   36,   37,  124,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   49,   -1,   -1,   -1,   -1,  124,
   -1,   -1,   57,   -1,  124,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  272,  273,  274,  275,  276,  277,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,  273,   -1,
   -1,  276,  277,   -1,  272,  273,   -1,   -1,  276,  277,
   -1,  272,  273,   -1,   -1,  276,  277,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  272,  273,   -1,   -1,  272,  273,   -1,   -1,   -1,   -1,
   -1,  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,  273,  273,
   -1,   -1,  272,  273,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 281
#define YYUNDFTOKEN 323
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
0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : optimizer_start",
"optimizer_start : scopy",
"scopy : FOR '(' IDENTIFIER '=' assignment_expression ';' IDENTIFIER comp_op shift_expression ';' IDENTIFIER INC ')' '{' IDENTIFIER '[' IDENTIFIER ']' assignment_operator IDENTIFIER '[' IDENTIFIER ']' sscale ';' '}'",
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
"$$1 :",
"iteration_statement : WHILE $$1 '(' expression ')' compound_statement",
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
#line 708 "grammar/c_syn.y"

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
case 2:
#line 52 "grammar/c_syn.y"
	{
 			/* $3.sentry; $8.sentry; $12.sentry; $14.sentry; $17.sentry; $19.sentry;*/
			symbol_p t = yystack.l_mark[-11].vv.sentry;
			symbol_p z =  yystack.l_mark[-6].vv.sentry;
			if( yystack.l_mark[-2].vv.type == 1){
				if(z == t){
					printf("[-] Copying vec to it self is not supported yet\n");
					return -33;
				}
				if( t != 0 && z != 0){
					if(!(t->glob_type == FLOAT && z->glob_type == FLOAT)){
						printf("TYPE is not supported yet : %d",t->glob_type);
						return -33;
					}

				}
				printf("EXPR : %s\n",yystack.l_mark[-21].vv.string_exp);
				if( yystack.l_mark[-23].vv.sentry == yystack.l_mark[-15].vv.sentry && yystack.l_mark[-23].vv.sentry == yystack.l_mark[-19].vv.sentry && yystack.l_mark[-23].vv.sentry == yystack.l_mark[-9].vv.sentry && yystack.l_mark[-23].vv.sentry == yystack.l_mark[-4].vv.sentry){
					int assig_len = strlen(yystack.l_mark[-21].vv.string_exp);
					int shift_len = strlen(yystack.l_mark[-17].vv.string_exp);
					int index_len = strlen(yystack.l_mark[-23].vv.string_val);
					int dest_len = strlen(yystack.l_mark[-11].vv.string_val);
					int orig_len = strlen(yystack.l_mark[-6].vv.string_val);
					int total_len = assig_len+shift_len+index_len+dest_len+orig_len+32;
					/*cblas_ccopy(const int N, const void *X, const int incX,void *Y, const int incY);*/
					char *res = malloc(total_len);
					memset(res,0,total_len);
					if(yystack.l_mark[-18].zz.op_type == 0)
						snprintf(res,total_len,"cblas_scopy(%s-%s+1,(%s+%s),%s,(%s+%s),%s);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-6].vv.string_val,"1",yystack.l_mark[-11].vv.string_val,yystack.l_mark[-21].vv.string_exp,"1");
					else
						snprintf(res,total_len-2,"cblas_scopy(%s-%s,(%s+%s),%s,(%s+%s),%s);",yystack.l_mark[-17].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-21].vv.string_exp,yystack.l_mark[-6].vv.string_val,"1",yystack.l_mark[-11].vv.string_val,yystack.l_mark[-21].vv.string_exp,"1");

					printf("\n---------------\nFunc : \n %s \n---------------\n",res);
					FILE* f = fopen(OPTIMIZER_FILE,"w");
					fprintf(f,"%s",res);
					fclose(f);
					globalData.symbol->bytes_count = total_len;
					free(res);
					return 1333;
				}
				else
					return -1;

 			}
 			else if(yystack.l_mark[-2].vv.type == 2 && z == t){
 				node_t* head = yystack.l_mark[-2].vv.list;
				printf("-------> head : %p\n",head);
				while(head != 0 && head->val != yystack.l_mark[-23].vv.sentry){
					printf("-------> %p\n",head->val);
					head = head->next;
				}
				printf("-------> sentry : %p\n",yystack.l_mark[-23].vv.sentry);
				if(head  != 0){
 					printf("[-] multiplication with dependence\n");
 					return -1;
 				}

				printf("[-] multiplication with optimization\n");
				return -2;

 			}
             	}
break;
case 3:
#line 116 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
		yyval.vv.type = 2;
	}
break;
case 4:
#line 121 "grammar/c_syn.y"
	{

		yyval.vv.type = 1;
	}
break;
case 5:
#line 126 "grammar/c_syn.y"
	{
	yyval.zz.op_type = 0;
}
break;
case 6:
#line 129 "grammar/c_syn.y"
	{
	 	yyval.zz.op_type = 1;
	}
break;
case 7:
#line 134 "grammar/c_syn.y"
	{

	}
break;
case 8:
#line 137 "grammar/c_syn.y"
	{

	}
break;
case 9:
#line 140 "grammar/c_syn.y"
	{

	}
break;
case 10:
#line 143 "grammar/c_syn.y"
	{


	}
break;
case 11:
#line 153 "grammar/c_syn.y"
	{
	}
break;
case 12:
#line 155 "grammar/c_syn.y"
	{

	}
break;
case 13:
#line 160 "grammar/c_syn.y"
	{
	  }
break;
case 14:
#line 162 "grammar/c_syn.y"
	{
	}
break;
case 15:
#line 164 "grammar/c_syn.y"
	{

	}
break;
case 16:
#line 167 "grammar/c_syn.y"
	{
	}
break;
case 17:
#line 171 "grammar/c_syn.y"
	{

	}
break;
case 18:
#line 174 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
		print_list(yyval.vv.list);
	}
break;
case 19:
#line 183 "grammar/c_syn.y"
	{

	}
break;
case 20:
#line 186 "grammar/c_syn.y"
	{

	}
break;
case 21:
#line 190 "grammar/c_syn.y"
	{}
break;
case 22:
#line 190 "grammar/c_syn.y"
	{}
break;
case 23:
#line 192 "grammar/c_syn.y"
	{
		return 1333;
	}
break;
case 24:
#line 196 "grammar/c_syn.y"
	{for_depth_counter_var++;}
break;
case 25:
#line 201 "grammar/c_syn.y"
	{
        		yyval.vv.list = yystack.l_mark[0].vv.list;
 	}
break;
case 26:
#line 204 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

	}
break;
case 27:
#line 210 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;

	}
break;
case 28:
#line 215 "grammar/c_syn.y"
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
case 29:
#line 225 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-2].vv.list;

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+3);
		snprintf(yyval.vv.string_exp,len1+3, "%s()",yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);

	}
break;
case 30:
#line 234 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;

		int len1 = strlen(yystack.l_mark[-1].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+3);
		snprintf(yyval.vv.string_exp,len1+3, "%s++",yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);
	}
break;
case 31:
#line 242 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;

		int len1 = strlen(yystack.l_mark[-1].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+3);
		snprintf(yyval.vv.string_exp,len1+3, "%s--",yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);
	}
break;
case 32:
#line 252 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
			yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;

	}
break;
case 33:
#line 257 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;

			int len2 = strlen(yystack.l_mark[0].vv.string_exp);
			yyval.vv.string_exp = malloc(len2+3);
			snprintf(yyval.vv.string_exp,len2+3, "++%s",yystack.l_mark[0].vv.string_exp);
			free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 34:
#line 265 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;

			int len2 = strlen(yystack.l_mark[0].vv.string_exp);
			yyval.vv.string_exp = malloc(len2+3);
			snprintf(yyval.vv.string_exp,len2+3, "++%s",yystack.l_mark[0].vv.string_exp);
			free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 35:
#line 275 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
			yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 36:
#line 279 "grammar/c_syn.y"
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
case 37:
#line 289 "grammar/c_syn.y"
	{
		yyval.vv.list =concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s||%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 38:
#line 299 "grammar/c_syn.y"
	{
		yyval.vv.list  = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s||%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 39:
#line 310 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 40:
#line 314 "grammar/c_syn.y"
	{
		yyval.vv.list  = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s||%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 41:
#line 325 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s||%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 42:
#line 338 "grammar/c_syn.y"
	{
	yyval.vv.list = yystack.l_mark[0].vv.list;
	yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 43:
#line 342 "grammar/c_syn.y"
	{
		yyval.vv.list  = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s||%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 44:
#line 353 "grammar/c_syn.y"
	{
		yyval.vv.list  = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s||%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 45:
#line 366 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 46:
#line 370 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		/*$$.list = $1.list;*/

		int len1 = strlen(yystack.l_mark[-2].vv.string_exp);
		int len2 = strlen(yystack.l_mark[0].vv.string_exp);
		yyval.vv.string_exp = malloc(len1+len2+3);
		snprintf(yyval.vv.string_exp,len1+len2+3, "%s||%s",yystack.l_mark[-2].vv.string_exp,yystack.l_mark[0].vv.string_exp);
		free(yystack.l_mark[-2].vv.string_exp);
		free(yystack.l_mark[0].vv.string_exp);
	}
break;
case 47:
#line 381 "grammar/c_syn.y"
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
case 48:
#line 391 "grammar/c_syn.y"
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
case 49:
#line 401 "grammar/c_syn.y"
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
case 50:
#line 413 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 51:
#line 417 "grammar/c_syn.y"
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
case 52:
#line 427 "grammar/c_syn.y"
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
case 53:
#line 439 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 54:
#line 443 "grammar/c_syn.y"
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
case 55:
#line 455 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 56:
#line 459 "grammar/c_syn.y"
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
case 57:
#line 471 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 58:
#line 475 "grammar/c_syn.y"
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
#line 487 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 60:
#line 491 "grammar/c_syn.y"
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
case 61:
#line 502 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;

		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 62:
#line 507 "grammar/c_syn.y"
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
case 63:
#line 521 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 64:
#line 525 "grammar/c_syn.y"
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
case 65:
#line 538 "grammar/c_syn.y"
	{

	}
break;
case 66:
#line 545 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 67:
#line 548 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-1].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 68:
#line 559 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 69:
#line 567 "grammar/c_syn.y"
	{

	}
break;
case 70:
#line 574 "grammar/c_syn.y"
	{

	}
break;
case 71:
#line 577 "grammar/c_syn.y"
	{

	}
break;
case 72:
#line 580 "grammar/c_syn.y"
	{

	}
break;
case 73:
#line 586 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 74:
#line 589 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
	}
break;
case 75:
#line 596 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 76:
#line 599 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
	}
break;
case 77:
#line 607 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);
	}
break;
case 78:
#line 610 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 79:
#line 617 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);
	}
break;
case 80:
#line 620 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-3].vv.list;
        }
break;
case 81:
#line 631 "grammar/c_syn.y"
	{

	}
break;
case 82:
#line 635 "grammar/c_syn.y"
	{


	}
break;
case 83:
#line 643 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 84:
#line 646 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 85:
#line 651 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 86:
#line 654 "grammar/c_syn.y"
	{
		yyval.vv.list = concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
	}
break;
case 87:
#line 660 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);

		char * curr_var_name_tmp = yystack.l_mark[0].vv.string_val;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+1);
		snprintf(yyval.vv.string_exp,len+1, "%s",curr_var_name_tmp);
	}
break;
case 88:
#line 668 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);
		char * curr_var_name_tmp = yystack.l_mark[0].vv.string_val;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+1);
		snprintf(yyval.vv.string_exp,len+1, "%s",curr_var_name_tmp);
	}
break;
case 89:
#line 675 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);

		char * curr_var_name_tmp = yystack.l_mark[0].vv.string_val;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+1);
		snprintf(yyval.vv.string_exp,len+1, "%s",curr_var_name_tmp);
		float a = strtof(curr_var_name_tmp, NULL);
	}
break;
case 90:
#line 684 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;

		char * curr_var_name_tmp = yystack.l_mark[-1].vv.string_exp;
		int len = strlen(curr_var_name_tmp);
		yyval.vv.string_exp = malloc(len+3);
		snprintf(yyval.vv.string_exp,len+4, "(%s)",yystack.l_mark[-1].vv.string_exp);
		free(yystack.l_mark[-1].vv.string_exp);

	}
break;
case 91:
#line 699 "grammar/c_syn.y"
	{

	}
break;
case 92:
#line 702 "grammar/c_syn.y"
	{

	}
break;
#line 1524 "y.tab.c"
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
