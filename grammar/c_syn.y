%{
	#include<stdio.h>
	#include "headers/defs.h"
  	#include "headers/linkedlist.h"
	#include "headers/y.tab.h"
	#include <stdlib.h>
	int for_depth_counter_var = 0;
	int direct_declarator_var = 0;
	int current_type_var = -1;
    //int yydebug = 1;
%}
%union{
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
}

%token FOR WHILE DO IF ELSE RETURN
%token INT VOID FLOAT
%token CONST_Q //type qualifier  const int...
%token <vv> CONST_INT CONST_FLOAT IDENTIFIER STRING CONST
%token '='
%token '(' ')' ';' '}' '{' ']' '[' '/' '*' '+' '-' '<' '>' '%'
%token AND_OP OR_OP LE_OP GE_OP EQ_OP NE_OP INC DEC LEFT_OP RIGHT_OP
%type <vv> type_specifier declaration_specifiers primary_expression expression  compound_statement statement_list declaration_list identifier_list
%type <vv> selection_statement pointer direct_declarator declarator init_declarator declaration init_declarator_list initializer initializer_list statement postfix_expression
%type <vv> iteration_statement multiplicative_expression additive_expression shift_expression relational_expression equality_expression unary_expression assignment_expression
%type <vv> expression_statement and_expression exclusive_or_expression inclusive_or_expression logical_or_expression logical_and_expression assignment_operator
%start iteration_statement
%%
compound_statement: '{' '}' {

	}
	| '{' statement_list '}' {

	}
	| '{' declaration_list '}' {

	}
	| '{' declaration_list statement_list '}' {


	}
	;

//=====================================EXTERNAL-END=====================================================================

//=====================================statement-START==================================================================

statement_list: statement {
	}
	| statement_list statement {

	};

statement: //labeled_statement
	  compound_statement {
	  }
	| expression_statement {
	}
	| selection_statement {

	}
	| iteration_statement {
	}
	;

expression_statement: ';' {

	}
	| expression ';' {
		$$.list = $1.list;
		print_list($$.list);
	}
	;

//=======================================Statement-END==================================================================

//=======================================LOOP-Conditional-EXR================================================================
selection_statement: IF '(' expression ')' compound_statement {

	}
	| IF '(' expression ')' compound_statement ELSE compound_statement {

	};
iteration_statement:
	 WHILE {}'(' expression ')' compound_statement {}

	| iter_counter FOR '(' expression_statement expression_statement expression')' compound_statement {
		return 1333;
	};
	
iter_counter: {for_depth_counter_var++;};
//=======================================CONDITIONAL-EXPR-END===========================================================

//==================================START-ASSIGNEMENT===================================================================
expression:
 	assignment_expression {
			//printf("TEST ASSIGN\n");
        		$$.list = $1.list;
        		//print_list($$.list);
 	}
	| expression ',' assignment_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;

postfix_expression: primary_expression {
		$$.list = $1.list;
	}
	| postfix_expression '[' expression ']' {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	| postfix_expression '(' ')' {
		$$.list = $1.list;
	}
	| postfix_expression INC {
		$$.list = $1.list;
	}
	| postfix_expression DEC {
		$$.list = $1.list;
	}

unary_expression
	: postfix_expression {
			$$.list = $1.list;
	}
	| INC unary_expression {
			$$.list = $2.list;
	}
	| DEC unary_expression {
			$$.list = $2.list;
	}
	;
multiplicative_expression
	: unary_expression {
			$$.list = $1.list;
	}
	| multiplicative_expression '*' unary_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	| multiplicative_expression '/' unary_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	| multiplicative_expression '%' unary_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
additive_expression
	: multiplicative_expression {
		$$.list = $1.list;
	}
	| additive_expression '+' multiplicative_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	| additive_expression '-' multiplicative_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
shift_expression
	: additive_expression {
	$$.list = $1.list;
	}
	| shift_expression LEFT_OP additive_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	| shift_expression RIGHT_OP additive_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
relational_expression
	: shift_expression{
		$$.list = $1.list;
	}
	| relational_expression '<' shift_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	| relational_expression '>' shift_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	| relational_expression LE_OP shift_expression{
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	| relational_expression GE_OP shift_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
equality_expression
	: relational_expression{
		$$.list = $1.list;
	}
	| equality_expression EQ_OP relational_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	| equality_expression NE_OP relational_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
and_expression
	: equality_expression {
		$$.list = $1.list;
	}
	| and_expression '&' equality_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
exclusive_or_expression
	: and_expression{
		$$.list = $1.list;
	}
	| exclusive_or_expression '^' and_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
inclusive_or_expression
	: exclusive_or_expression {
		$$.list = $1.list;
	}
	| inclusive_or_expression '|' exclusive_or_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
logical_and_expression
	: inclusive_or_expression {
		$$.list = $1.list;
	}
	| logical_and_expression AND_OP inclusive_or_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
logical_or_expression: logical_and_expression {
		$$.list = $1.list;
	}
	| logical_or_expression OR_OP logical_and_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
//TODO add conditional assignement

assignment_expression:
	logical_or_expression {
		$$.list = $1.list;
	}
	| unary_expression assignment_operator assignment_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;
assignment_operator
	: '=' {

	}
	;
//====================================ASSIGNEMENT-END=================================================================
//DONE TODO================================================
declaration_list
	: declaration {
		$$.list = $1.list;
	}
	| declaration_list declaration {
		concatenate($1.list,$2.list);
		$$.list = $1.list;
	}
	;//=================================================USED

//DONE
declaration :
	//: declaration_specifiers ';' // long; or int;
	//we have type in declaration_specifiers
	// check if declaration_specifier type fits into all items of init_declarator_list
	declaration_specifiers init_declarator_list ';' {
		$$.list = $2.list;
	}
	; //==========================================================USED

//DONE
declaration_specifiers
	:
	type_specifier {

	}
	;
//=======================================================USED
//DONE
type_specifier
	: VOID {

	}
	| INT  {

	}
	| FLOAT {

	}
	;
//DONE
init_declarator_list
	: init_declarator {
		$$.list = $1.list;
	}
	| init_declarator_list ',' init_declarator {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;

//DONE
init_declarator
	: declarator {
		$$.list = $1.list;
	}
	| declarator '=' initializer {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}

	;

//DONE
declarator
	: pointer direct_declarator {
		push(&$$.list,$2.sentry);
	}
	| direct_declarator {
		$$.list = $1.list;
	}
	;

// DONE
direct_declarator
	: IDENTIFIER {
		push(&$$.list,$1.sentry);
	}
        | direct_declarator '[' CONST_INT ']' {
		$$.list = $1.list;
        }
        //| direct_declarator '(' ')'

        //| direct_declarator '(' identifier_list ')'


        ;
// DONE
pointer
	: '*'{

	}
	//| '*' type_qualifier_list
	| '*' pointer {


	}
	;


initializer
	: assignment_expression {
		$$.list = $1.list;
	}
	| '{' initializer_list '}' {
		$$.list = $2.list;
	}
	;
initializer_list
	: initializer {
		$$.list = $1.list;
	}
	| initializer_list ',' initializer {
		concatenate($1.list,$3.list);
		$$.list = $1.list;
	}
	;

//DONE,DONE
primary_expression: IDENTIFIER {
		push(&$$.list,$1.sentry);
	}
	| CONST_INT {
		push(&$$.list,0);
	}
	| CONST_FLOAT {
		push(&$$.list,0);
	}
	| '(' expression ')' {
		$$.list = $2.list;
	}
	;


//DONE,DONE
identifier_list
	: IDENTIFIER {

	}
	| identifier_list ',' IDENTIFIER {

	}
	;

%%

int yyerror(const char *str)
{
	printf("error : %s\tline : %d\n",str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
