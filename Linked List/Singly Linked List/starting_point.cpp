#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        next = nullptr;
    }
};
Node *starting_loop(Node *head){
    Node *slow = head;
    Node *fast = head;
    do{
        if(fast==nullptr||fast->next==nullptr) return nullptr;
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);
    
    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}