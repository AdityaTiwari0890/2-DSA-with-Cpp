#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
class Solution {
  public:
    int CEIL(Node *root, int x, int maxi = -1){
        if(root == nullptr){
            return maxi;
        }
        if(root->data == x){
            return x;
        }
        if(root->data>x){
            return CEIL(root->left,x,root->data);
        }else{
            return CEIL(root->right,x,maxi);
            
        }
    }
    int findCeil(Node* root, int x) {
        // code here
        return CEIL(root,x);
        
    }
};
