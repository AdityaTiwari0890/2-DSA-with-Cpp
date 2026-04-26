#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node *next;
    Node (int val){
        val = val;
        next = nullptr;
    }
};
Node *merge(Node* head1,Node *head2){
    Node *first = head1;
    Node *second = head2;
    Node *prev = nullptr;
    while(first&&second){
        if(first->val >=second->val){
            prev = first;
            first = first->next;
        }else{
            prev->next = second;
            second = second->next;
            prev->next->next = first;
            prev = prev->next;
        }
    }
    return head1;
}
int main(){}