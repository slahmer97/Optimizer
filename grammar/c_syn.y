%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "headers/defs.h"
	#include "headers/symbol.h"
	#include "headers/linkedlist.h"
	#include "headers/ast.h"
	#include "headers/y.tab.h"

	int for_depth_counter_var = 0;
	int direct_declarator_var = 0;
	int current_type_var = -1;
	int yydebug = 1;
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
		node id;
		struct ast* _ast;
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
%type <vv> type_specifier declaration_specifiers primary_expression expression statement compound_statement statement_list declaration_list identifier_list
%type <vv> selection_statement pointer direct_declarator declarator init_declarator declaration init_declarator_list initializer initializer_list postfix_expression
%type <vv> iteration_statement multiplicative_expression additive_expression shift_expression relational_expression equality_expression unary_expression assignment_expression
%type <vv> expression_statement and_expression exclusive_or_expression inclusive_or_expression logical_or_expression logical_and_expression assignment_operator
%start optimizer_start
%%

optimizer_start : iteration_statement
		| iteration_statement optimizer_start

//==================================START-EXTERNAL======================================================================
translation_unit: compound_statement {
		//printf("DONE ! \n");
		//return 0;
	}
	//| translation_unit compound_statement
	;
compound_statement
	: '{' '}' {
	}
	| '{' statement_list '}' {
		$$.id = $2.id;
		$$._ast = $2._ast;
	}
	| '{' declaration_list '}' {
		$$.id = $2.id;
		$$._ast = $2._ast;
	}
	| '{' declaration_list statement_list '}' {
		$$.id = fusion($2.id, $3.id);
	}
	;

//=====================================EXTERNAL-END=====================================================================

//=====================================statement-START==================================================================

statement_list
	: statement {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| statement_list statement {
		$$.id = fusion($1.id, $2.id);
	}
statement
	: compound_statement {
		$$.id = $1.id;
		$$._ast = $1._ast;
	  }
	| expression_statement {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| selection_statement {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| iteration_statement {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	;
expression_statement
	: ';' {
	}
	| expression ';' {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	;

//=======================================Statement-END==================================================================

//=======================================LOOP-Conditional-EXR================================================================
selection_statement: IF '(' expression ')' compound_statement {

	}
	| IF '(' expression ')' compound_statement ELSE compound_statement {
	}
	;
iteration_statement:
	 WHILE {printf("START-WHILE\n ");}'(' expression ')' compound_statement {printf("END-WHILE\n ");}

	| iter_counter FOR '(' expression_statement expression_statement expression')' compound_statement {
		$$.id = $8.id;
		int n = 0;
		while($$.id->next != NULL) {
			$$.id = $$.id->next;
			n++;
		}
		printf("test: %d\n", n);
		$$._ast = ast_for_operation($4._ast, $5._ast, $6._ast, $8._ast);
		ast_print($$._ast, 0);
	}
iter_counter : {}
//=======================================CONDITIONAL-EXPR-END===========================================================

//==================================START-ASSIGNEMENT===================================================================
expression:
 	assignment_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
 	}
	| expression ',' assignment_expression {
      $$.id = fusion($1.id, $3.id);
	}
	;
postfix_expression: primary_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| postfix_expression '[' expression ']' {
		$$.id = fusion($1.id, $3.id);
		$$._ast = ast_new_operation(AST_ARR_ACCESS, $1._ast,$3._ast);
	}
	| postfix_expression '(' ')' {
		$$.id = $1.id;
	}
	| postfix_expression INC {
		$$.id = $1.id;
		$$._ast = ast_new_operation(AST_INC,$1._ast,0);
	}
	| postfix_expression DEC {
		$$.id = $1.id;
		$$._ast = ast_new_operation(AST_INC,$1._ast,0);
	}

unary_expression
	: postfix_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| INC unary_expression {
		$$.id = $2.id;
		$$._ast = ast_new_operation(AST_INC, NULL, $2._ast);
	}
	| DEC unary_expression {
		$$.id = $2.id;
		$$._ast = ast_new_operation(AST_INC, NULL, $2._ast);
	}
	;
multiplicative_expression
	: unary_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| multiplicative_expression '*' unary_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_MUL, $1._ast, $3._ast);
	}
	| multiplicative_expression '/' unary_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_DIV, $1._ast, $3._ast);
	}
	| multiplicative_expression '%' unary_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_MOD, $1._ast, $3._ast);
	}
	;
additive_expression
	: multiplicative_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| additive_expression '+' multiplicative_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_ADD, $1._ast, $3._ast);
	}
	| additive_expression '-' multiplicative_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_SUB, $1._ast, $3._ast);
	}
	;
shift_expression
	: additive_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| shift_expression LEFT_OP additive_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_LEFT_OP, $1._ast, $3._ast);
	}
	| shift_expression RIGHT_OP additive_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_RIGHT_OP, $1._ast, $3._ast);
	}
	;
relational_expression
	: shift_expression{
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| relational_expression '<' shift_expression {
    	$$.id = fusion($1.id, $3.id);
		$$._ast = ast_new_operation(AST_LOWER, $1._ast, $3._ast);
	}
	| relational_expression '>' shift_expression {
      	$$.id = fusion($1.id, $3.id);
		$$._ast = ast_new_operation(AST_GREATER, $1._ast, $3._ast);
	}
	| relational_expression LE_OP shift_expression{
      	$$.id = fusion($1.id, $3.id);
		$$._ast = ast_new_operation(AST_LOWER_EQUAL, $1._ast, $3._ast);
	}
	| relational_expression GE_OP shift_expression {
      	$$.id = fusion($1.id, $3.id);
		$$._ast = ast_new_operation(AST_GREATER_EQUAL, $1._ast, $3._ast);
	}
	;
equality_expression
	: relational_expression{
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| equality_expression EQ_OP relational_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_EQUAL, $1._ast, $3._ast);
	}
	| equality_expression NE_OP relational_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_NOT_EQUAL, $1._ast, $3._ast);
	}
	;
and_expression
	: equality_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| and_expression '&' equality_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_AND, $1._ast, $3._ast);
	}
	;
exclusive_or_expression
	: and_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| exclusive_or_expression '^' and_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_EOR, $1._ast, $3._ast);
	}
	;
inclusive_or_expression
	: exclusive_or_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| inclusive_or_expression '|' exclusive_or_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_IOR, $1._ast, $3._ast);
	}
	;
logical_and_expression
	: inclusive_or_expression {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	| logical_and_expression AND_OP inclusive_or_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_AND_OP, $1._ast, $3._ast);
	}
	;
logical_or_expression
	: logical_and_expression {
      $$.id = $1.id;
	  $$._ast = $1._ast;
	}
	| logical_or_expression OR_OP logical_and_expression {
      $$.id = fusion($1.id, $3.id);
	  $$._ast = ast_new_operation(AST_OR_OP, $1._ast, $3._ast);
	}
	;
//TODO add conditional assignement

assignment_expression :
	logical_and_expression {
   	 $$.id = $1.id;
	 $$._ast = $1._ast;
	}
	| unary_expression assignment_operator assignment_expression {
    	$$.id = fusion($1.id, $3.id);
	    $$._ast = ast_new_operation(AST_ASSIGN, $1._ast, $3._ast);
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
		$$.id = $1.id;
	}
	| declaration_list declaration {
		$$.id = fusion($1.id, $2.id);
	}
	;//=================================================USED

//DONE
declaration :

	declaration_specifiers init_declarator_list ';' {
		$$.id = fusion($1.id, $2.id);
	}
	; //==========================================================USED

//DONE
declaration_specifiers
	:
	type_specifier {
		$$.id = $1.id;
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
		$$.id = $1.id;
	}
	| init_declarator_list ',' init_declarator {
		$$.id = fusion($1.id, $3.id);
	}
	;

//DONE
init_declarator
	: declarator {
		$$.id = $1.id;
	}
	| declarator '=' initializer {
		$$.id = fusion($1.id, $3.id);
	}

	;

//DONE
declarator
	: pointer direct_declarator {
		$$.id = fusion($1.id, $2.id);
	}
	| direct_declarator {
		$$.id = $1.id;
		$$._ast = $1._ast;
	}
	;

// DONE
direct_declarator
	: IDENTIFIER {
		symbol_p tmp = 0;
		int ret = lookup_symbol_entry($1.string_val, &tmp);
		$$.id = addNode($1.id, tmp);
		$$._ast = ast_new_id($1.string_val);
	}

        | direct_declarator '[' CONST_INT ']' {
			$$.id = fusion($1.id, $3.id);
			$$._ast = ast_new_operation(AST_ARR_ACCESS, $1._ast, $3._ast);
        }
        | direct_declarator '(' ')' {
			$$.id = $1.id;
			$$._ast = $1._ast;
		}

        | direct_declarator '(' identifier_list ')' {
			$$.id = fusion($1.id, $3.id);
			$$._ast = $1._ast;
		}


        ;
// DONE
pointer
	: '*'{

	}
	| '*' pointer {
		$$.id = $2.id;
	}
	;


initializer
	: assignment_expression {
		$$.id = $1.id;
	}
	| '{' initializer_list '}' {
		$$.id = $2.id;
	}
	;
initializer_list
	: initializer {
		$$.id = $1.id;
	}
	| initializer_list ',' initializer {
		$$.id = fusion($1.id, $3.id);
	}
	;

//DONE
primary_expression: IDENTIFIER {
		symbol_p tmp = 0;
		int ret = lookup_symbol_entry($1.string_val, &tmp);
		$$.id = addNode($1.id, tmp);
		$$._ast = ast_new_id($1.string_val);
	}
	| CONST_INT {
		$$.id = (node) 0;
		int tmp = atoi($1.string_val);
		$$._ast = ast_new_number(tmp);
	}
	| CONST_FLOAT {
		$$.id = (node) 0;
		int tmp = atof($1.string_val);
		$$._ast = ast_new_float(tmp);
	}
	| '(' expression ')' {
		$$.id = $2.id;
		$$._ast = $2._ast;
	}
	;


//DONE
identifier_list: IDENTIFIER {
		$$.id = $1.id;
		$$._ast = ast_new_id($1.string_val);
	}
	| identifier_list ',' IDENTIFIER {
		$$.id = fusion($1.id, $3.id);
		 $$._ast = ast_new_operation(AST_LIST, $1._ast, ast_new_id($3.string_val));
	}
	;
%%
node createNode(void){
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    return temp;
}

node fusion(node x, node y) {
	node head, tmp = x;
	if (tmp == NULL)
		head = y;
	else {
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = y;
		head = x;
	}
	return head;
}

node addNode(node head, symbol_p value){
    node temp,p;
    temp = createNode();
    temp->entry = (symbol_p) malloc(sizeof(symbol_p));
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
	printf("error : %s\tline : %d\n", str,line_counter+1);
	return -1;
}

int yywrap()
{
return 1;
}
