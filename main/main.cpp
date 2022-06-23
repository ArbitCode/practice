#include<bits/stdc++.h>
#include "../header/Node.h"
#include "../header/Tree.h"
int main(){
    Tree tree;
    Node *root = tree.buildTree();
    std::cout << "inOrder traversal:\n";
    tree.inOrder(root);
    std::cout << "\npreOrder traversal:\n";
    tree.preOrder(root);
    std::cout << "\npostOrder traversal:\n";
    tree.postOrder(root);
    std::cout << "\nlevelOrder traversal:\n";
    tree.levelOrder(root);
    std::cout << "Tree size: "<<tree.getSize(root) << "\n";
    std::cout << "Tree Height: "<<tree.getHeight(root) << "\n";
    
    //free(root);
    return 0;
}