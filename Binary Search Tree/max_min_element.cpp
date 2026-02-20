#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};
Node *MINI(Node *root){
    if(root->left == nullptr){
        return root;
    }
    return MINI(root->left);
}
int main(){

}