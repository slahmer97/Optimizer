//
// Created by slahmer on 12/23/19.
//
#include <stdio.h>
#include <zconf.h>
#include "headers/defs.h"

extern FILE *yyin, *yyout;
int file_exist(const char*);
int remove_file(const char*);
int main(int argc,char**argv){
    globalData.symbol = subscribe_shared_symbol("Blaster");
    int ret = -1;
    struct shared_symbol* zz =  globalData.symbol;
    globalData.symbol->optimized = -1;

    display_symbol_table();
    while (1){
        printf("[+] Optimizer is waitting\n");
        sem_wait(globalData.sem_prod_cons);
        if(globalData.symbol->finished != 0)
            break;
        printf("[+] Optimizer Started\n");
        yyin = fopen(OPTIMIZER_REQUEST, "r");
        //yyout = fopen(OPTIMIZER_FILE,"w");
        ret = yyparse();
        printf("ret : %d",ret);
        if(ret == 1333)
            globalData.symbol->optimized = 1;
        else
           globalData.symbol->optimized = -1;
        printf("optimized : %d\n",globalData.symbol->optimized);

        sem_post(globalData.sem_symbol);
        printf("[+] Optimizer Completed\n");

    }

    printf("[+] Optimizer loop OFF\n");


    unsubscribe_shared_symbol(globalData.symbol);


    return 0;
}

int file_exist(const char*path){
    int ret =  access(path,F_OK);
    return ret;
}
int remove_file(const char* path){
    int ret = remove(path);
    return ret;
}
