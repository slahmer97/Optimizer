%{
  	#include "headers/linkedlist.h"
	#include<stdio.h>
	#include "headers/defs.h"
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
	struct {
		int op_type;
	}zz;
}
%token INT VOID FLOAT
%token FOR WHILE DO IF ELSE RETURN
%token CONST_Q //type qualifier  const int...
%token <vv> CONST_INT CONST_FLOAT IDENTIFIER STRING CONST
%token '='
%token '(' ')' ';' '}' '{' ']' '[' '/' '*' '+' '-' '<' '>' '%'
%token AND_OP OR_OP LE_OP GE_OP EQ_OP NE_OP INC DEC LEFT_OP RIGHT_OP
%type <vv> type_specifier declaration_specifiers primary_expression expression  compound_statement statement_list declaration_list identifier_list
%type <vv> selection_statement pointer direct_declarator declarator init_declarator declaration init_declarator_list initializer initializer_list statement postfix_expression
%type <vv> iteration_statement multiplicative_expression additive_expression shift_expression relational_expression equality_expression unary_expression assignment_expression
%type <vv> expression_statement and_expression exclusive_or_expression inclusive_or_expression logical_or_expression logical_and_expression assignment_operator
%type <zz> comp_op
%start optimizer_start
%%
optimizer_start : optimizer_1;

optimizer_1:  FOR '(' IDENTIFIER '=' assignment_expression ';' IDENTIFIER comp_op shift_expression ';'  IDENTIFIER INC')'
 		'{' IDENTIFIER '[' IDENTIFIER ']'  assignment_operator IDENTIFIER '[' IDENTIFIER ']'  ';' '}'
 		{
 			// $3.sentry; $8.sentry; $12.sentry; $14.sentry; $17.sentry; $19.sentry;
			symbol_p t = $15.sentry;
			symbol_p z =  $20.sentry;;
			if( t != 0 && z != 0){
				if(!(t->glob_type == FLOAT && z->glob_type == FLOAT)){
					printf("TYPE is not supported yet : %d",t->glob_type);
					return -33;
				}

			}
 			printf("EXPR : %s\n",$5.string_exp);
 			if( $3.sentry == $11.sentry && $3.sentry == $7.sentry && $3.sentry == $17.sentry && $3.sentry == $22.sentry){
 				int assig_len = strlen($5.string_exp);
 				int shift_len = strlen($9.string_exp);
				int index_len = strlen($3.string_val);
				int dest_len = strlen($15.string_val);
				int orig_len = strlen($20.string_val);
				int total_len = assig_len+shift_len+index_len+dest_len+orig_len+32;
				//cblas_ccopy(const int N, const void *X, const int incX,void *Y, const int incY);
				char *res = malloc(total_len);
				memset(res,0,total_len);
				if($8.op_type == 0)
					snprintf(res,total_len,"cblas_scopy(%s-%s+1,(%s+%s),%s,(%s+%s),%s);",$9.string_exp,$5.string_exp,$5.string_exp,$15.string_val,"1",$20.string_val,$5.string_exp,"1");
				else
					snprintf(res,total_len-2,"cblas_scopy(%s-%s,(%s+%s),%s,(%s+%s),%s);",$9.string_exp,$5.string_exp,$5.string_exp,$15.string_val,"1",$20.string_val,$5.string_exp,"1");

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
             	};


comp_op : LE_OP {
	$$.op_type = 0;
}
	| '<' {
	 	$$.op_type = 1;
	}
	;

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

	| FOR '(' expression_statement expression_statement expression')' compound_statement {
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
		$$.string_exp = $1.string_exp;

	}
	| postfix_expression '[' expression ']' {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s[%s]",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| postfix_expression '(' ')' {
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		$$.string_exp = malloc(len1+3);
		snprintf($$.string_exp,len1+3, "%s()",$1.string_exp);
		free($1.string_exp);

	}
	| postfix_expression INC {
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		$$.string_exp = malloc(len1+3);
		snprintf($$.string_exp,len1+3, "%s++",$1.string_exp);
		free($1.string_exp);
	}
	| postfix_expression DEC {
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		$$.string_exp = malloc(len1+3);
		snprintf($$.string_exp,len1+3, "%s--",$1.string_exp);
		free($1.string_exp);
	}

unary_expression
	: postfix_expression {
			$$.list = $1.list;
			$$.string_exp = $1.string_exp;
	}
	| INC unary_expression {
			$$.list = $2.list;

			int len2 = strlen($2.string_exp);
			$$.string_exp = malloc(len2+3);
			snprintf($$.string_exp,len2+3, "++%s",$2.string_exp);
			free($2.string_exp);
	}
	| DEC unary_expression {
			$$.list = $2.list;

			int len2 = strlen($2.string_exp);
			$$.string_exp = malloc(len2+3);
			snprintf($$.string_exp,len2+3, "++%s",$2.string_exp);
			free($2.string_exp);
	}
	;
multiplicative_expression
	: unary_expression {
			$$.list = $1.list;
			$$.string_exp = $1.string_exp;
	}
	| multiplicative_expression '*' unary_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| multiplicative_expression '/' unary_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| multiplicative_expression '%' unary_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
additive_expression
	: multiplicative_expression {
		$$.list = $1.list;
		$$.string_exp = $1.string_exp;
	}
	| additive_expression '+' multiplicative_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| additive_expression '-' multiplicative_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
shift_expression
	: additive_expression {
	$$.list = $1.list;
	$$.string_exp = $1.string_exp;
	}
	| shift_expression LEFT_OP additive_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| shift_expression RIGHT_OP additive_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
relational_expression
	: shift_expression{
		$$.list = $1.list;
		$$.string_exp = $1.string_exp;
	}
	| relational_expression '<' shift_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| relational_expression '>' shift_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| relational_expression LE_OP shift_expression{
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| relational_expression GE_OP shift_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
equality_expression
	: relational_expression{
		$$.list = $1.list;
		$$.string_exp = $1.string_exp;
	}
	| equality_expression EQ_OP relational_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| equality_expression NE_OP relational_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
and_expression
	: equality_expression {
		$$.list = $1.list;
		$$.string_exp = $1.string_exp;
	}
	| and_expression '&' equality_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
exclusive_or_expression
	: and_expression{
		$$.list = $1.list;
		$$.string_exp = $1.string_exp;
	}
	| exclusive_or_expression '^' and_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
inclusive_or_expression
	: exclusive_or_expression {
		$$.list = $1.list;
		$$.string_exp = $1.string_exp;
	}
	| inclusive_or_expression '|' exclusive_or_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
logical_and_expression
	: inclusive_or_expression {
		$$.list = $1.list;
		$$.string_exp = $1.string_exp;
	}
	| logical_and_expression AND_OP inclusive_or_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
logical_or_expression: logical_and_expression {
		$$.list = $1.list;

		$$.string_exp = $1.string_exp;
	}
	| logical_or_expression OR_OP logical_and_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s||%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
//TODO add conditional assignement

assignment_expression:
	logical_or_expression {
		$$.list = $1.list;

		$$.string_exp = $1.string_exp;
	}
	| unary_expression assignment_operator assignment_expression {
		concatenate($1.list,$3.list);
		$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+2);
		snprintf($$.string_exp,len1+len2+2, "%s=%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($2.string_exp);
		free($3.string_exp);
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

		char * curr_var_name_tmp = $1.string_val;
		int len = strlen(curr_var_name_tmp);
		$$.string_exp = malloc(len+1);
		snprintf($$.string_exp,len+1, "%s",curr_var_name_tmp);
	}
	| CONST_INT {
		push(&$$.list,0);

		char * curr_var_name_tmp = $1.string_val;
		int len = strlen(curr_var_name_tmp);
		$$.string_exp = malloc(len+1);
		snprintf($$.string_exp,len+1, "%s",curr_var_name_tmp);
	}
	| CONST_FLOAT {
		push(&$$.list,0);

		char * curr_var_name_tmp = $1.string_val;
		int len = strlen(curr_var_name_tmp);
		$$.string_exp = malloc(len+1);
		snprintf($$.string_exp,len+1, "%s",curr_var_name_tmp);
		float a = strtof(curr_var_name_tmp, NULL);
	}
	| '(' expression ')' {
		$$.list = $2.list;

		char * curr_var_name_tmp = $2.string_exp;
		int len = strlen(curr_var_name_tmp);
		$$.string_exp = malloc(len+3);
		snprintf($$.string_exp,len+4, "(%s)",$2.string_exp);
		free($2.string_exp);
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
