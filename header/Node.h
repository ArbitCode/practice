#ifndef NODE_H
#define NODE_H

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node();
    Node(int key);
    Node(int key, Node *left, Node *right);
};

#endif