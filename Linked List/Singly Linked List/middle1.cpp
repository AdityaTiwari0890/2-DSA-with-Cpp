#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
Node *middle(Node *head){
    Node *first = head;
    Node *second = head;
    while(second&&second->next){
        first = first->next;
        second = second->next->next;
    }
    return first;
}
int main(){}