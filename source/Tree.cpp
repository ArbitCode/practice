#include<bits/stdc++.h>
#include "../header/Tree.h"

Node* Tree::buildTree(){
    Node *root =  new Node(1);
    
    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    return root;
}

void Tree::inOrder(Node *root){
    if(root == nullptr) return;
    inOrder(root->left);
    std::cout << root -> data <<" ";
    inOrder(root -> right);
}

void Tree::preOrder(Node *root){
    if(root == nullptr) return;
    std::cout << root -> data <<" ";
    inOrder(root->left);
    inOrder(root -> right);
}

void Tree::postOrder(Node *root){
    if(root == nullptr) return;
    inOrder(root->left);
    inOrder(root -> right);
    std::cout << root -> data <<" ";
}

void Tree::levelOrder(Node *root){
    std::queue<Node *> q;
    
    if(root == nullptr) return;
    q.push(root);
    
    while(!q.empty()){
        int count = q.size();
        for(int i = 0; i < count; i++){
            Node *curr = q.front();
            q.pop();
            std::cout<<curr->data<<" ";
            if(curr->left != nullptr) q.push(curr->left);
            if(curr->right != nullptr) q.push(curr->right);
        }
        //level change;
        std::cout<<"\n";
    }
}

int Tree::getSize(Node *root){
    if(root == nullptr) return 0;
    return getSize(root -> left) + 1 + getSize(root -> right);
}

int Tree::getHeight(Node *root){
    if(root == nullptr) return 0;
    return std::max(getHeight(root->left), getHeight(root->right)) +1;
}

void Tree::printLeftView(Node *root){
    if(root == nullptr) return;

    std::queue<Node *>q;
    std::vector<int> leftView;
    
    q.push(root);

    while(!q.empty()){
        int count = q.size();
        for(int i = 0; i < count; i++){
            Node *curr = q.front();
            q.pop();
            
            if( i == 0 ) leftView.push_back(curr->data);

            if(curr->left !=nullptr) q.push(curr->left);
            if(curr->right!= nullptr) q.push(curr->right);
        }
    }
    for(auto x: leftView) std::cout <<x <<" ";
    std::cout <<"\n";
}

