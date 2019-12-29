#ifndef LINKED_
#define LINKED_

#include "symbol.h"
struct LinkedList{
    symbol_p entry;
    struct LinkedList *next;
 };
typedef struct LinkedList *node;

node createNode(void);
node addNode(node head, symbol_p entry);
#endif
