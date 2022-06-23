#ifndef TREE_H
#define TREE_H
#include "Node.h"

class Tree{
    public:
    Node *buildTree();
    void inOrder(Node *root);
    void preOrder(Node *root);
    void postOrder(Node *root);
    void levelOrder(Node *root);
    void printLeftView(Node *root);
    int getSize(Node *root);
    int getHeight(Node *root);
    
};

#endif