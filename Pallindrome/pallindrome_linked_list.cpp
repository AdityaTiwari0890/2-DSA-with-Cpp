#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};


class Solution {
  public:
    Node* reverse1(Node *head){
        Node *curr = head;
        Node* prev = nullptr;
        Node *future = nullptr;
        while(curr){
            future = curr->next;
            curr->next = prev;
            prev = curr;
            curr = future;
        }
        return prev;
    }
    bool isPalindrome(Node* head) {
        if(head->next==nullptr) return true;
        Node *slow = head;
        Node *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast!=nullptr) slow=slow->next;
        Node *first = head;
        Node *second = reverse1(slow);
        while(first&&second){
            if(first->data != second->data){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};
int main(){

}