#include<bits/stdc++.h>
#include "../header/Node.h"
#include "../header/Tree.h"
#include "../header/Linkedlist.h"

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
    std::cout << "Tree Hight: "<<tree.getHight(root) << "\n";
    std::cout << "Tree Left View:\n";
    tree.printLeftView(root);
    std::cout<< "Is child sum equals to parent value: ";
    tree.isChildSumEqualsParent(root) ? std::cout <<"True\n":std::cout<<"False\n";
    std::cout<< "Is tree balanced: ";
    tree.isBalancedTree(root) ? std::cout <<"True\n":std::cout<<"False\n";
    std::cout<< "Max width: " << tree.getMaxWidth(root) << "\n";
    std::cout<< "Spiral Tree: \n";
    tree.spiralTree(root);
    std::cout<< "Diameter of Tree: " << tree.getDiameterTree(root) << "\n";
    int diameter = 0;
    tree.getDiameterTree(root, diameter);
    std::cout<< "Diameter of Tree: " << diameter << "\n";

    //Linkedlist
    Linkedlist LS;
    Node *head = nullptr;
    Node *node =  new Node(12);
    Node *node1 = new Node(13);
    head =  LS.insertNode(head, node);
    head = LS.insertNode(head, node1);
    LS.printLS(head);
    
    free(root);
    return 0;
}