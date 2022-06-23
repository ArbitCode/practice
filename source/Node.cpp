#include "../header/Node.h"

Node::Node() : data(0), left(nullptr), right(nullptr) {}
Node::Node(int key) : data(key), left(nullptr), right(nullptr) {}
Node::Node(int key, Node *left, Node *right) : data(key), left(left), right(right) {}
