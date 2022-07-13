#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class Linkedlist
{
public:
    void printLS(Node *head);
    Node *insertEnd(Node *head, int val);
    Node *insertBegin(Node *head, int val);
    Node *deleteHead(Node *head);
    Node *deleteLast(Node *head);
    int searchVal(Node *head, int val);
    int searchValRecursive(Node *head, int val);
};


#endif