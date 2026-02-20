#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = right =nullptr;
    }

};
Node *create(Node *root, int val){
    Node *newNode = new Node(val);
    if(root == nullptr) return newNode;
    Node *curr = root;
    Node *parent = nullptr;
    while(curr){
        parent = curr;
        if(val<curr->data){
            curr = curr->left;
        }else{
            curr = curr->right;
        }
    }
    if(val<parent->data)
    {
        curr->left = newNode;
    }
    else
    {
        curr->right = newNode;
    }
    return root;
}