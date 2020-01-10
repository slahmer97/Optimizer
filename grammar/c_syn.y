%{
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
%type <vv> optimization1_1 sscale expression_statement and_expression exclusive_or_expression inclusive_or_expression logical_or_expression logical_and_expression assignment_operator
%type <zz> comp_op
%start optimizer_start
%%
optimizer_start : optimization1 ;//| rule11;


optimization1 : FOR '(' IDENTIFIER {index_sentry = $3.sentry;}
	//       1   2     3		4
		'=' assignment_expression ';' IDENTIFIER comp_op shift_expression ';'  IDENTIFIER INC ')'
	//       5       6                 7      8          9       10            11     12       13   14
		'{' IDENTIFIER '[' IDENTIFIER ']'  assignment_operator optimization1_1 ';' '}'
	//       15  16         17  18         19       20                21            22  23
		{
			if(index_sentry != $12.sentry || index_sentry != $8.sentry){
				perror("[-] loop doesn't follow optimization crits \n");
				return -1234;
			}
			char *res;
			int len ;
			if($21.type == 1){
				if($21.vec == $16.sentry){
					//scaling....
					perror("OPTIMIZATION : IDENTIFIER '[' IDENTIFIER ']' = IDENTIFIER '[' IDENTIFIER ']' '*' primary_expression \n");
					len = strlen($6.string_val)+strlen($10.string_val)+strlen($21.right)+strlen($21.left)+50;
					res = malloc(len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",$10.string_val,$6.string_val,$21.right,$21.left);
					write_res(res,len);
					free(res);
					return 1333;
				}








			}


			index_sentry = 0;
		}


optimization1_1 :
 		IDENTIFIER '[' IDENTIFIER ']' '*' primary_expression{
			$$.type = 1;
			$$.depth = 0;
			$$.index_dep = 0;
			if($3.sentry == index_sentry){
				$$.index_dep = 1;
			}
			$$.exp_dep = dep_exist(index_sentry,$6.list);

			int left_len = strlen($1.string_val)+strlen($3.string_val);
			$$.left = malloc(left_len+3);
			snprintf($$.left,left_len,"%s[%s]",$1.string_val,$3.string_val);

			$$.right = $6.string_exp;
			$$.vec = $1.sentry;

		}
		| IDENTIFIER '[' IDENTIFIER ']' {
				perror("IDENTIFIER '[' IDENTIFIER ']'\n");
			$$.type = 2;
			$$.depth = 0;

		}
		| primary_expression '*' IDENTIFIER '[' IDENTIFIER ']' {

			perror("primary_expression '*' IDENTIFIER '[' IDENTIFIER ']' \n");
			$$.type = 3;
			$$.depth = 0;


		}
		| logical_or_expression {
			perror("Logical or expr \n");
			$$.type = 4;
			$$.depth = 0;


		}
		| optimization1_1 '+' optimization1_1 {
			$$.type = 5;
			$$.depth = ($1.depth > $3.depth)?$1.depth:$3.depth;
			$$.depth = $$.depth+1;
			if($$.depth > 1){
				perror("depth is greater than 1");
				return -144;
			}
			perror("optimization1_1 '+' optimization1_1 \n");

		}
rule11:  FOR '(' IDENTIFIER '=' assignment_expression ';' IDENTIFIER comp_op shift_expression ';'  IDENTIFIER INC')'
 		'{' IDENTIFIER '[' IDENTIFIER ']'  assignment_operator IDENTIFIER '[' IDENTIFIER ']' sscale ';' '}'
 		//   15             17                                     20             22           24
 		{
 			// $3.sentry; $8.sentry; $12.sentry; $14.sentry; $17.sentry; $19.sentry;
			symbol_p t = $15.sentry;
			symbol_p z =  $20.sentry;
			char *res;
			int assig_len = strlen($5.string_exp);
			int shift_len = strlen($9.string_exp);
			int index_len = strlen($3.string_val);
			int dest_len = strlen($15.string_val);
			int orig_len = strlen($20.string_val);
			if( $24.type == 1){
				if(z == t){
					perror("[-] Copying vec to it self is not supported yet\n");
					return -33;
				}
				if( t != 0 && z != 0){
					if(!(t->glob_type == FLOAT && z->glob_type == FLOAT)){
						perror("[-] TYPE is not supported yet ");//: %d",t->glob_type);
						return -33;
					}

				}
				printf("EXPR : %s\n",$5.string_exp);
				int total_len = assig_len+shift_len+index_len+dest_len+orig_len+32;
				if( $3.sentry == $11.sentry && $3.sentry == $7.sentry && $3.sentry == $17.sentry && $3.sentry == $22.sentry){
					//cblas_ccopy(const int N, const void *X, const int incX,void *Y, const int incY);
					res = malloc(total_len);
					memset(res,0,total_len);
					if($8.op_type == 0)
						snprintf(res,total_len,"cblas_scopy(%s-%s+1,(%s+%s),%s,(%s+%s),%s);",$9.string_exp,$5.string_exp,$5.string_exp,$20.string_val,"1",$15.string_val,$5.string_exp,"1");
					else if($8.op_type == 1)
						snprintf(res,total_len-2,"cblas_scopy(%s-%s,(%s+%s),%s,(%s+%s),%s);",$9.string_exp,$5.string_exp,$5.string_exp,$20.string_val,"1",$15.string_val,$5.string_exp,"1");

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
				else if ($22.sentry != $3.sentry && $20.sentry != $3.sentry ){

					// init_vec(t,N,expr);
					int lenn = assig_len*2+shift_len+dest_len+orig_len+strlen($22.string_val)+35;
					res = malloc(lenn);
					memset(res,0,lenn);
					if($8.op_type == 0)
						snprintf(res,lenn,"init_fvec(%s-%s+1,(float*)(%s+%s),%s[%s]);",$9.string_exp,$5.string_exp,$15.string_val,$5.string_exp,$20.string_val,$22.string_val);
					else if($8.op_type == 1)
						snprintf(res,lenn-2,"init_fvec(%s-%s,(float*)(%s+%s),%s[%s]);",$9.string_exp,$5.string_exp,$15.string_val,$5.string_exp,$20.string_val,$22.string_val);

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
 			else if($24.type == 2){

 				node_t* head = $24.list;
				printf("-------> head : %p\n",head);
				while(head != 0 && head->val != $3.sentry){
					printf("-------> %p\n",head->val);
					head = head->next;
				}
				printf("-------> sentry : %p\n",$3.sentry);
				if(head  != 0){
 					perror("[-] multiplication with dependence\n");
 					return -1;
 				}

 				if(z != t){
 					if($22.sentry != $3.sentry){
						// init_vec(t,N,expr);
						int lenn = assig_len*2+shift_len+dest_len+orig_len+strlen($22.string_val)+strlen($24.string_val)+100;
						res = malloc(lenn);
						memset(res,0,lenn);
						if($8.op_type == 0)
							snprintf(res,lenn,"init_fvec(%s-%s+1,(float*)(%s+%s),%s[%s]*%s);",$9.string_exp,$5.string_exp,$15.string_val,$5.string_exp,$20.string_val,$22.string_val,$24.string_exp);
						else if($8.op_type == 1)
							snprintf(res,lenn-2,"init_fvec(%s-%s,(float*)(%s+%s),%s[%s]*%s);",$9.string_exp,$5.string_exp,$15.string_val,$5.string_exp,$20.string_val,$22.string_val,$24.string_exp);
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
				//void cblas_sscal(const int size, const float alpha, float *X, const int incX);
				int total_len = 60+strlen($5.string_exp)+strlen($9.string_exp)+strlen($15.string_val)+strlen($24.string_exp);
				char *res = malloc(total_len);
				if($8.op_type == 0)
					snprintf(res,total_len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",$9.string_exp,$5.string_exp,$24.string_exp,$15.string_val);
				else if($8.op_type == 1)
					snprintf(res,total_len-2,"cblas_sscal((const int)%s-%s,(const float)%s,%s,1);",$9.string_exp,$5.string_exp,$24.string_exp,$15.string_val);


				printf("\n---------------\nFunc : \n %s \n---------------\n",res);
				FILE* f = fopen(OPTIMIZER_FILE,"w");
				fprintf(f,"%s",res);
				fclose(f);
				globalData.symbol->bytes_count = total_len;
				free(res);
				return 1333;
				perror("Optimization 173");
 			}
             	};
sscale : '*' primary_expression {
		$$.list = $2.list;
		$$.string_exp = $2.string_exp;
		$$.type = 2;
	}
	| {
		$$.type = 1;
	}
	 ;

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
		//print_list($$.list);
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
        		$$.list = $1.list;
 	}
	| expression ',' assignment_expression {
		$$.list = concatenate($1.list,$3.list);

	}
	;

postfix_expression: primary_expression {
		$$.list = $1.list;
		$$.string_exp = $1.string_exp;

	}
	| postfix_expression '[' expression ']' {
		$$.list = concatenate($1.list,$3.list);

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
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s*%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| multiplicative_expression '/' unary_expression {
		$$.list =concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s/%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| multiplicative_expression '%' unary_expression {
		$$.list  = concatenate($1.list,$3.list);
		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+5, "%s %% %s",$1.string_exp,$3.string_exp);
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
		$$.list  = concatenate($1.list,$3.list);
		//$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+2, "%s+%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| additive_expression '-' multiplicative_expression {
		$$.list = concatenate($1.list,$3.list);
		//$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+2, "%s-%s",$1.string_exp,$3.string_exp);
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
		$$.list  = concatenate($1.list,$3.list);
		//$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s<<%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| shift_expression RIGHT_OP additive_expression {
		$$.list  = concatenate($1.list,$3.list);
		//$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s>>%s",$1.string_exp,$3.string_exp);
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
		$$.list = concatenate($1.list,$3.list);
		//$$.list = $1.list;

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s<%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| relational_expression '>' shift_expression {
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s>%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| relational_expression LE_OP shift_expression{
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s<=%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| relational_expression GE_OP shift_expression {
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s>=%s",$1.string_exp,$3.string_exp);
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
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s==%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	| equality_expression NE_OP relational_expression {
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s!=%s",$1.string_exp,$3.string_exp);
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
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+2, "%s&%s",$1.string_exp,$3.string_exp);
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
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+2, "%s^%s",$1.string_exp,$3.string_exp);
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
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+2, "%s|%s",$1.string_exp,$3.string_exp);
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
		$$.list = concatenate($1.list,$3.list);

		int len1 = strlen($1.string_exp);
		int len2 = strlen($3.string_exp);
		$$.string_exp = malloc(len1+len2+3);
		snprintf($$.string_exp,len1+len2+3, "%s&&%s",$1.string_exp,$3.string_exp);
		free($1.string_exp);
		free($3.string_exp);
	}
	;
logical_or_expression: logical_and_expression {
		$$.list = $1.list;

		$$.string_exp = $1.string_exp;
	}
	| logical_or_expression OR_OP logical_and_expression {
		$$.list = concatenate($1.list,$3.list);

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
		$$.list = concatenate($1.list,$3.list);

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
		$$.list = concatenate($1.list,$3.list);
	}
	;

//DONE
init_declarator
	: declarator {
		$$.list = $1.list;
	}
	| declarator '=' initializer {
		$$.list = concatenate($1.list,$3.list);
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
		$$.list = concatenate($1.list,$3.list);
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
