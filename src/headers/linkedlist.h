#ifndef LINKED_
#define LINKED_
struct LinkedList{
    char *data;
    struct LinkedList *next;
 };
typedef struct LinkedList *node;

node createNode(void);
node addNode(node head, char *value);
#endif
