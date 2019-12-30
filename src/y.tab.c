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
    5,    5,    5,    5,    6,    6,   18,   18,   18,   18,
   27,   27,    9,    9,   34,    0,    0,   35,    4,    4,
   19,   19,   19,   19,   19,   25,   25,   25,   20,   20,
   20,   20,   21,   21,   21,   22,   22,   22,   23,   23,
   23,   23,   23,   24,   24,   24,   28,   28,   29,   29,
   30,   30,   32,   32,   31,   31,   26,   26,   33,    7,
    7,   14,    2,    1,    1,    1,   15,   15,   13,   13,
   12,   12,   11,   11,   10,   10,   16,   16,   17,   17,
    3,    3,    3,    3,    8,    8,
};
static const YYINT yylen[] = {                            2,
    2,    3,    3,    4,    1,    2,    1,    1,    1,    1,
    1,    2,    5,    7,    0,    6,    8,    0,    1,    3,
    1,    4,    3,    2,    2,    1,    2,    2,    1,    3,
    3,    3,    1,    3,    3,    1,    3,    3,    1,    3,
    3,    3,    3,    1,    3,    3,    1,    3,    1,    3,
    1,    3,    1,    3,    1,    3,    1,    3,    1,    1,
    2,    3,    1,    1,    1,    1,    1,    3,    1,    3,
    2,    1,    1,    4,    1,    2,    1,    3,    1,    3,
    1,    1,    1,    3,    1,    3,
};
static const YYINT yydefred[] = {                         0,
   15,    0,    0,    0,    0,    0,    0,   82,   83,   81,
    0,    0,    0,   21,    0,    0,    0,    0,    0,    0,
    0,    0,   19,    0,    0,    0,    0,    0,   11,    0,
    0,    0,   27,   28,    0,    0,    0,    0,   24,   25,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   59,    0,    0,    0,    0,    0,    0,
   12,    0,   84,    0,   16,   20,   23,    0,   31,   30,
   32,    0,   29,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   58,    0,    0,    0,    0,    0,    0,    0,
   65,   64,   66,    1,   10,   63,    0,    7,    0,    0,
    9,   60,    5,    8,   22,    0,    0,   73,    0,    0,
    0,    0,   67,    0,    2,    6,    3,    0,   61,   17,
    0,   76,    0,    0,    0,   62,    0,    4,    0,    0,
    0,   70,   77,   68,    0,   74,   79,    0,    0,   78,
    0,   14,   80,
};
static const YYINT yydgoto[] = {                         95,
   96,   97,   14,   30,   98,   99,  100,    0,  101,  110,
  111,  112,  113,  102,  114,  132,  138,  103,   16,   17,
   18,   19,   20,   21,   22,   23,  104,   24,   25,   26,
   27,   28,   55,    4,    3,
};
static const YYINT yysindex[] = {                      -223,
    0,    0, -212,   12,   24,  178,  -10,    0,    0,    0,
  178,  178,  178,    0,   73,  130,   59,  -16, -168,   49,
 -156,   16,    0,   33,   11,  -17, -147, -128,    0,  -13,
  -10,  109,    0,    0,   26,  178,  115,  178,    0,    0,
  178,  178,  178,  178,  178,  178,  178,  178,  178,  178,
  178,  178,  178,    0,  178,  178,  178,  178,  178,  178,
    0,  178,    0,   68,    0,    0,    0,  -31,    0,    0,
    0,   59,    0,   59,  -16,  -16, -168, -168, -168, -168,
   49,   49,    0, -156,   33,   11, -128,  -17,  121,  129,
    0,    0,    0,    0,    0,    0,  -39,    0,  342,  261,
    0,    0,    0,    0,    0,   26,  178,    0,  125,  -87,
   96,  122,    0,  -12,    0,    0,    0,  418,    0,    0,
  127,    0,   96,  -78,  226,    0,  -39,    0,   26,   95,
  226,    0,    0,    0,  -69,    0,    0,  -42,   26,    0,
  226,    0,    0,
};
static const YYINT yyrindex[] = {                       -63,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -37,   -1,   22,  104,  366,
  474,  -26,    0,  420,  536,  519,  168,  564,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -63,    0,    0,    0,    0,    0,    0,
    0,   10,    0,   35,   81,   92,  117,  140,  281,  359,
  382,  392,    0,  493,  491,  547,  586,  563,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -63,  -63,
    0,    0,    0,    0,    0,    0,    0,    0,  -74,    0,
   30,   31,    0,    0,    0,    0,    0,  -63,    0,    0,
    0,    0,   41,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  304,    0,    0,    0,    0,    0,
    0,    0,    0,
};
static const YYINT yygindex[] = {                       196,
    0,    0,    0,    3,   51,  101,    0,    0,    0,   94,
   98,    0,   77,  114,    0, -103,    0,  -79,    0,   87,
  126,  389,   86,  159,  671,   82,   19,  162,  164,  160,
    0,  165,    0,    0,    0,
};
#define YYTABLESIZE 859
static const YYINT yytable[] = {                         26,
   26,  141,  109,   26,   26,   26,   26,   26,   15,   26,
   29,   29,   36,   32,   29,   29,   29,   29,   29,  116,
   29,   26,   26,   26,   26,   31,   44,  137,   45,   11,
   36,  127,   29,   29,    1,   29,   33,  143,  116,   33,
   68,   33,   33,   33,    5,   61,  126,   34,   29,   62,
   34,    6,   34,   34,   34,   26,   26,   33,   33,   36,
   33,  105,   36,    7,   89,   36,   29,   29,   34,   34,
   56,   34,   35,   72,   69,   35,   54,   35,   35,   35,
   36,   36,  140,   36,   71,   65,   26,   26,   72,   69,
   72,   33,   33,   35,   35,   43,   35,   29,   29,   71,
   42,   71,   34,   34,   57,   41,   58,   11,   48,  121,
   49,   46,   47,   35,   36,   36,   36,   66,   37,   52,
   53,   37,   33,   33,   37,   59,   29,   35,   35,   38,
   72,   74,   38,   34,   34,   38,   83,   81,   82,   37,
   37,   39,   37,   60,   39,   36,   36,   39,   64,   63,
   38,   38,   36,   38,   40,   67,  120,   40,   35,   35,
   40,  106,   39,   39,   36,   39,  109,  129,  107,   37,
   36,   75,   76,   37,   37,   40,   40,   41,   40,  135,
   41,  108,  125,   41,   38,   38,  124,  136,  130,  142,
   64,  139,   94,   18,   75,    2,   39,   39,   41,   41,
  118,   41,  122,  134,   37,   37,  133,  123,   57,   40,
   40,   57,  133,  119,   84,   38,   38,   11,   85,   88,
   38,   86,  133,   87,    0,    0,   57,   39,   39,  108,
    0,    0,   41,   41,   26,   26,   26,   26,   26,   26,
   40,   40,   26,   26,    0,   29,   29,   29,   29,   29,
   29,    0,    0,   29,   29,    0,    8,    9,   10,    0,
   57,    0,    0,   41,   41,   11,    0,   12,   13,    0,
   33,   33,   33,   33,   33,   33,    0,    0,   33,   33,
    0,   34,   34,   34,   34,   34,   34,    0,    0,   34,
   34,    0,   57,   36,   36,   36,   36,   36,   36,    0,
   11,   36,   36,    0,    0,    0,   35,   35,   35,   35,
   35,   35,    0,    0,   35,   35,    0,    0,   42,   29,
    0,   42,   50,   51,   42,    1,    0,   90,    0,    0,
   91,   92,   93,    0,    8,    9,   10,    0,    0,   42,
   42,    0,   42,   13,    0,   12,   13,    0,  131,    0,
    0,    0,   37,   37,   37,   37,   37,   37,    0,    0,
   37,   37,   13,   38,   38,   38,   38,   38,   38,    0,
    0,   38,   38,   42,   42,   39,   39,   39,   39,   39,
   39,   11,    0,   64,    0,  117,    0,    0,   40,   40,
   40,   40,   40,   40,    0,    0,   43,    0,    0,   43,
   29,    0,   43,   44,   42,   42,   44,   39,   40,   44,
    0,   41,   41,   41,   41,   41,   41,   43,   43,   45,
   43,    0,   45,    0,   44,   45,   13,    0,   13,   46,
    0,    0,   46,    0,    0,   46,   77,   78,   79,   80,
   45,    0,    0,    0,    8,    9,   10,    0,    0,    0,
   46,   43,   43,    0,    0,   12,   13,   11,   44,   44,
   49,    0,    0,   49,   64,    0,  115,    0,    0,    0,
    0,    0,    0,    0,   45,   45,   29,    0,   49,    0,
    0,    0,   43,   43,   46,   46,    0,    0,    0,   44,
   44,    0,    8,    9,   10,    0,    0,    0,    0,    0,
    0,    0,    0,   12,   13,   45,   45,    0,    0,    0,
    0,   47,   49,   49,   47,   46,   46,   47,    1,    0,
   90,    0,    0,   91,   92,   93,    0,    8,    9,   10,
   48,   50,   47,   48,   50,    0,   48,    0,   12,   13,
   64,    0,  128,   49,   49,    0,    0,    0,    0,   50,
    0,   48,   42,   42,   42,   42,   42,   42,    0,   53,
   13,   13,   53,   13,    0,    0,   47,   47,    0,    0,
   13,   13,   13,    0,    0,    0,   51,   53,    0,   51,
    0,   13,   13,   50,   50,   48,   48,   52,    0,    0,
   52,    0,    0,    0,   51,    0,    0,   47,   47,    1,
    0,   90,    0,   54,   55,   52,   54,   55,    8,    9,
   10,   53,    0,    0,   50,   50,   48,   48,    0,   12,
   13,   54,   55,    0,    0,    0,   56,    0,   51,   56,
   43,   43,   43,   43,   43,   43,    0,   44,   44,   52,
    0,   44,   44,   53,   56,    0,    0,    0,    0,    0,
    0,    0,    0,   45,   45,   54,   55,   45,   45,   51,
   51,    0,    0,   46,   46,    0,    0,   46,   46,    0,
   52,   52,    0,    0,    0,    1,    0,   90,   56,    0,
    0,    0,   33,   34,    8,    9,   10,   54,   55,    0,
    0,   49,   49,    0,    0,   12,   13,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   56,   69,   70,   71,   73,   73,   73,   73,   73,   73,
   73,   73,   73,   73,    0,    0,   73,   73,   73,   73,
   73,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   47,   47,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   50,   50,   48,   48,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   53,   53,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   51,   51,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   52,   52,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   54,   54,   55,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   56,
};
static const YYINT yycheck[] = {                         37,
   38,   44,   42,   41,   42,   43,   44,   45,    6,   47,
   37,   38,   44,   11,   41,   42,   43,   44,   45,   99,
   47,   59,   60,   61,   62,    7,   43,  131,   45,   40,
   44,   44,   59,   60,  258,   62,   38,  141,  118,   41,
   38,   43,   44,   45,  257,   59,   59,   38,   59,   31,
   41,   40,   43,   44,   45,   93,   94,   59,   60,   38,
   62,   93,   41,   40,   62,   44,   93,   94,   59,   60,
   38,   62,   38,   44,   44,   41,   61,   43,   44,   45,
   59,   60,  125,   62,   44,   35,  124,  125,   59,   59,
   61,   93,   94,   59,   60,   37,   62,  124,  125,   59,
   42,   61,   93,   94,   94,   47,  124,   40,   60,  107,
   62,  280,  281,   41,   93,   94,   44,   36,   38,  276,
  277,   41,  124,  125,   44,  273,   59,   93,   94,   38,
   44,   45,   41,  124,  125,   44,   55,   52,   53,   59,
   60,   38,   62,  272,   41,  124,  125,   44,  123,   41,
   59,   60,   44,   62,   38,   41,  106,   41,  124,  125,
   44,   41,   59,   60,   44,   62,   42,   41,   40,   40,
   44,   46,   47,   93,   94,   59,   60,   38,   62,  129,
   41,  269,   61,   44,   93,   94,   91,   93,  267,  139,
  123,  261,  125,  257,  269,    0,   93,   94,   59,   60,
  100,   62,  109,  127,  124,  125,  125,  110,   41,   93,
   94,   44,  131,  100,   56,  124,  125,   40,   57,   60,
   91,   58,  141,   59,   -1,   -1,   59,  124,  125,  269,
   -1,   -1,   93,   94,  272,  273,  274,  275,  276,  277,
  124,  125,  280,  281,   -1,  272,  273,  274,  275,  276,
  277,   -1,   -1,  280,  281,   -1,  267,  268,  269,   -1,
   93,   -1,   -1,  124,  125,   40,   -1,  278,  279,   -1,
  272,  273,  274,  275,  276,  277,   -1,   -1,  280,  281,
   -1,  272,  273,  274,  275,  276,  277,   -1,   -1,  280,
  281,   -1,  125,  272,  273,  274,  275,  276,  277,   -1,
   40,  280,  281,   -1,   -1,   -1,  272,  273,  274,  275,
  276,  277,   -1,   -1,  280,  281,   -1,   -1,   38,   59,
   -1,   41,  274,  275,   44,  258,   -1,  260,   -1,   -1,
  263,  264,  265,   -1,  267,  268,  269,   -1,   -1,   59,
   60,   -1,   62,   40,   -1,  278,  279,   -1,  123,   -1,
   -1,   -1,  272,  273,  274,  275,  276,  277,   -1,   -1,
  280,  281,   59,  272,  273,  274,  275,  276,  277,   -1,
   -1,  280,  281,   93,   94,  272,  273,  274,  275,  276,
  277,   40,   -1,  123,   -1,  125,   -1,   -1,  272,  273,
  274,  275,  276,  277,   -1,   -1,   38,   -1,   -1,   41,
   59,   -1,   44,   38,  124,  125,   41,  278,  279,   44,
   -1,  272,  273,  274,  275,  276,  277,   59,   60,   38,
   62,   -1,   41,   -1,   59,   44,  123,   -1,  125,   38,
   -1,   -1,   41,   -1,   -1,   44,   48,   49,   50,   51,
   59,   -1,   -1,   -1,  267,  268,  269,   -1,   -1,   -1,
   59,   93,   94,   -1,   -1,  278,  279,   40,   93,   94,
   41,   -1,   -1,   44,  123,   -1,  125,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   93,   94,   59,   -1,   59,   -1,
   -1,   -1,  124,  125,   93,   94,   -1,   -1,   -1,  124,
  125,   -1,  267,  268,  269,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  278,  279,  124,  125,   -1,   -1,   -1,
   -1,   38,   93,   94,   41,  124,  125,   44,  258,   -1,
  260,   -1,   -1,  263,  264,  265,   -1,  267,  268,  269,
   38,   41,   59,   41,   44,   -1,   44,   -1,  278,  279,
  123,   -1,  125,  124,  125,   -1,   -1,   -1,   -1,   59,
   -1,   59,  272,  273,  274,  275,  276,  277,   -1,   41,
  257,  258,   44,  260,   -1,   -1,   93,   94,   -1,   -1,
  267,  268,  269,   -1,   -1,   -1,   41,   59,   -1,   44,
   -1,  278,  279,   93,   94,   93,   94,   41,   -1,   -1,
   44,   -1,   -1,   -1,   59,   -1,   -1,  124,  125,  258,
   -1,  260,   -1,   41,   41,   59,   44,   44,  267,  268,
  269,   93,   -1,   -1,  124,  125,  124,  125,   -1,  278,
  279,   59,   59,   -1,   -1,   -1,   41,   -1,   93,   44,
  272,  273,  274,  275,  276,  277,   -1,  272,  273,   93,
   -1,  276,  277,  125,   59,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  272,  273,   93,   93,  276,  277,  124,
  125,   -1,   -1,  272,  273,   -1,   -1,  276,  277,   -1,
  124,  125,   -1,   -1,   -1,  258,   -1,  260,   93,   -1,
   -1,   -1,   12,   13,  267,  268,  269,  125,  125,   -1,
   -1,  272,  273,   -1,   -1,  278,  279,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  125,   41,   42,   43,   44,   45,   46,   47,   48,   49,
   50,   51,   52,   53,   -1,   -1,   56,   57,   58,   59,
   60,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  272,  273,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  272,  273,  272,  273,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,  273,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  272,  273,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  272,  273,  273,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  273,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 281
#define YYUNDFTOKEN 319
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
0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : iteration_statement",
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
#line 374 "grammar/c_syn.y"

int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
#line 546 "y.tab.c"

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
#line 45 "grammar/c_syn.y"
	{

	}
break;
case 2:
#line 48 "grammar/c_syn.y"
	{

	}
break;
case 3:
#line 51 "grammar/c_syn.y"
	{

	}
break;
case 4:
#line 54 "grammar/c_syn.y"
	{


	}
break;
case 5:
#line 64 "grammar/c_syn.y"
	{
	}
break;
case 6:
#line 66 "grammar/c_syn.y"
	{

	}
break;
case 7:
#line 71 "grammar/c_syn.y"
	{

	  }
break;
case 8:
#line 74 "grammar/c_syn.y"
	{

	}
break;
case 9:
#line 77 "grammar/c_syn.y"
	{

	}
break;
case 10:
#line 80 "grammar/c_syn.y"
	{
	}
break;
case 11:
#line 84 "grammar/c_syn.y"
	{

	}
break;
case 12:
#line 87 "grammar/c_syn.y"
	{
	}
break;
case 13:
#line 94 "grammar/c_syn.y"
	{

	}
break;
case 14:
#line 97 "grammar/c_syn.y"
	{

	}
break;
case 15:
#line 101 "grammar/c_syn.y"
	{printf("START-WHILE\n ");}
break;
case 16:
#line 101 "grammar/c_syn.y"
	{}
break;
case 17:
#line 103 "grammar/c_syn.y"
	{

	}
break;
case 18:
#line 107 "grammar/c_syn.y"
	{for_depth_counter_var++;}
break;
case 19:
#line 112 "grammar/c_syn.y"
	{
 	}
break;
case 20:
#line 114 "grammar/c_syn.y"
	{
	}
break;
case 21:
#line 118 "grammar/c_syn.y"
	{
	}
break;
case 22:
#line 120 "grammar/c_syn.y"
	{
	}
break;
case 23:
#line 122 "grammar/c_syn.y"
	{
	}
break;
case 24:
#line 124 "grammar/c_syn.y"
	{
	}
break;
case 25:
#line 126 "grammar/c_syn.y"
	{
	}
break;
case 26:
#line 130 "grammar/c_syn.y"
	{
	}
break;
case 27:
#line 132 "grammar/c_syn.y"
	{
	}
break;
case 28:
#line 134 "grammar/c_syn.y"
	{
	}
break;
case 29:
#line 138 "grammar/c_syn.y"
	{
	}
break;
case 30:
#line 140 "grammar/c_syn.y"
	{
	}
break;
case 31:
#line 142 "grammar/c_syn.y"
	{

	}
break;
case 32:
#line 145 "grammar/c_syn.y"
	{

	}
break;
case 33:
#line 150 "grammar/c_syn.y"
	{
	}
break;
case 34:
#line 152 "grammar/c_syn.y"
	{
	}
break;
case 35:
#line 154 "grammar/c_syn.y"
	{
	}
break;
case 36:
#line 158 "grammar/c_syn.y"
	{
	}
break;
case 37:
#line 160 "grammar/c_syn.y"
	{
	}
break;
case 38:
#line 162 "grammar/c_syn.y"
	{
	}
break;
case 39:
#line 166 "grammar/c_syn.y"
	{

	}
break;
case 40:
#line 169 "grammar/c_syn.y"
	{

	}
break;
case 41:
#line 172 "grammar/c_syn.y"
	{
	}
break;
case 42:
#line 174 "grammar/c_syn.y"
	{
	}
break;
case 43:
#line 176 "grammar/c_syn.y"
	{
	}
break;
case 44:
#line 180 "grammar/c_syn.y"
	{
	}
break;
case 45:
#line 182 "grammar/c_syn.y"
	{
	}
break;
case 46:
#line 184 "grammar/c_syn.y"
	{
	}
break;
case 47:
#line 188 "grammar/c_syn.y"
	{
	}
break;
case 48:
#line 190 "grammar/c_syn.y"
	{

	}
break;
case 49:
#line 195 "grammar/c_syn.y"
	{
	}
break;
case 50:
#line 197 "grammar/c_syn.y"
	{
	}
break;
case 51:
#line 201 "grammar/c_syn.y"
	{
	}
break;
case 52:
#line 203 "grammar/c_syn.y"
	{
	}
break;
case 53:
#line 207 "grammar/c_syn.y"
	{
	}
break;
case 54:
#line 209 "grammar/c_syn.y"
	{
	}
break;
case 55:
#line 212 "grammar/c_syn.y"
	{
	}
break;
case 56:
#line 214 "grammar/c_syn.y"
	{
	}
break;
case 57:
#line 220 "grammar/c_syn.y"
	{
	}
break;
case 58:
#line 222 "grammar/c_syn.y"
	{
	}
break;
case 59:
#line 226 "grammar/c_syn.y"
	{

	}
break;
case 60:
#line 233 "grammar/c_syn.y"
	{

	}
break;
case 61:
#line 236 "grammar/c_syn.y"
	{

	}
break;
case 62:
#line 246 "grammar/c_syn.y"
	{


	}
break;
case 63:
#line 255 "grammar/c_syn.y"
	{

	}
break;
case 64:
#line 262 "grammar/c_syn.y"
	{

	}
break;
case 65:
#line 265 "grammar/c_syn.y"
	{

	}
break;
case 66:
#line 268 "grammar/c_syn.y"
	{

	}
break;
case 67:
#line 274 "grammar/c_syn.y"
	{

	}
break;
case 68:
#line 277 "grammar/c_syn.y"
	{

	}
break;
case 69:
#line 284 "grammar/c_syn.y"
	{


	}
break;
case 70:
#line 288 "grammar/c_syn.y"
	{


	}
break;
case 71:
#line 297 "grammar/c_syn.y"
	{

	}
break;
case 72:
#line 300 "grammar/c_syn.y"
	{

	}
break;
case 73:
#line 307 "grammar/c_syn.y"
	{

	}
break;
case 74:
#line 310 "grammar/c_syn.y"
	{

        }
break;
case 75:
#line 321 "grammar/c_syn.y"
	{

	}
break;
case 76:
#line 325 "grammar/c_syn.y"
	{


	}
break;
case 77:
#line 333 "grammar/c_syn.y"
	{
	}
break;
case 78:
#line 335 "grammar/c_syn.y"
	{

	}
break;
case 79:
#line 340 "grammar/c_syn.y"
	{
	}
break;
case 80:
#line 342 "grammar/c_syn.y"
	{

	}
break;
case 81:
#line 348 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,yystack.l_mark[0].vv.sentry);
	}
break;
case 82:
#line 351 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);
	}
break;
case 83:
#line 354 "grammar/c_syn.y"
	{
		push(&yyval.vv.list,0);
	}
break;
case 84:
#line 357 "grammar/c_syn.y"
	{
		yyval.vv.list = yystack.l_mark[-1].vv.list;
	}
break;
case 85:
#line 365 "grammar/c_syn.y"
	{

	}
break;
case 86:
#line 368 "grammar/c_syn.y"
	{

	}
break;
#line 1220 "y.tab.c"
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
