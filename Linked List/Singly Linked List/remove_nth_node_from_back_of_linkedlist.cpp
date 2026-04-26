#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        val = val;
        next = nullptr;
    }
};
Node *remove(Node *head,int k){
    Node *alpha = head;
    Node *dummy(0);
    dummy->next = head;
    int n = 0;
    while(alpha){
        alpha = alpha->next;
        n++;
    }
    alpha = head;
    for(int i =0;i<(k%n);i++){
        alpha = alpha->next;
    }
    Node *temp = head;
    Node *prev = nullptr;
    while(alpha){
        prev = temp;
        temp=temp->next;
        alpha = alpha->next;
    }
    prev->next = temp->next;
    delete temp;
    return head;
}
int main(){

}