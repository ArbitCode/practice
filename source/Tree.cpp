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

void Tree::interativeInorder(Node *root){
    if(root == nullptr) return;
    std::stack<Node *> stk;
    while(true){
        if(root != nullptr){
            stk.push(root);
            root = root -> left;
        } 
        else{
            if(stk.empty()) break;
            root = stk.top();
            stk.pop();
            std::cout << root -> data <<" ";
            root = root -> right;
        }
   }
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

int Tree::getHight(Node *root){
    if(root == nullptr) return 0;
    return std::max(getHight(root->left), getHight(root->right)) +1;
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

bool Tree::isChildSumEqualsParent(Node *parent){
    if(parent == nullptr) return true;
    if(parent -> left == nullptr && parent -> right == nullptr) return true;

    int sum = 0;
    if(parent -> left != nullptr) sum += parent->left->data;
    if(parent -> right != nullptr) sum+= parent->right->data;

    return(parent->data == sum && isChildSumEqualsParent(parent->left) && isChildSumEqualsParent(parent->right));
}

bool Tree::isBalancedTree(Node *root){
    if(root == nullptr) return true;
    
    int lh = getHight(root->left);
    int rh = getHight(root -> right);

    return (abs(lh - rh) <= 1 && isBalancedTree(root -> left) && isBalancedTree(root -> right));
}

int Tree::getMaxWidth(Node *root){
    if( root == nullptr) return 0;

    std::queue<Node *> q;
    int res = 0;
    
    q.push(root);

    while(!q.empty()){
        int count = q.size();
        res = std::max(res, count);
        for(int i = 0; i < count; i++){
            Node *curr = q.front();
            q.pop();
            if(curr -> left != nullptr) q.push(curr->left);
            if(curr -> right != nullptr) q.push(curr->right);
        }
    }

    return res;
}

void Tree::spiralTree(Node *root){
    if(root == nullptr) return;

    std::stack<Node *> stackEven;
    std::stack<Node *> stackOdd;

    stackEven.push(root);

    bool evenLevel = true;

    while((evenLevel && !stackEven.empty()) || (!stackOdd.empty())){
        if(evenLevel){
            while(!stackEven.empty()){
                Node *curr = stackEven.top();
                stackEven.pop();
                std::cout << curr -> data << " ";
                if(curr -> right != nullptr) stackOdd.push(curr->right);
                if(curr->left != nullptr) stackOdd.push(curr -> left);

            }

        }
        else{
            while(!stackOdd.empty()){
            Node *curr = stackOdd.top();
            stackOdd.pop();
            std::cout << curr -> data << " ";
            if(curr->left != nullptr) stackEven.push(curr -> left);
            if(curr -> right != nullptr) stackEven.push(curr->right);
            }
        }
        evenLevel = !evenLevel;
        std::cout <<"\n";
    }

}

int Tree::getDiameterTree(Node *root){
    if(root == nullptr) return 0;

    int leftSubtreeDiameter = getDiameterTree(root -> left);
    int rightSubtreeDiameter = getDiameterTree(root -> right);
    int diameter = getHight(root -> left) + getHight(root -> right) + 1;
    return std::max(diameter, std::max(leftSubtreeDiameter, rightSubtreeDiameter));
}

int Tree::getDiameterTree(Node *root, int &diameter){
    if(root == nullptr) return 0;

    int lh = getDiameterTree(root->left, diameter);
    int rh = getDiameterTree(root -> right, diameter);
    diameter = std::max(diameter, lh+rh+1);
    return std::max(lh, rh) + 1;
}