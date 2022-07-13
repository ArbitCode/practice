#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class Linkedlist
{
public:
    Node *insertNode(Node *head, Node *node);
    void printLS(Node *head);
};


#endif