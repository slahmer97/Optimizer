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
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 58 "y.tab.c"

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
    0,   35,    5,    5,    5,    5,    6,    6,   18,   18,
   18,   18,   28,   28,    9,    9,   36,   20,   20,   37,
    4,    4,   19,   19,   19,   19,   19,   26,   26,   26,
   21,   21,   21,   21,   22,   22,   22,   23,   23,   23,
   24,   24,   24,   24,   24,   25,   25,   25,   29,   29,
   30,   30,   31,   31,   33,   33,   32,   32,   27,   27,
   34,    7,    7,   14,    2,    1,    1,    1,   15,   15,
   13,   13,   12,   12,   11,   11,   10,   10,   16,   16,
   17,   17,    3,    3,    3,    3,    8,    8,
};
static const YYINT yylen[] = {                            2,
    1,   25,    2,    3,    3,    4,    1,    2,    1,    1,
    1,    1,    1,    2,    5,    7,    0,    6,    7,    0,
    1,    3,    1,    4,    3,    2,    2,    1,    2,    2,
    1,    3,    3,    3,    1,    3,    3,    1,    3,    3,
    1,    3,    3,    3,    3,    1,    3,    3,    1,    3,
    1,    3,    1,    3,    1,    3,    1,    3,    1,    3,
    1,    1,    2,    3,    1,    1,    1,    1,    1,    3,
    1,    3,    2,    1,    1,    4,    1,    2,    1,    3,
    1,    3,    1,    1,    1,    3,    1,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,    0,    0,   84,   85,   83,    0,
    0,    0,   23,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   21,   29,   30,
    0,    0,   26,   27,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   61,    0,    0,
    0,    0,    0,    0,    0,   86,    0,   25,    0,   33,
   32,   34,    0,   31,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   60,    0,    0,    0,    0,    0,    0,
   22,   24,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    2,
};
static const YYINT yydgoto[] = {                          2,
    0,    0,   13,   27,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   14,    0,
   15,   16,   17,   18,   19,   64,   28,    0,   22,   23,
   24,   25,   26,   49,    3,    0,    0,
};
static const YYINT yysindex[] = {                      -248,
  -20,    0,    0, -239,  -23,  146,    0,    0,    0,  146,
  146,  146,    0,  -14,   63,   -4, -267,  -33, -231,    1,
  -24,    9,   -8,  -53, -199, -171,  -13,    0,    0,    0,
   71,  146,    0,    0,  146,  146,  146,  146,  146,  146,
  146,  146,  146,  146,  146,  146,  146,    0,  146, -156,
  146,  146,  146,  146,  146,    0,  146,    0,  -41,    0,
    0,    0,   63,    0,   63,   -4,   -4, -267, -267, -267,
 -267,  -33,  -33,    0, -160, -231,    9,   -8, -171,  -53,
    0,    0,  146,  -57, -150, -153,   81,    7, -138,   42,
 -133,   44,    1, -130,   57, -120,   62,   98,   33,    0,
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
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    0,  130,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   11,   24,  217,   43,  112,  486,   26,    0,  117,  121,
  118,    0,  127,   87,    0,    0,    0,
};
#define YYTABLESIZE 694
static const YYINT yytable[] = {                         28,
   28,   85,   57,   28,   28,   28,   28,   28,    1,   28,
   31,   31,   40,   41,   31,   31,   31,   31,   31,    4,
   31,   28,   28,   28,   28,   31,   42,   56,   43,    5,
   57,   21,   31,   31,   50,   31,   35,    6,   38,   35,
   39,   35,   35,   35,   46,   47,   51,   36,   63,   65,
   36,   82,   36,   36,   36,   28,   28,   35,   35,   38,
   35,   48,   38,   66,   67,   38,   31,   31,   36,   36,
   53,   36,   37,   54,   74,   37,   32,   37,   37,   37,
   38,   38,   81,   38,   39,   52,   28,   39,   72,   73,
   39,   35,   35,   37,   37,   40,   37,   31,   40,   37,
   55,   40,   36,   36,   36,   39,   39,   59,   39,   35,
   59,   58,   75,   83,   38,   38,   40,   40,   86,   40,
   41,   88,   35,   41,   87,   59,   41,   37,   37,   89,
   90,   42,   91,   36,   42,   92,   93,   42,   95,   39,
   39,   41,   41,   43,   41,   38,   43,   96,   97,   43,
   40,   40,   42,   42,   98,   42,   99,  100,   37,   59,
   55,   59,   76,   55,   43,   43,   57,   43,   77,   57,
   39,   44,   80,   78,   44,   41,   41,   44,   55,   94,
   79,   40,    0,    0,   57,   10,   42,   42,    0,    0,
    0,    0,   44,   44,    0,   44,    0,    0,   43,   43,
    0,    0,    0,    0,    0,    0,   41,    0,    0,    0,
   56,    0,   55,   56,    0,    0,    0,   42,   57,    0,
    0,    0,   40,   41,    0,    0,   44,   44,   56,   43,
    0,    0,    0,    0,   28,   28,   28,   28,   28,   28,
   44,   45,   28,   28,    0,   31,   31,   31,   31,   31,
   31,    0,    0,   31,   31,    0,    0,   44,   68,   69,
   70,   71,   56,   33,   34,    0,    0,    0,    0,    0,
   35,   35,   35,   35,   35,   35,    0,    0,   35,   35,
    0,   36,   36,   36,   36,   36,   36,    0,    0,   36,
   36,    0,    0,   38,   38,   38,   38,   38,   38,   84,
    0,   38,   38,    0,    0,    0,   37,   37,   37,   37,
   37,   37,    0,    0,   37,   37,    0,    0,   39,   39,
   39,   39,   39,   39,    0,    0,   39,   39,    0,   40,
   40,   40,   40,   40,   40,    0,    0,   40,   40,   45,
    0,    0,   45,    0,    0,   45,    0,    0,    0,    0,
    0,    0,    0,    0,   41,   41,   41,   41,   41,   41,
   45,   45,    0,   45,    0,   42,   42,   42,   42,   42,
   42,    0,    0,    0,    0,    0,    0,   43,   43,   43,
   43,   43,   43,   46,    0,    0,   46,    0,    0,   46,
   47,   55,   55,   47,   45,   45,   47,   48,   57,    0,
   48,    0,    0,   48,   46,   44,   44,   44,   44,   44,
   44,   47,    7,    8,    9,    0,   49,    0,   48,   49,
    0,    0,   49,   11,   12,   45,   50,    0,    0,   50,
    0,    0,   50,   51,    0,    0,   51,   49,   46,   46,
   52,   56,   56,   52,    0,   47,   47,   50,    0,    0,
    0,   51,   48,   48,    0,    0,   53,   58,   52,   53,
   58,   54,    0,    0,   54,    0,    0,    0,    0,   46,
    0,   49,   49,    0,   53,   58,   47,    0,    0,   54,
    0,   50,   50,   48,    0,   51,   51,    0,    0,    0,
    0,   20,   52,   52,    0,   20,   29,   30,    0,    0,
    0,    0,   49,    0,    0,    0,    0,    0,   53,   58,
    0,    0,   50,   54,    0,    0,   51,   20,    0,    0,
   60,   61,   62,   52,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   20,    0,    0,    0,    0,   53,
    0,    0,   20,    0,   54,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   45,   45,   45,   45,   45,   45,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   46,   46,    0,
    0,   46,   46,    0,   47,   47,    0,    0,   47,   47,
    0,   48,   48,    0,    0,   48,   48,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   49,   49,    0,    0,    0,    0,    0,    0,    0,    0,
   50,   50,    0,    0,   51,   51,    0,    0,    0,    0,
    0,   52,   52,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   53,   53,   58,
    0,    0,   54,   54,
};
static const YYINT yycheck[] = {                         37,
   38,   59,   44,   41,   42,   43,   44,   45,  257,   47,
   37,   38,  280,  281,   41,   42,   43,   44,   45,   40,
   47,   59,   60,   61,   62,   40,   60,   41,   62,  269,
   44,    6,   59,   60,   59,   62,   38,   61,   43,   41,
   45,   43,   44,   45,  276,  277,   38,   38,   38,   39,
   41,   93,   43,   44,   45,   93,   94,   59,   60,   38,
   62,   61,   41,   40,   41,   44,   93,   94,   59,   60,
  124,   62,   38,  273,   49,   41,   91,   43,   44,   45,
   59,   60,   57,   62,   38,   94,  124,   41,   46,   47,
   44,   93,   94,   59,   60,   38,   62,  124,   41,   37,
  272,   44,   93,   94,   42,   59,   60,   41,   62,   47,
   44,   41,  269,  274,   93,   94,   59,   60,  269,   62,
   38,   41,  124,   41,  278,   59,   44,   93,   94,  123,
  269,   38,   91,  124,   41,  269,   93,   44,  269,   93,
   94,   59,   60,   38,   62,  124,   41,   91,  269,   44,
   93,   94,   59,   60,   93,   62,   59,  125,  124,   93,
   41,   32,   51,   44,   59,   60,   41,   62,   52,   44,
  124,   38,   55,   53,   41,   93,   94,   44,   59,   93,
   54,  124,   -1,   -1,   59,   40,   93,   94,   -1,   -1,
   -1,   -1,   59,   60,   -1,   62,   -1,   -1,   93,   94,
   -1,   -1,   -1,   -1,   -1,   -1,  124,   -1,   -1,   -1,
   41,   -1,   93,   44,   -1,   -1,   -1,  124,   93,   -1,
   -1,   -1,  280,  281,   -1,   -1,   93,   94,   59,  124,
   -1,   -1,   -1,   -1,  272,  273,  274,  275,  276,  277,
  274,  275,  280,  281,   -1,  272,  273,  274,  275,  276,
  277,   -1,   -1,  280,  281,   -1,   -1,  124,   42,   43,
   44,   45,   93,  278,  279,   -1,   -1,   -1,   -1,   -1,
  272,  273,  274,  275,  276,  277,   -1,   -1,  280,  281,
   -1,  272,  273,  274,  275,  276,  277,   -1,   -1,  280,
  281,   -1,   -1,  272,  273,  274,  275,  276,  277,   83,
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
"optimizer_start : optimizer_1",
"optimizer_1 : FOR '(' IDENTIFIER '=' assignment_expression ';' IDENTIFIER LE_OP shift_expression ';' IDENTIFIER INC ')' '{' IDENTIFIER '[' IDENTIFIER ']' assignment_operator IDENTIFIER '[' IDENTIFIER ']' ';' '}'",
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
#line 464 "grammar/c_syn.y"

int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
#line 501 "y.tab.c"

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
#line 49 "grammar/c_syn.y"
	{
 			/* $3.sentry; $8.sentry; $12.sentry; $14.sentry; $17.sentry; $19.sentry;*/
 			if( yystack.l_mark[-22].vv.sentry == yystack.l_mark[-14].vv.sentry && yystack.l_mark[-22].vv.sentry == yystack.l_mark[-18].vv.sentry && yystack.l_mark[-22].vv.sentry == yystack.l_mark[-8].vv.sentry && yystack.l_mark[-22].vv.sentry == yystack.l_mark[-3].vv.sentry){
				int index_len = strlen(yystack.l_mark[-22].vv.string_val);
				int dest_len = strlen(yystack.l_mark[-10].vv.string_val);
				int orig_len = strlen(yystack.l_mark[-5].vv.string_val);
				int total_len = index_len+dest_len+orig_len+50;
				/*cblas_ccopy(const int N, const void *X, const int incX,void *Y, const int incY);*/
				char *res = malloc(total_len);
				memset(res,0,total_len);
				snprintf(res,total_len,"cblas_ccopy(%s,(const void*)&%s,%s,%s,%s);","SHI-ASS",yystack.l_mark[-10].vv.string_val,
											     "1",yystack.l_mark[-5].vv.string_val,"1");
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
break;
case 3:
#line 74 "grammar/c_syn.y"
	{

	}
break;
case 4:
#line 77 "grammar/c_syn.y"
	{

	}
break;
case 5:
#line 80 "grammar/c_syn.y"
	{

	}
break;
case 6:
#line 83 "grammar/c_syn.y"
	{


	}
break;
case 7:
#line 93 "grammar/c_syn.y"
	{
	}
break;
case 8:
#line 95 "grammar/c_syn.y"
	{

	}
break;
case 9:
#line 100 "grammar/c_syn.y"
	{
	  }
break;
case 10:
#line 102 "grammar/c_syn.y"
	{
	}
break;
case 11:
#line 104 "grammar/c_syn.y"
	{

	}
break;
case 12:
#line 107 "grammar/c_syn.y"
	{
	}
break;
case 13:
#line 111 "grammar/c_syn.y"
	{

	}
break;
case 14:
#line 114 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
		print_list(yyval.vv.list);
	}
break;
case 15:
#line 123 "grammar/c_syn.y"
	{

	}
break;
case 16:
#line 126 "grammar/c_syn.y"
	{

	}
break;
case 17:
#line 130 "grammar/c_syn.y"
	{}
break;
case 18:
#line 130 "grammar/c_syn.y"
	{}
break;
case 19:
#line 132 "grammar/c_syn.y"
	{
		return 1333;
	}
break;
case 20:
#line 136 "grammar/c_syn.y"
	{for_depth_counter_var++;}
break;
case 21:
#line 141 "grammar/c_syn.y"
	{
			/*printf("TEST ASSIGN\n");*/
        		yyval.vv.list = yystack.l_mark[0].vv.list;
        		/*print_list($$.list);*/
 	}
break;
case 22:
#line 146 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 23:
#line 152 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 24:
#line 155 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-3].vv.list,yystack.l_mark[-1].vv.list);
		yyval.vv.list = yystack.l_mark[-3].vv.list;
	}
break;
case 25:
#line 159 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 26:
#line 162 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 27:
#line 165 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 28:
#line 170 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 29:
#line 173 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 30:
#line 176 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 31:
#line 181 "grammar/c_syn.y"
	{
			yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 32:
#line 184 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 33:
#line 188 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 34:
#line 192 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 35:
#line 198 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 36:
#line 201 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 37:
#line 205 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 38:
#line 211 "grammar/c_syn.y"
	{
	yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 39:
#line 214 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 40:
#line 218 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 41:
#line 224 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 42:
#line 227 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 43:
#line 231 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 44:
#line 235 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 45:
#line 239 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 46:
#line 245 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 47:
#line 248 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 48:
#line 252 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 49:
#line 258 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 50:
#line 261 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 51:
#line 267 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 52:
#line 270 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 53:
#line 276 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 54:
#line 279 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 55:
#line 285 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 56:
#line 288 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 57:
#line 293 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 58:
#line 296 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 59:
#line 304 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 60:
#line 307 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 61:
#line 313 "grammar/c_syn.y"
	{

	}
break;
case 62:
#line 320 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 63:
#line 323 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-1].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 64:
#line 334 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 65:
#line 342 "grammar/c_syn.y"
	{

	}
break;
case 66:
#line 349 "grammar/c_syn.y"
	{

	}
break;
case 67:
#line 352 "grammar/c_syn.y"
	{

	}
break;
case 68:
#line 355 "grammar/c_syn.y"
	{

	}
break;
case 69:
#line 361 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 70:
#line 364 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 71:
#line 372 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 72:
#line 375 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 73:
#line 384 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);
	}
break;
case 74:
#line 387 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 75:
#line 394 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);
	}
break;
case 76:
#line 397 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-3].vv.list;
        }
break;
case 77:
#line 408 "grammar/c_syn.y"
	{

	}
break;
case 78:
#line 412 "grammar/c_syn.y"
	{


	}
break;
case 79:
#line 420 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 80:
#line 423 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 81:
#line 428 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[0].vv.list;
	}
break;
case 82:
#line 431 "grammar/c_syn.y"
	{
		concatenate(yystack.l_mark[-2].vv.list,yystack.l_mark[0].vv.list);
		yyval.vv.list = yystack.l_mark[-2].vv.list;
	}
break;
case 83:
#line 438 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);
	}
break;
case 84:
#line 441 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);
	}
break;
case 85:
#line 444 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);
	}
break;
case 86:
#line 447 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 87:
#line 455 "grammar/c_syn.y"
	{

	}
break;
case 88:
#line 458 "grammar/c_syn.y"
	{

	}
break;
#line 1262 "y.tab.c"
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
