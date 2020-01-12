%{
  	#include "headers/linkedlist.h"
	#include<stdio.h>
	#include "headers/defs.h"
	#include "headers/y.tab.h"
	#include <stdlib.h>
	int for_depth_counter_var = 0;
	int direct_declarator_var = 0;
	int current_type_var = -1;


	symbol_p index_2_entry;
	symbol_p arr_id;

	symbol_p index_sentry;
	symbol_p op_index;
	symbol_p inc_index;
	char * assig_exp;
	char * sh_exp;
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


		symbol_p i;
		symbol_p j;
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
}
%token INT VOID FLOAT
%token FOR WHILE DO IF ELSE RETURN
%token CONST_Q //type qualifier  const int...
%token <vv> CONST_INT CONST_FLOAT IDENTIFIER STRING CONST
%token '='
%token '(' ')' ';' '}' '{' ']' '[' '/' '*' '+' '-' '<' '>' '%'
%token AND_OP OR_OP LE_OP GE_OP EQ_OP NE_OP INC DEC LEFT_OP RIGHT_OP
%type <vv> type_specifier  primary_expression expression
%type <vv>  postfix_expression
%type <vv>  multiplicative_expression additive_expression shift_expression relational_expression equality_expression unary_expression assignment_expression
%type <vv> optimization1_1 level2 optimization2_1 and_expression exclusive_or_expression inclusive_or_expression logical_or_expression logical_and_expression assignment_operator
%type <zz> comp_op
%start optimizer_start
%%
optimizer_start : optimization1 ;//| rule11;
a : ;
level_vec : level1 | level2;

level1 : level1_1 | level1_2 ;
level1_2 : vec_swap;



vec_swap : type_specifier IDENTIFIER assignment_operator IDENTIFIER '[' IDENTIFIER ']' ';'
	//    1              2           3                   4       5      6        7  8
	   IDENTIFIER '[' IDENTIFIER ']' assignment_operator IDENTIFIER '[' IDENTIFIER ']' ';'
	//     9       10    11       12        13              14       15     16      17  18
	   IDENTIFIER '[' IDENTIFIER ']' assignment_operator IDENTIFIER ';'
       //     19       20     21      22         23             24       25

	   {
	   		if($2.sentry == $24.sentry && index_sentry == $6.sentry && index_sentry == $16.sentry &&
	   		   $11.sentry == index_sentry && $21.sentry == index_sentry && $9.sentry != $19.sentry &&
	   		   $4.sentry == $9.sentry && $14.sentry == $19.sentry ) {
				void cblas_sswap(const int size, float *X, const int incX,float *Y, const int incY);

				int len = strlen(sh_exp)+strlen(assig_exp)+strlen($9.string_val)+
				      strlen(assig_exp)+strlen($19.string_val)+strlen(assig_exp)+50;
				char* res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"cblas_sswap((const int)%s-%s+1,(%s+%s),1,(%s+%s),1);",sh_exp,assig_exp,$9.string_val,assig_exp,$19.string_val,assig_exp);
				write_res(res,len);
				free(res);
				return 1333;
	   		   }
	   		   else{
						perror("Swap form without conditions!\n");
	   		   }
	   }
;

level2:  a a a a a a a a a a a a a a a 
		FOR '(' IDENTIFIER {index_2_entry = $18.sentry;} '=' assignment_expression ';' IDENTIFIER comp_op shift_expression ';'  IDENTIFIER INC ')' 
//      16  17     18                   19               20        21             22    23          24        25          26       27    28  29                              
			'{' IDENTIFIER {arr_id = $31.sentry;} '[' IDENTIFIER ']' '[' IDENTIFIER ']'   assignment_operator optimization2_1 ';' '}'

//			 30   31              32              33     34      35   36    37       38            39			   40

		{
			perror("matrix optimization 2\n");

					if (op_index != index_sentry || inc_index != index_sentry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					if ($23.sentry != index_2_entry || $27.sentry != index_2_entry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					if ($34.sentry != index_sentry || $37.sentry != index_2_entry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					if (arr_id == index_2_entry || arr_id == index_sentry) {
						perror("[-] loop doesn't follow optimization crits \n");
						return -1234;
					}

					char *res;
					int len;
					if ($40.type == 1) {
						printf("MATRIX COPY\n");
						if ($31.sentry != $40.vec && $40.i == index_sentry && $40.j == index_2_entry) {

							perror("Matrix copy optimization \n");
							char *x =  $31.string_val;
							char *y =  $40.vec->name;

							len = strlen(sh_exp) + strlen(assig_exp) + strlen(x) + strlen(y) + 27 + strlen($25.string_exp) + strlen($21.string_exp);
							res = (char *) malloc(sizeof(char) * len);
							memset(res, 0, len);
							snprintf(res, len, "matrix_copy(%s-%s+1, %s-%s+1, %s, %s);", sh_exp, assig_exp, $25.string_exp, $21.string_exp, x, y);
							write_res(res, len);
							free(res);
							return 1333;
						} else {

							perror("Matrix Initialization \n");
							char *x =  $31.string_val;
							char *y =  $40.string_exp;

							len = strlen(sh_exp) + strlen(assig_exp) + strlen(x) + strlen(y) + 27 + strlen($25.string_exp) + strlen($21.string_exp);
							res = (char *) malloc(sizeof(char) * len);
							snprintf(res, len, "matrix_init(%s-%s+1, %s-%s+1, %s, %s);", sh_exp, assig_exp, $25.string_exp, $21.string_exp, y, x);
							write_res(res, len);
							free(res);
							return 1333;
						}
					} else if ($40.type == 2) {
						printf("MATRIX SCALE\n");
						
						char *x =  $31.string_val;
						char *y =  $40.string_exp;

						len = strlen(sh_exp) + strlen(assig_exp) + strlen(x) + strlen(y) + 28 + strlen($25.string_exp) + strlen($21.string_exp);
						res = (char *) malloc(sizeof(char) * len);
						snprintf(res, len, "matrix_scale(%s-%s+1, %s-%s+1, %s, %s);", sh_exp, assig_exp, $25.string_exp, $21.string_exp, y, x);
						write_res(res, len);
						free(res);
						return 1333;
					} else if ($40.type == 3) {
						printf("Matrix Initialization \n");
						char *x =  $31.string_val;
						char *y =  $40.string_exp;

						len = strlen(sh_exp) + strlen(assig_exp) + strlen(x) + strlen(y) + 27 + strlen($25.string_exp) + strlen($21.string_exp);
						res = (char *) malloc(sizeof(char) * len);
						snprintf(res, len, "matrix_init(%s-%s+1, %s-%s+1, %s, %s);", sh_exp, assig_exp, $25.string_exp, $21.string_exp, y, x);
						write_res(res, len);
						free(res);
						return 1333;
					}

				}
		;

level1_1 : a a a a a a a a a a a a a a a
              IDENTIFIER '[' IDENTIFIER ']'  assignment_operator optimization1_1 ';'
   //            16       17     18     19           20                21         22
{
			if(index_sentry != op_index || index_sentry != inc_index){
				perror("[-] loop doesn't follow optimization crits \n");
				return -1234;
			}
			char *res,*res1,*res2;
			int len ;
			int len2;
			if($21.type == 1){
				if($21.vec == $16.sentry && $21.index_sentry != 0 && $21.index_sentry == index_sentry ){
					//scaling....
					perror("Scaling optimization \n");
					len = strlen(assig_exp)+strlen(sh_exp)+strlen($21.right)+strlen($21.left)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,$21.right,$16.string_val);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if($21.index_sentry != 0 && $21.index_sentry != index_sentry){
					perror("init_vec 1 \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen($16.string_val)+strlen(assig_exp)+strlen($21.left)+strlen($21.right)+45;
					perror("strlen done\n");
					res = malloc(len);
					memset(res,0,len);
					perror("malloc done\n");
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",sh_exp,assig_exp,$16.string_val,assig_exp,$21.left,$21.right);
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
			if($21.type == 2){
				perror("IDENTIFIER '[' IDENTIFIER ']'\n");
				if($21.vec != $16.sentry && $21.index_sentry != 0 && $21.index_sentry == index_sentry ){
					//scopy
					perror("Scopy optimization \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen($21.vec->name)+strlen(assig_exp)+strlen($16.string_val)+strlen(assig_exp)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_scopy((const int)%s-%s+1,%s+%s,1,%s+%s,1);",sh_exp,assig_exp,$21.vec->name,assig_exp,$16.string_val,assig_exp);
					write_res(res,len);
					free(res);
					return 1333;

				}
				else if( $21.index_sentry != 0 && $21.index_sentry != index_sentry){
					perror("init_vec2  \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen($16.string_val)+strlen(assig_exp)+strlen($21.left)+45;
					res = malloc(len);
					memset(res,0,len);
					perror($21.left);
					snprintf(res,len,"init_fvec(%s-%s+1,%s+%s,(const float)%s);",sh_exp,assig_exp,$16.string_val,assig_exp,$21.left);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else{
					perror("init dependece 2 \n");
					return -123;
				}

			}
			else if($21.type == 3){
				if($21.vec == $16.sentry && $21.index_sentry != 0 && $21.index_sentry == index_sentry ){
					//scaling....
					perror("Scaling optimization 3\n");
					len = 100;//strlen(assig_exp)+strlen(sh_exp)+strlen($21.right)+strlen($21.left)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,$21.left,$21.vec->name);
					write_res(res,len);
					free(res);
					return 1333;
				}
				else if($21.index_sentry != 0 && $21.index_sentry != index_sentry){
					perror("init_vec 193 \n");
					len = strlen(sh_exp)+strlen(assig_exp)+strlen($16.string_val)+strlen(assig_exp)+strlen($21.left)+strlen($21.right)+45;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s*%s);",sh_exp,assig_exp,$16.string_val,assig_exp,$21.right,$21.left);
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
			else if($21.type == 5){
				perror("init_vec 209 \n");
				len = strlen(sh_exp)+strlen(assig_exp)+strlen($16.string_val)+strlen(assig_exp)+strlen($21.left)+45;
				res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"init_fvec(%s-%s+1,(float*)(%s+%s),(const float)%s);",sh_exp,assig_exp,$16.string_val,assig_exp,$21.left);
				perror("sprintf done\n");
				write_res(res,len);
				free(res);
				return 1333;
			}
			else if($21.type == 41){
				perror("axy 6 \n");
				//y = a*x + y
				if($16.sentry == $21.vec && $16.sentry == $21.vec2){
					//y = y*a + y*b
					// 1 - y = y * a
					// 2 - y = y + y *b
					perror("y = y*a+y*b :/ can't be done \n");
					return -1;
					//TODO delete later
					len = strlen(assig_exp)+strlen(sh_exp)+strlen($21.left)+strlen($16.string_val)+50;
					res = malloc(len);
					memset(res,0,len);
					snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,$21.left,$16.string_val);
					len2 = strlen(assig_exp)+strlen($21.left)+strlen($16.string_val)*2+70;
					res2 = malloc(len2);
					snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,$21.right,$16.string_val,$16.string_val);
					res1 = malloc(len+len2+3);
					snprintf(res1,len+len2+3,"%s%s",res,res2);
					printf("%s\n",res1);
					write_res(res1,len+len2+3);
					free(res);
					free(res1);
					free(res2);

				}
				else if($16.sentry == $21.vec && $16.sentry != $21.vec2){
					if($21.left != 0 && $21.right != 0){
						perror("Z = Z*a+Y*b =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen($21.left)+strlen($16.string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,$21.left,$16.string_val);
						len2 = strlen(assig_exp)+strlen($21.right)+strlen($16.string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,$21.right,$21.vec2->name,$16.string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						free(res);
						free(res1);
						free(res2);
					}
					else if($21.left == 0 && $21.right != 0){
						perror("Z = Z +Y*b =D \n");
						len2 = strlen(assig_exp)+strlen($21.right)+strlen($16.string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,$21.right,$21.vec2->name,$16.string_val);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
					}
					else if($21.left != 0 && $21.right == 0){
						perror("Z = Z*a +Y =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen($21.left)+strlen($16.string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,$21.left,$16.string_val);
						len2 = strlen(assig_exp)+strlen($16.string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,$21.vec2->name,$16.string_val);
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
						len2 = strlen(assig_exp)+strlen($16.string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,$21.vec2->name,$16.string_val);
						printf("%s\n",res2);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
						return 1333;
					}



					return 1333;
				}
				else if($16.sentry != $21.vec && $16.sentry == $21.vec2){
					perror("X = a*Y + X");
					if($21.left != 0 && $21.right != 0){
						perror("Z = Z*a+Y*b =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen($21.left)+strlen($16.string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,$21.left,$16.string_val);
						len2 = strlen(assig_exp)+strlen($21.right)+strlen($16.string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,(const float)%s,(const float*)%s,1,%s,1);",sh_exp,assig_exp,$21.right,$21.vec2->name,$16.string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						free(res);
						free(res1);
						free(res2);
					}
					else if($21.left == 0 && $21.right != 0){
						perror("Z = Y + a*Z =D \n");
						len = strlen(assig_exp)+strlen(sh_exp)+strlen($21.right)+strlen($16.string_val)+50;
						res = malloc(len);
						memset(res,0,len);
						perror("memset\n");
						snprintf(res,len,"cblas_sscal((const int)%s-%s+1,(const float)%s,%s,1);",sh_exp,assig_exp,$21.right,$16.string_val);
						len2 = strlen(assig_exp)+strlen($21.right)+strlen($16.string_val)*2+70;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,$21.vec->name,$16.string_val);
						res1 = malloc(len+len2+3);
						snprintf(res1,len+len2+3,"%s%s",res,res2);
						printf("%s\n",res1);
						write_res(res1,len+len2+3);
						free(res);
						free(res1);
						free(res2);
					}
					else if($21.left != 0 && $21.right == 0){
						printf("=======> HERE : %s\n",$21.vec->name);
						printf("=======> HERE : %s\n",$21.vec2->name);
						perror("Z = a*Z +Y =D \n");
						len2 = strlen(assig_exp)*3+strlen(sh_exp)+strlen($16.string_val)+strlen($21.vec->name)+strlen($21.left)+100;
						res2 = malloc(len2);
						memset(res2,0,len2);
						snprintf(res2,len2,"cblas_saxpy((const int)(%s)-(%s)+1,(const float)(%s),(const float*)(%s+(%s)),1,(%s+(%s)),1);",sh_exp,assig_exp,$21.left,$21.vec->name,assig_exp,$16.string_val,assig_exp);
						printf("$$=====%s\n",res2);
						write_res(res2,len2+3);
						free(res2);
						return 1333;
//=============================================================================
					}
					else {
						perror("X = X + Y \n");
						len2 = strlen(assig_exp)+strlen($16.string_val)*2+55;
						res2 = malloc(len2);
						snprintf(res2,len2,"cblas_saxpy((const int)%s-%s+1,1.0,(const float*)%s,1,%s,1);",sh_exp,assig_exp,$21.vec2->name,$16.string_val);
						printf("%s\n",res2);
						write_res(res2,len2);
						printf("%s\n",res2);
						free(res2);
						return 1333;
					}



				}
				else{
					//y = x*a + y*b
					perror("error is here...\n");
					perror("y = x*a+y*b =D \n");
					return -1;
				}
				return 1333;

			}
			else if($21.type == 42){
				perror("init_vec 6 \n");
				if($16.sentry == $21.vec || $16.sentry == $21.vec2){
					perror("optimization 42 can't be done :/ \n");
					return -1;
				}
				len = strlen(sh_exp)+strlen(assig_exp)+strlen($16.string_val)+strlen(assig_exp)+strlen($21.left)+55;
				res = malloc(len);
				memset(res,0,len);
				snprintf(res,len,"init_fvec((const int)%s-%s+1,(float*)(%s+%s),(const float)%s);",sh_exp,assig_exp,$16.string_val,assig_exp,$21.left);
				perror("sprintf done\n");
				write_res(res,len);
				free(res);
				return 1333;
			}

			index_sentry = 0;
}

optimization1 : FOR '(' IDENTIFIER {index_sentry = $3.sentry;}
	//       1   2     3		4
		'=' assignment_expression {assig_exp = $6.string_exp;}';' IDENTIFIER {op_index =$9.sentry; } comp_op shift_expression {sh_exp = $12.string_exp;}';'  IDENTIFIER{inc_index=$15.sentry;} INC ')'
	//       5       6                 7                          8          9       10            11     12       13   14
		'{' level_vec '}'
	//       15  16         17  18         19       20                21            22  23


optimization2_1: 
	IDENTIFIER '[' IDENTIFIER ']' '[' IDENTIFIER ']' {
		$$.type  = 1; 
		
		$$.depth = 0;
		$$.index_dep = 0;
		
		if (arr_id == $1.sentry) {
			perror("[-] unable to optimize \n");
			return -1;
		}
		if ($3.sentry == index_sentry && $6.sentry == index_2_entry) {
			$$.i = $3.sentry;
			$$.j = $6.sentry;
		} else if ($3.sentry != index_sentry && $6.sentry != index_sentry) {
			$$.i = 0;
			$$.j = 0;
		} else {
			perror("[-] unable to optimize \n");
			return -1;
		}
		$$.vec = $1.sentry;
		int len = strlen($1.string_val) + strlen($3.string_val) + strlen($6.string_val) + 5;
		$$.string_exp = (char *) malloc(sizeof(char) * len);
		memset($$.string_exp, 0, len);
		snprintf($$.string_exp, len, "%s[%s][%s]", $1.string_val, $3.string_val, $6.string_val);
	}
	| IDENTIFIER '[' IDENTIFIER ']' '[' IDENTIFIER ']' '*' primary_expression {
		$$.type = 2;
		
		if ($3.sentry == index_sentry && $6.sentry == index_2_entry && arr_id == $1.sentry) {
			$$.i = $3.sentry;
			$$.j = $6.sentry;
		} else {
			perror("[-] unable to optimize \n");
			return -1;
		}
		$$.vec = $1.sentry;
		$$.string_exp = $9.string_exp;
	}
	|  primary_expression  '*' IDENTIFIER '[' IDENTIFIER ']' '[' IDENTIFIER ']' {
		$$.type = 2;
		
		if ($5.sentry == index_sentry && $8.sentry == index_2_entry && arr_id == $3.sentry) {
			$$.i = $5.sentry;
			$$.j = $8.sentry;
		} else {
			perror("[-] unable to optimize \n");
			return -1;
		}
		$$.vec = $3.sentry;
		$$.string_exp = $1.string_exp;
	} | expression {
		$$.type  = 3;
		$$.depth = 0;
		$$.index_dep = 0;
		int len = strlen($1.string_exp);

		$$.string_exp = (char *) malloc(sizeof(char) * len);
		memset($$.string_exp, 0, len);
		strncpy($$.string_exp, $1.string_exp, len);
	}
	;

optimization1_1 :
 		IDENTIFIER '[' IDENTIFIER ']' '*' primary_expression{
			$$.type = 1;
			$$.depth = 0;
			$$.index_dep = 0;
			if($3.sentry == index_sentry){
				$$.index_dep = 1;
			}
			$$.exp_dep = dep_exist(index_sentry,$6.list);
			if($$.exp_dep == 1){
				perror("[-] multplication dependence exist \n");
				return -1233;
			}
			int left_len = strlen($1.string_val)+strlen($3.string_val)+4;
			$$.left = malloc(left_len);
			memset($$.left,0,left_len);
			snprintf($$.left,left_len,"%s[%s]",$1.string_val,$3.string_val);

			$$.right = $6.string_exp;
			$$.vec = $1.sentry;
			$$.index_sentry = $3.sentry;

		}
		| IDENTIFIER '[' IDENTIFIER ']' {
			$$.type = 2;
			$$.depth = 0;

			$$.vec = $1.sentry;
			$$.index_sentry = $3.sentry;


			int left_len = strlen($1.string_val)+strlen($3.string_val)+3;
			printf("left len : %d\n",left_len);
			$$.left = malloc(left_len);
			memset($$.left,0,left_len);
			snprintf($$.left,left_len,"%s[%s]",$1.string_val,$3.string_val);
			printf("left len : %d\n",left_len);
		}
		| primary_expression '*' IDENTIFIER '[' IDENTIFIER ']' {

			perror("primary_expression '*' IDENTIFIER '[' IDENTIFIER ']' \n");
			$$.type = 3;
			$$.depth = 0;
			$$.index_dep = 0;
			if($3.sentry == index_sentry){
				$$.index_dep = 1;
			}
			$$.exp_dep = dep_exist(index_sentry,$1.list);
			if($$.exp_dep == 1){
				perror("[-] left multplication dependence exist \n");
				return -1233;
			}
			int right_len = strlen($3.string_val)+strlen($5.string_val)+3;
			$$.right = malloc(right_len);
			memset($$.right,0,right_len);
			snprintf($$.right,right_len,"%s[%s]",$3.string_val,$5.string_val);
			$$.left = $1.string_exp;
			$$.vec = $3.sentry;
			$$.index_sentry = $5.sentry;
		}
		| optimization1_1 '+' optimization1_1 {
			$$.type = 4;
			$$.depth = ($1.depth > $3.depth)?$1.depth:$3.depth;
			$$.depth = $$.depth+1;
			if($$.depth > 1){
				perror("depth is greater than 1");
				return -144;
			}
			perror("optimization1_1 '+' optimization1_1 \n");

			if($1.type == 1 && $3.type == 1){
				perror("1-1\n");
				//three cases axy,init,dependence error.
				$$.vec = $1.vec;
				$$.vec2 = $3.vec;
				if($1.index_sentry == index_sentry &&  $3.index_sentry == index_sentry){
					if($1.vec == $1.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					$$.type = 41;
					$$.index_sentry = $1.index_sentry;
					$$.left = $1.right;
					$$.right = $3.right;
					//to perform axy  y = a*x + y
				}
				else if($1.index_sentry != index_sentry && $3.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					$$.type = 42;
					int len = strlen($1.left)+strlen($1.right)+strlen($3.left)+strlen($3.right)+6;
					$$.left = malloc(len);
					memset($$.left,0,len);
					snprintf($$.left,len,"%s*%s+%s*%s",$1.left,$1.right,$3.left,$3.right);

				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}
			}
			else if($1.type == 1 && $3.type == 2){
				perror("1-2\n");
				// Z = X*a + Y ..
				$$.vec = $1.vec;
				$$.vec2 = $3.vec;
				if($1.index_sentry == index_sentry &&  $3.index_sentry == index_sentry){
					if($1.vec == $1.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 43 optimization \n");
					$$.index_sentry = $1.index_sentry;
					$$.left = $1.right;
					$$.right = 0;
					$$.type = 41;
				}
				else if($1.index_sentry != index_sentry && $3.index_sentry != index_sentry){
					perror("--------> condition 44 optimization \n");
					$$.type = 42;
					int len = strlen($1.left)+strlen($1.right)+strlen($3.left)+strlen($3.right)+6;
					$$.left = malloc(len);
					memset($$.left,0,len);
					snprintf($$.left,len,"%s*%s+%s*%s",$1.left,$1.right,$3.left);
				}
				else{
					perror("optimization + optimization dependence 2\n");
					return -1;
				}
			}
			else if ($1.type == 1 && $3.type == 3){
				perror("1-3\n");
				$$.vec = $1.vec;
				$$.vec2 = $3.vec;
				if($1.index_sentry == index_sentry &&  $3.index_sentry == index_sentry){
					if($1.vec == $1.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					$$.type = 41;
					$$.index_sentry = $1.index_sentry;
					$$.left = $1.right;
					$$.right = $3.left;
				}
				else if($1.index_sentry != index_sentry && $3.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					$$.type = 42;
					int len = strlen($1.left)+strlen($1.right)+strlen($3.left)+strlen($3.right)+6;
					$$.left = malloc(len);
					memset($$.left,0,len);
					snprintf($$.left,len,"%s*%s+%s*%s",$1.left,$1.right,$3.left,$3.right);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}
			}
			else if($1.type == 2 && $3.type == 1){
				perror("2-1\n");
				// Z = X + Y*a ..
				$$.vec = $1.vec;
				$$.vec2 = $3.vec;
				if($1.index_sentry == index_sentry &&  $3.index_sentry == index_sentry){
					if($1.vec == $1.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 43 optimization \n");
					$$.index_sentry = $1.index_sentry;
					$$.right = $3.right;
					$$.left = 0;
					$$.type = 41;
				}
				else if($1.index_sentry != index_sentry && $3.index_sentry != index_sentry){
					perror("--------> condition 44 optimization \n");
					$$.type = 42;
					int len = strlen($1.left)+strlen($1.right)+strlen($3.left)+strlen($3.right)+6;
					$$.left = malloc(len);
					memset($$.left,0,len);
					snprintf($$.left,len,"%s+%s*%s",$1.left,$3.left,$3.right);
				}
				else{
					perror("optimization + optimization dependence 2\n");
					return -1;
				}

			}
			else if($1.type == 2 && $3.type == 2){
				perror("2-2\n");
				// Z = X + Y ..
				$$.vec = $1.vec;
				$$.vec2 = $3.vec;
				if($1.index_sentry == index_sentry &&  $3.index_sentry == index_sentry){
					if($1.vec == $1.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 43 optimization \n");
					$$.index_sentry = $1.index_sentry;
					$$.right = 0;
					$$.left = 0;
					$$.type = 41;
				}
				else if($1.index_sentry != index_sentry && $3.index_sentry != index_sentry){
					perror("--------> condition 44 optimization \n");
					$$.type = 42;
					int len = strlen($1.left)+strlen($3.left)+6;
					$$.left = malloc(len);
					memset($$.left,0,len);
					snprintf($$.left,len,"%s+%s",$1.left,$3.left);
				}
				else{
					perror("optimization + optimization dependence 3\n");
					return -1;
				}

			}
			else if($1.type == 2 && $3.type == 3){
				// X = Z + a*W
				perror("2-3\n");
				$$.vec = $1.vec;
				$$.vec2 = $3.vec;
				if($1.index_sentry == index_sentry &&  $3.index_sentry == index_sentry){
					if($1.vec == $1.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					$$.type = 41;
					$$.index_sentry = $1.index_sentry;
					$$.left = 0;
					$$.right =  $3.left;
				}
				else if($1.index_sentry != index_sentry && $3.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					$$.type = 42;
					int len = strlen($1.left)+strlen($3.left)+strlen($3.right)+6;
					$$.left = malloc(len);
					memset($$.left,0,len);
					snprintf($$.left,len,"%s+%s*%s",$1.left,$3.right,$3.left);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}

			}
			else if($1.type == 3 && $3.type == 3){
				perror("3-3\n");
				// Y = a*Z+b*W
				//three cases axy,init,dependence error.
				$$.vec = $1.vec;
				$$.vec2 = $3.vec;
				if($1.index_sentry == index_sentry &&  $3.index_sentry == index_sentry){
					if($1.vec == $1.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					$$.type = 41;
					$$.index_sentry = $1.index_sentry;
					$$.left = $1.left;
					$$.right = $3.left;
				}
				else if($1.index_sentry != index_sentry && $3.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					$$.type = 42;
					int len = strlen($1.left)+strlen($1.right)+strlen($3.left)+strlen($3.right)+6;
					$$.left = malloc(len);
					memset($$.left,0,len);
					snprintf($$.left,len,"%s*%s+%s*%s",$1.right,$1.left,$3.right,$3.left);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}
			}
			else if($1.type == 3 && $3.type == 1){
				perror("3-1\n");
				// Y = a*Z+W*b
				$$.vec = $1.vec;
				$$.vec2 = $3.vec;
				if($1.index_sentry == index_sentry &&  $3.index_sentry == index_sentry){
					if($1.vec == $1.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					$$.type = 41;
					$$.index_sentry = $1.index_sentry;
					$$.left = $1.left;
					$$.right = $3.right;
				}
				else if($1.index_sentry != index_sentry && $3.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					$$.type = 42;
					int len = strlen($1.left)+strlen($1.right)+strlen($3.left)+strlen($3.right)+6;
					$$.left = malloc(len);
					memset($$.left,0,len);
					snprintf($$.left,len,"%s*%s+%s*%s",$1.left,$1.right,$3.left,$3.right);
				}
				else{
					perror("optimization + optimization dependence 1\n");
					return -1;
				}

			}
			else if($1.type == 3 && $3.type == 2){
				perror("3-2\n");
				// X = a*W + Z
				$$.vec = $1.vec;
				$$.vec2 = $3.vec;

				if($1.index_sentry == index_sentry &&  $3.index_sentry == index_sentry){
					if($1.vec == $1.vec2){
						perror("--------> 41 optimization can't be done\n");
						return -1;
					}
					perror("--------> 41 optimization \n");
					$$.type = 41;
					$$.index_sentry = $1.index_sentry;
					$$.left = $1.left;
					$$.right =  0;
				}
				else if($1.index_sentry != index_sentry && $3.index_sentry != index_sentry){
					perror("--------> 42 optimization \n");
					$$.type = 42;
					int len = strlen($1.left)+strlen($3.left)+strlen($1.right)+6;
					$$.left = malloc(len);
					memset($$.left,0,len);
					snprintf($$.left,len,"%s*%s+%s",$1.left,$1.right,$3.left);
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
		| assignment_expression {
			perror("Logical or expr \n");
			$$.type = 5;
			$$.depth = 0;

			int op = dep_exist(index_sentry,$1.list);
			if(op == 1){
				perror("init logical expr failed\n");
				return -123;
			}

			$$.left = $1.string_exp;
		}


comp_op : LE_OP {
	$$.op_type = 0;
}
	| '<' {
	 	$$.op_type = 1;
	}
	;


//=====================================EXTERNAL-END=====================================================================

//=====================================statement-START==================================================================



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


//=======================================================USED
//DONE
type_specifier
	: VOID {
		$$.type = VOID;
	}
	| INT  {
		$$.type = INT;

	}
	| FLOAT {
		$$.type = FLOAT;

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
