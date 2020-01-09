//
// Created by slahmer on 12/30/19.
//

#include "headers/linkedlist.h"



void print_list(node_t * head) {
    node_t * current = head;
    printf("--------------------\n");
    while (current != NULL) {
        symbol_p tmp =  current->val;
        printf("%s\t",tmp->name);
        current = current->next;
    }
    printf("\n-----------------------\n");
}
void push(node_t ** head, symbol_p val) {
    if(val == 0)
        return;
    node_t * new_node;
    new_node = (node_t *) malloc(sizeof(node_t));
    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}
node_t * concatenate(node_t *a,node_t *b)
{
    if(a == NULL && b != NULL)
        return b;
    if(b == NULL && a != NULL)
        return a;
    if( a != NULL && b!= NULL )
    {
        if (a->next == NULL)
            a->next = b;
        else
            concatenate(a->next,b);
    }
    return a;
}
