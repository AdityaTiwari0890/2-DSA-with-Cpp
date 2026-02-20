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
    int floor(Node* root, int x,int mini = -1) {
        // code here
        if(!root) return mini;
        if(root->data == x) return x;
        if(root->data>x) return floor(root->left,x,mini);
        if(root->data<x) return floor(root->right,x,root->data);
        
    }
};