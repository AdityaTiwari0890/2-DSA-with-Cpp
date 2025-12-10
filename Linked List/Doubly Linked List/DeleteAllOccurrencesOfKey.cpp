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
Node *tailP(Node *Head){
    Node *alpha = Head;
    while(alpha->next){
        alpha = alpha->next;
    }
    return alpha;
}
void deletion(Node *head,int num){

    Node *alpha = head;
    Node *temp = nullptr;
    while(alpha){
        if(alpha->value == num){
            alpha->prev->next = alpha->next;
            alpha->next->prev = alpha->prev;
            temp = alpha;
            alpha = alpha->next;
            delete temp;
        }

    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,-1};
    Node *Head = create(arr,0,nullptr);
    Node *tail = tailP(Head);
    deletion(Head,7);

}