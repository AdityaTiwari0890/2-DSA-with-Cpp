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
Node *reversse(Node *head){
    Node *curr = head;
    Node *prev = nullptr;
    Node *fut = nullptr;
    while(curr){
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    return prev;
}
bool pallindrome(Node *head){
    if(head == nullptr||head->next==nullptr) return 1;
    Node *slow = head;
    Node *fast = head;
    while(fast&&fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    if(fast!=nullptr){
        slow = slow->next;
    }
    Node *middle = slow;
    Node *head2 = reversse(middle);
    Node *head1 = head;
    while(head2&&head1){
        if(head1->val!=head2->val) return 0;
        head1 = head1->next;
        head2 = head2->next;
    }
    return 1;
}
int main(){}