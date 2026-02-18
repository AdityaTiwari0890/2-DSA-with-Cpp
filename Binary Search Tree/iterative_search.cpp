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
int main(){

}