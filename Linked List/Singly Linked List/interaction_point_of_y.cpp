#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node *next;
    Node(int val){
        val = val;
        next = nullptr;
    }
};
Node *common(Node *head1,Node *head2){
    Node *h1 = head1;
    Node *h2 = head2;
    while(h1!=h2){
        h1 = h1==nullptr?h2:h1->next;
        h2 = h2==nullptr?h1:h2->next;
    }
    return h1;
}
int main(){}