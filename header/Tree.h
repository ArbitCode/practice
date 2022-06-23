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
    int getHight(Node *root);
    bool isChildSumEqualsParent(Node *root);
    bool isBalancedTree(Node *root);
    int getMaxWidth(Node *root);
    void spiralTree(Node *root);
    int getDiameterTree(Node *root);
    Node *LCA(Node *root);
    int getDistanceBitweenTwoNodes(Node *node1, Node *node2);
    bool isPathExist(Node *root, std::vector<Node* > path, int key);
    int burnTime(Node *root, int leaf, int &distance);
    void serialize(Node *root, std::vector<int> &arr);
    void deserialize(std::vector<int> &arr);
    
};

#endif