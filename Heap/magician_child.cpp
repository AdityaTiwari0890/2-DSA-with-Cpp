#include<bits/stdc++.h>
using namespace std;
int max_chocalate(int A, vector<int> &arr){
    priority_queue<int> max_heap(arr.begin(),arr.end());
    int chocalate_eaten = 0;
    while(A--){
        chocalate_eaten += max_heap.top();
        max_heap.push(max_heap.top()/2);
        max_heap.pop();
    }
    return chocalate_eaten;
}
int main(){
    vector<int> arr= {6,5};
    int A= 3;
    cout<<max_chocalate(A,arr);
}