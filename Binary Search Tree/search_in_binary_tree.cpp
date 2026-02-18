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
bool search1(Node *root, int key){
    if(root == nullptr) return false;
    while(root){
        if(root->data == key){
            return true;
        }
        if(key<root->data){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return false;
}
Node* insert(Node *root,int val){
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
bool search(Node *root, int key){
    if(root == nullptr){
        return false;
    }
    if(root->data == key) return true;
    if(key<root->data){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }
}
int main(){
    vector<int>input = {1,2,3,4,5,6,7,8,9,10};
    Node *root =nullptr;
    for(int i =0;i<input.size();i++)
        root = insert(root,input[i]);
    cout<<"Insertion Completed. ";
    cout<<search(root,15);
}