#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};
Node *insert(Node *root,int val){
    if(root==nullptr){
        Node *temp = new Node(val);
        return temp;
    }
    if(val<root->data){
        root->left = insert(root->left,val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}
void inorder(Node *root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    vector<int>input = {1,2,3,4,5,6,7,8,9,10};
    Node *root =nullptr;
    for(int i =0;i<input.size();i++)
        root = insert(root,input[i]);
    cout<<"Insertion Completed. ";
    inorder(root);
}