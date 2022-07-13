#include<bits/stdc++.h>
#include "../header/Linkedlist.h"

Node *Linkedlist::insertEnd(Node *head, int val){
    Node *temp = new Node(val);
    if(head == nullptr) return temp;
    Node *curr = head;
    while(curr -> left != nullptr) curr = curr -> left;
    curr -> left = temp;
    return head;
}

void Linkedlist::printLS(Node *head){
    if(head == nullptr){
        std::cout << "\n";
        return;
    }
    std::cout << head -> data << " ";
    printLS(head -> left);
}

Node *Linkedlist::insertBegin(Node *head, int val){
    Node *temp = new Node(val);
    if(head == nullptr) return temp;
    temp -> left = head;
    return temp;
}

Node *Linkedlist::deleteHead(Node *head){
    if(head == nullptr) return nullptr;
    Node *temp = head -> left;
    delete head;
    return temp;
}

Node *Linkedlist::deleteLast(Node *head){
    if(head == nullptr) return head;
    Node *curr = head;
    while(curr -> left -> left != nullptr) curr = curr -> left;
    delete curr -> left;
    curr -> left = nullptr;
    return head;
}

int Linkedlist::searchVal(Node *head, int val){
    if(head == nullptr) return -1;
    int positon = 1;
    Node *curr = head;
    while(curr -> left != nullptr){
        if(curr -> data == val) return positon;
        curr = curr -> left;
        positon++;
    }
    return -1;
}

int Linkedlist::searchValRecursive(Node *head, int val){
    if(head == nullptr) return -1;
    if(head -> data == val) return 1;
    int res = searchValRecursive(head -> left, val);
    if(res == -1) return -1;
    return (res + 1);
}