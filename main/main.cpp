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
    std::cout << "Tree Left View:\n";
    tree.printLeftView(root);
    std::cout<< "Is child sum equals to parent value: ";
    tree.isChildSumEqualsParent(root) ? std::cout <<"True\n":std::cout<<"False\n";
    std::cout<< "Is tree balanced: ";
    tree.isBalancedTree(root) ? std::cout <<"True\n":std::cout<<"False\n";
    Node *treeFromInorder = tree.buildTree({1,2},tree.in);
    Node *treeFromPreorder = tree.buildTree({1,2},tree.pre);
    Node *treeFromPostorder = tree.buildTree({1,2},tree.post);
    
    free(root);
    return 0;
}