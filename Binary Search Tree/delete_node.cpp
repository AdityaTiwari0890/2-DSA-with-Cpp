#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int v){
        data = v;
        left=right=nullptr;
    }
};
void deletion(Node *root, int val){
    if(!root) return;
    if(root->data = val){
        if(!root->left&&!root->right){
            delete root;
        }
        else if(root->left==nullptr&&root->right!=nullptr){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left!=nullptr&&root->right==nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node *parent = nullptr;
            while(root){
                parent = root;
                root = root->l
            }
        }
    }
    if(root->data<val){
        deletion(root->right,val);
    }else{
        deletion(root->left,val);
    }
}
