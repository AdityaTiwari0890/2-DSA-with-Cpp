#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
};
void del(Node *alpha){
    swap(alpha->val,alpha->next->val);
    alpha->next = alpha->next->next;
}
int main(){}