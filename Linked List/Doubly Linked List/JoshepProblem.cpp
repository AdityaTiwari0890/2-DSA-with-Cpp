#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node *prev;
    Node *next;
    Node(int value){
        this->value = value;
        prev = nullptr;
        next = nullptr;
    }
};
Node *create(int arr[],int index,Node *previous){
    if(arr[index] == -1){
        return nullptr;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = previous;
    temp->next = create(arr,index+1,temp);
    return temp;
}
void printHead(Node *Head){
    Node *alpha = Head;
    while(alpha){
        cout<<alpha->value<<" ";
        alpha = alpha->next;
    }
}
Node *tail(Node *Head){
    Node *alpha = Head;
    while(alpha->next){
        alpha = alpha->next;
    }
    return alpha;
}
void printTail(Node *Tail){
    Node *alpha = Tail;
    while(alpha){
        cout<<alpha->value<<" ";
        alpha = alpha->prev;
    }
}
void deleteDuplicates(Node *Head){
    Node *alpha = Head->next;
    Node *temp = nullptr;
    while(alpha){
        if(alpha->value == alpha->prev->value){
            temp = alpha;
            alpha->prev->next = alpha->next;
            if(alpha->next){
                alpha->next->prev = alpha->prev;
            }
            alpha = alpha->next;
            delete temp;
        }else{
            alpha = alpha->next;
        }
    }
}
Node *winner(Node *head,int n){
    if(head->next == head) return head;
    Node *prev = nullptr;
    Node *curr = head;
    for(int i =1;i<n;i++){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    winner(prev->next,n);
    
}
int winner(vector<int> &arr,int size_arr,int n,int index){
    if(arr.size()==1){
        return arr[index];
    }
    for(int i = 1;i<n;i++){
        
    }
}
int main(){
    int arr[] = {1,2,3,4,5,-1};
    int arr[] = {1,2,3,4,5};
    Node *Head = create(arr,0,nullptr);
    Node* Tail = tail(Head);
    Tail->next = Head;
    // Head->prev = Tail;
    // deleteDuplicates(Head);
    // printHead(Head);
    // cout<<endl;

    // printTail(Tail);
    cout<<winner(Head,3)->value;
}