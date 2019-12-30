//
// Created by slahmer on 12/29/19.
//

#ifndef OPTIMIZER_LINKEDLIST_H
#define OPTIMIZER_LINKEDLIST_H
#include <stdlib.h>
#include "symbol.h"

struct LinkedList{
    symbol_p entry;
    struct LinkedList *next;
};
typedef struct LinkedList *node;

node createNode(void);
node addNode(node head, symbol_p entry);
node fusion(node x, node y);
#endif //OPTIMIZER_LINKEDLIST_H
