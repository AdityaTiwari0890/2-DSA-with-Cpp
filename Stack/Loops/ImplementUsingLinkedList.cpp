#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        next = nullptr;
        prev = nullptr;
    }
};
class Stack{
    public:
    int size;
    Node *Head;
    Node *tail;
    Stack(){
        size = 0;
        Head = nullptr;
        tail = nullptr;
    }
    void push(int val){
        size++;
        Node *temp = new Node(val);
        if(Head){
            temp->prev = tail;
            tail->next = temp;
            tail = tail->next;
            tail->next = nullptr;
        }
        else{
            Head = temp;
            tail = Head;
        }
    }
    void pop(){
        size--;
        Node *temp = tail;
        tail = tail->prev;
        delete temp;
    }
    int top(){
        return tail->val;
    }
    int getSize(){
        return size;
    }

};
int main(){
    Stack s;
    s.push(12);
    s.push(11);
    s.push(10);
    s.push(19);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.getSize();
}