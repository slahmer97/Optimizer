//                 
// Created by slahmer on 12/28/19.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/ast.h"

char * lvl_frmt_str = {
    "int_vec_set(%s, %s, %s, %s);",
    "int_vec_swap(%s, %s, %s, %s);",
    "int_axpy(%s, %s, %s, %s, %s);",
};

ast* ast_new_operation(ast_type type, ast* left, ast* right) {
    ast* new = (ast *) malloc(sizeof(ast));
    new->type = type;
    new->left = left;
    new->right = right;
    return new;
}

ast* ast_for_operation(ast* init, ast* condition, ast * incr, ast * core) {
    ast* new = (ast *) malloc(sizeof(ast));
    new->type = AST_FOR;
    if (init == NULL || condition == NULL || incr == NULL || core == NULL ) {
        fprintf(stderr, "Tree value is NULL");
        exit(EXIT_FAILURE);
    }
    new->init = init;
    new->condition = condition;
    new->incr = incr;
    new->core = core;
    return new;
}

ast* ast_new_unary_operation(ast_type type, ast* op) {
    ast* new = (ast *) malloc(sizeof(ast));
    new->type = type;
    new->unary_ast = op;
    return new;
}
            
ast* ast_new_number(char *number) {
    ast* new = (ast*) malloc(sizeof(ast));
    new->type = AST_NUMBER;
    new->i_number = strdup(number);
    return new;   
}
ast* ast_new_float(char *number) {
    ast* new = (ast *) malloc(sizeof(ast));
    new->type = AST_FLOAT;
    new->f_number = strdup(number);
    return new;
}
        
ast* ast_new_id(char* id) {
    ast* new = (ast *) malloc(sizeof(ast));
    new->type = AST_ID;
    new->id = strdup(id);
    return new;
}

void ast_free(ast* ast) {
    switch (ast->type) {
        case AST_NUMBER:
            break;
        case AST_ID:
            free(ast->id);
            break;
        case AST_ADD:
        case AST_SUB:
        case AST_MUL:
        case AST_DIV:
        case AST_MOD:
        case AST_FLOAT:
        case AST_LEFT_OP:
        case AST_RIGHT_OP:
        case AST_LOWER_EQUAL:
        case AST_GREATER_EQUAL:
        case AST_GREATER:
        case AST_LOWER:
        case AST_NOT_EQUAL:
        case AST_EQUAL:
        case AST_AND:
        case AST_EOR:
        case AST_IOR:
        case AST_AND_OP:
        case AST_OR_OP:
            ast_free(ast->left);
            ast_free(ast->right);
            break;
        case AST_LIST:
            ast_free(ast->left);
            ast_free(ast->right);
            break;
        case AST_ARR_ACCESS:
            break;
        case AST_FUNC_CALL:
            break;
        case AST_INC:
            break;
        case AST_DEC:
            break;
        case AST_ASSIGN:
            break;
    }
    free(ast);
}

void ast_print(ast* ast, int indent) {
    if (ast == NULL)
        return;
    for (int i = 0; i < indent; i++)
        printf("    ");
    switch(ast->type) {
        case AST_ID:
            printf("ID (%s)\n", ast->id);
            break;
        case AST_NUMBER:
            printf("NUM_I (%s)\n", ast->i_number);
            break;
        case AST_ADD:
            printf("+\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_MUL:
            printf("*\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
        case AST_FLOAT:
            printf("NUM_F (%s)\n", ast->f_number);
            break;
        case AST_LIST:
            printf(",\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_ARR_ACCESS:
            printf("ACC\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_FUNC_CALL:
            printf("CALL\n");
            ast_print(ast->left, indent + 1);
            break;
        case AST_INC:
            printf("INC\n");
            if(ast->left == 0)
                ast_print(ast->right, indent + 1);
            else
                ast_print(ast->left, indent + 1);
            break;
        case AST_DEC:
            printf("DEC\n");
            if(ast->left == 0)
                ast_print(ast->right, indent + 1);
            else
                ast_print(ast->left, indent + 1);
            break;
        case AST_DIV:
            printf("/\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_MOD:
            printf("%%\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_SUB:
            printf("-\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_LEFT_OP:
            printf("<<\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_RIGHT_OP:
            printf(">>\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_LOWER_EQUAL:
            printf("<=\n");
            ast_print(ast->left, indent + 1);
            printf("<=\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_GREATER:
            printf(">\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_LOWER:
            printf("<\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_NOT_EQUAL:
            printf("!=\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_EQUAL:
            printf("==\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_AND:
            printf("&\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_EOR:
            printf("|\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_IOR:
            printf("^\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_AND_OP:
            printf("&&\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_OR_OP:
            printf("||\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
        case AST_FOR:
            puts("for");
            ast_print(ast->init, indent + 1);
            ast_print(ast->condition, indent + 1);
            ast_print(ast->incr, indent + 1);
            ast_print(ast->core, indent + 1);
            break;
        case AST_ASSIGN:
            printf("=\n");
            ast_print(ast->left, indent + 1);
            ast_print(ast->right, indent + 1);
            break;
            break;
    }
}

char * genOperation(ast * add) {
    char operand;
    char *x, *y;

    if (add == NULL)
        return NULL;
   
    if (add->type == AST_ARR_ACCESS) {
        x = genOperation(add->left);
        y = genOperation(add->right);
        
       
        int len1 = strlen(x);
        int len2 = strlen(y);
        
        char *tmp = (char *) malloc(sizeof(char) * (len1 + len2 + 2));
        sprintf(tmp, "%s[%s]", x, y);
        printf("%s\n", tmp);
        return tmp;
    }

    if (add->type == AST_MUL)
        operand = '*';
    if (add->type == AST_ADD) 
        operand = '+';
    if (add->type == AST_SUB)
        operand = '-';
    if (add->type == AST_DIV)
        operand = '/';
    if (add->type == AST_NUMBER) {
        return add->i_number;    
    } else if (add->type == AST_FLOAT) {
        return add->f_number;
    } else if (add->type == AST_ID) {
        return add->id;
    }

    x = genOperation(add->left);
    y = genOperation(add->right);
    
    int len1 = strlen(x);
    int len2 = strlen(y);
    char *tmp = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
    sprintf(tmp, "%s%c%s", x, operand, y);
    printf("%s\n", tmp);
    return tmp;
}


int optimize_for_lvl1(ast *for_loop) {
    if (for_loop->type != AST_FOR) {
        return -1;
    }

    char *X, *Y, *iter_id, *lo, *hi, *init_val;
    
    //check if init is valid:
        //id1 = 0
    //check if condition is valid:
        //id1 < id2
    //check if incr is valid: 
        //id1++
        //id1 = id1 + id2
    
    if (for_loop->init->type == AST_ASSIGN) {
        char *left = for_loop->init->left->id;
        iter_id = left;
        lo = genOperation(for_loop->init->right);

        if (for_loop->init->right->type != AST_NUMBER) {
            fprintf(stderr, "error code generation (0)\n");
            exit(EXIT_FAILURE);
        }
        if (lo == NULL || left == NULL) {
            fprintf(stderr, "error code generation (1)\n");
            exit(EXIT_FAILURE);
        }
    }

    if (for_loop->condition->type == AST_LOWER) {
        char *left = for_loop->condition->left->id;
        hi = genOperation(for_loop->condition->right);

       
        if (hi == NULL || left == NULL) {
            fprintf(stderr, "error code generation (2)\n");
            exit(EXIT_FAILURE);
        }
    }

    if (for_loop->condition->type == AST_LOWER_EQUAL) {
        char *left = for_loop->condition->left->id;
        char *tmp = genOperation(for_loop->condition->right);
        
        if (tmp == NULL || left == NULL) {
            fprintf(stderr, "error code generation (3)\n");
            exit(EXIT_FAILURE);
        }
       
        int len1 = strlen(hi);
       
        hi = (char *) malloc(sizeof(char) * (len1 + 4));
        sprintf(hi, "(%s)+1", tmp);
    }

    if (for_loop->incr->type == AST_ASSIGN) {
        char *id = for_loop->incr->left->id;
        ast *right = for_loop->incr->right;
        if (right->type == AST_ADD) {
            if (right->left->id == id && right->right->i_number[0] != '1') {
                fprintf(stderr, "error code generation (4)\n");
                exit(EXIT_FAILURE);
            } else if (right->right->id == id && right->left->i_number[0] != '1') {
                fprintf(stderr, "error code generation (5)\n");
                exit(EXIT_FAILURE);
            }
        }
        fflush(stdout);
        if (strcmp(iter_id, id) != 0) {
            fprintf(stderr, "error code generation (6)\n");
            exit(EXIT_FAILURE);
        }
    }

    //init_set id1[iter_id] = const float
    if (for_loop->core->type == AST_ASSIGN) {
        ast *left = for_loop->core->left;
        ast *right = for_loop->core->right;
        
        if (left->type != AST_ARR_ACCESS //||
           // right->type != AST_FLOAT
           ) {
            fprintf(stderr, "error code generation (7)\n");
            exit(EXIT_FAILURE);
        }

        if (left->left == NULL || right == NULL ||
            left->left->type != AST_ID) {
            fprintf(stderr, "error code generation (8)\n");
            exit(EXIT_FAILURE);
        }
        int len1 = strlen(left->left->id),
            len2 = strlen(right->i_number),
            len3 = strlen(hi),
            len4 = strlen(lo);
        X = left->left->id;
        init_val = right->f_number;
        char * res = (char *) malloc(sizeof(char) * (len1 + len2 + len4 + len3 + 20));

        sprintf(res, "int_vec_set(%s, %s, %s, %s);", lo, hi, X, init_val);
        printf("\nOPTIMIZATION: %s\n", res);
        fflush(stdout);
    }
    return 1;
}