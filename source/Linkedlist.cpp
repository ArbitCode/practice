#include<bits/stdc++.h>
#include "../header/Linkedlist.h"

Node *Linkedlist::insertNode(Node *head, Node *node){
    if(head == nullptr) return node;
    Node *temp = head;
    while(temp -> left != nullptr) temp = temp -> left;
    temp ->left = node;
    delete temp;
    return head;
}

void Linkedlist::printLS(Node *head){
    if(head == nullptr) return;
    std::cout << head -> data << " ";
    printLS(head -> left);
}


