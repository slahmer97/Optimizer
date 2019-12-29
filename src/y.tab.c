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
    0,   35,   36,   36,    5,    5,    5,    5,    6,    6,
   18,   18,   18,   18,   28,   28,    9,    9,   37,   20,
   20,   38,    4,    4,   19,   19,   19,   19,   19,   26,
   26,   26,   21,   21,   21,   21,   22,   22,   22,   23,
   23,   23,   24,   24,   24,   24,   24,   25,   25,   25,
   29,   29,   30,   30,   31,   31,   33,   33,   32,   32,
   27,   27,   34,    7,    7,   14,    2,    1,    1,    1,
   15,   15,   13,   13,   12,   12,   11,   11,   10,   10,
   16,   16,   17,   17,    3,    3,    3,    3,    8,    8,
};
static const YYINT yylen[] = {                            2,
    1,    0,    1,    2,    2,    3,    3,    4,    1,    2,
    1,    1,    1,    1,    1,    2,    5,    7,    0,    6,
    8,    0,    1,    3,    1,    4,    3,    2,    2,    1,
    2,    2,    1,    3,    3,    3,    1,    3,    3,    1,
    3,    3,    1,    3,    3,    3,    3,    1,    3,    3,
    1,    3,    1,    3,    1,    3,    1,    3,    1,    3,
    1,    3,    1,    1,    2,    3,    1,    1,    1,    1,
    1,    3,    1,    3,    2,    1,    1,    4,    1,    2,
    1,    3,    1,    3,    1,    1,    1,    3,    1,    3,
};
static const YYINT yydefred[] = {                         2,
    0,    1,
};
static const YYINT yydgoto[] = {                          1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    2,    0,    0,    0,
};
static const YYINT yysindex[] = {                         0,
    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 0
static const YYINT yytable[] = {                          0,
};
static const YYINT yycheck[] = {                         -1,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 281
#define YYUNDFTOKEN 322
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
0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : start",
"start : optimizer_level1",
"optimizer_level1 :",
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
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
#line 364 "y.tab.c"

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
#line 50 "grammar/c_syn.y"
	{
	}
break;
case 4:
#line 52 "grammar/c_syn.y"
	{

	}
break;
case 5:
#line 57 "grammar/c_syn.y"
	{

	}
break;
case 6:
#line 60 "grammar/c_syn.y"
	{

	}
break;
case 7:
#line 63 "grammar/c_syn.y"
	{

	}
break;
case 8:
#line 66 "grammar/c_syn.y"
	{


	}
break;
case 9:
#line 77 "grammar/c_syn.y"
	{
	}
break;
case 10:
#line 79 "grammar/c_syn.y"
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
#line 90 "grammar/c_syn.y"
	{

	}
break;
case 14:
#line 93 "grammar/c_syn.y"
	{
	}
break;
case 15:
#line 97 "grammar/c_syn.y"
	{

	}
break;
case 16:
#line 100 "grammar/c_syn.y"
	{

	}
break;
case 17:
#line 109 "grammar/c_syn.y"
	{

	}
break;
case 18:
#line 112 "grammar/c_syn.y"
	{

	}
break;
case 19:
#line 116 "grammar/c_syn.y"
	{printf("START-WHILE\n ");}
break;
case 20:
#line 116 "grammar/c_syn.y"
	{}
break;
case 21:
#line 118 "grammar/c_syn.y"
	{

	}
break;
case 22:
#line 121 "grammar/c_syn.y"
	{for_depth_counter_var++;}
break;
case 23:
#line 126 "grammar/c_syn.y"
	{

 	}
break;
case 24:
#line 129 "grammar/c_syn.y"
	{

	}
break;
case 25:
#line 134 "grammar/c_syn.y"
	{

	}
break;
case 26:
#line 137 "grammar/c_syn.y"
	{

	}
break;
case 27:
#line 140 "grammar/c_syn.y"
	{

	}
break;
case 28:
#line 143 "grammar/c_syn.y"
	{

	}
break;
case 29:
#line 146 "grammar/c_syn.y"
	{

	}
break;
case 30:
#line 151 "grammar/c_syn.y"
	{

	}
break;
case 31:
#line 154 "grammar/c_syn.y"
	{

	}
break;
case 32:
#line 157 "grammar/c_syn.y"
	{

	}
break;
case 33:
#line 162 "grammar/c_syn.y"
	{

	}
break;
case 34:
#line 165 "grammar/c_syn.y"
	{

	}
break;
case 35:
#line 168 "grammar/c_syn.y"
	{

	}
break;
case 36:
#line 171 "grammar/c_syn.y"
	{

	}
break;
case 37:
#line 176 "grammar/c_syn.y"
	{

	}
break;
case 38:
#line 179 "grammar/c_syn.y"
	{

	}
break;
case 39:
#line 182 "grammar/c_syn.y"
	{

	}
break;
case 40:
#line 187 "grammar/c_syn.y"
	{


	}
break;
case 41:
#line 191 "grammar/c_syn.y"
	{


	}
break;
case 42:
#line 195 "grammar/c_syn.y"
	{

	}
break;
case 43:
#line 200 "grammar/c_syn.y"
	{


	}
break;
case 44:
#line 204 "grammar/c_syn.y"
	{

	}
break;
case 45:
#line 207 "grammar/c_syn.y"
	{

	}
break;
case 46:
#line 210 "grammar/c_syn.y"
	{


	}
break;
case 47:
#line 214 "grammar/c_syn.y"
	{

	}
break;
case 48:
#line 219 "grammar/c_syn.y"
	{

	}
break;
case 49:
#line 222 "grammar/c_syn.y"
	{


	}
break;
case 50:
#line 226 "grammar/c_syn.y"
	{

	}
break;
case 51:
#line 231 "grammar/c_syn.y"
	{


	}
break;
case 52:
#line 235 "grammar/c_syn.y"
	{

	}
break;
case 53:
#line 240 "grammar/c_syn.y"
	{


	}
break;
case 54:
#line 244 "grammar/c_syn.y"
	{

	}
break;
case 55:
#line 249 "grammar/c_syn.y"
	{


	}
break;
case 56:
#line 253 "grammar/c_syn.y"
	{

	}
break;
case 57:
#line 258 "grammar/c_syn.y"
	{

	}
break;
case 58:
#line 261 "grammar/c_syn.y"
	{


	}
break;
case 59:
#line 267 "grammar/c_syn.y"
	{

	}
break;
case 60:
#line 270 "grammar/c_syn.y"
	{

	}
break;
case 61:
#line 277 "grammar/c_syn.y"
	{

	}
break;
case 62:
#line 280 "grammar/c_syn.y"
	{


	}
break;
case 63:
#line 286 "grammar/c_syn.y"
	{

	}
break;
case 64:
#line 293 "grammar/c_syn.y"
	{

	}
break;
case 65:
#line 296 "grammar/c_syn.y"
	{

	}
break;
case 66:
#line 306 "grammar/c_syn.y"
	{


	}
break;
case 67:
#line 315 "grammar/c_syn.y"
	{

	}
break;
case 68:
#line 324 "grammar/c_syn.y"
	{

	}
break;
case 69:
#line 327 "grammar/c_syn.y"
	{

	}
break;
case 70:
#line 330 "grammar/c_syn.y"
	{

	}
break;
case 71:
#line 336 "grammar/c_syn.y"
	{

	}
break;
case 72:
#line 339 "grammar/c_syn.y"
	{

	}
break;
case 73:
#line 346 "grammar/c_syn.y"
	{


	}
break;
case 74:
#line 350 "grammar/c_syn.y"
	{


	}
break;
case 75:
#line 359 "grammar/c_syn.y"
	{

	}
break;
case 76:
#line 362 "grammar/c_syn.y"
	{

	}
break;
case 77:
#line 369 "grammar/c_syn.y"
	{

	}
break;
case 78:
#line 372 "grammar/c_syn.y"
	{

        }
break;
case 79:
#line 383 "grammar/c_syn.y"
	{

	}
break;
case 80:
#line 387 "grammar/c_syn.y"
	{


	}
break;
case 81:
#line 395 "grammar/c_syn.y"
	{
	}
break;
case 82:
#line 397 "grammar/c_syn.y"
	{

	}
break;
case 83:
#line 402 "grammar/c_syn.y"
	{
		yyval.vv.string_exp = yystack.l_mark[0].vv.string_exp;
	}
break;
case 84:
#line 405 "grammar/c_syn.y"
	{

	}
break;
case 85:
#line 412 "grammar/c_syn.y"
	{

	}
break;
case 86:
#line 415 "grammar/c_syn.y"
	{

	}
break;
case 87:
#line 418 "grammar/c_syn.y"
	{

	}
break;
case 88:
#line 421 "grammar/c_syn.y"
	{

	}
break;
case 89:
#line 429 "grammar/c_syn.y"
	{

	}
break;
case 90:
#line 432 "grammar/c_syn.y"
	{

	}
break;
#line 1096 "y.tab.c"
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
