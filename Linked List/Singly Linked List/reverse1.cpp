#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node (int val){
        data = val;
        next = nullptr;
    }
};
Node* reverse(Node *Head){
    Node *curr = Head;
    Node *prev = nullptr;;
    while(curr){
        Node * farword = curr->next;
        curr->next = prev;
        prev = curr;
        curr = farword;
    }
    return prev;
}

int main(){

}