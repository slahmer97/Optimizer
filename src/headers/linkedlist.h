//
// Created by slahmer on 12/29/19.
//

#ifndef OPTIMIZER_LINKEDLIST_H
#define OPTIMIZER_LINKEDLIST_H

#include "symbol.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    symbol_p val;
    struct node * next;
} node_t;

void print_list(node_t * head);
void push(node_t ** head, symbol_p val);
void concatenate(node_t *a,node_t *b);





#endif //OPTIMIZER_LINKEDLIST_H
