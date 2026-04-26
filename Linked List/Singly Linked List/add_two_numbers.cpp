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
Node *add(int a,int b){
    Node dummy(0);
    int sum = a+b;
    Node *alpha = &dummy;
    while(sum){
        int rem = sum%10;
        Node temp(rem);
        alpha->next = &temp;
        alpha = alpha->next;
        sum/=10;
    }
}
int main(){}