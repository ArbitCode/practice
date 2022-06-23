#ifndef TREE_H
#define TREE_H
#include "Node.h"

class Tree{
    public:
    enum orderType{
        in,
        pre,
        post
    };
    Node *buildTree();
    Node *buildTree(const std::vector<int> &, orderType type);
    void inOrder(Node *root);
    void preOrder(Node *root);
    void postOrder(Node *root);
    void levelOrder(Node *root);
    void printLeftView(Node *root);
    int getSize(Node *root);
    int getHeight(Node *root);
    bool isChildSumEqualsParent(Node *root);
    bool isBalancedTree(Node *root);
};

#endif