#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr= {6, 5, 3, 2, 8, 10, 9};
    vector<int> result;
    int k =6;
    priority_queue<int,vector<int>,greater<int>> min_heap;
    for(int i =0;i<=k;i++){
        min_heap.push(arr[i]);
    }
    for(int i = k+1;i<arr.size();i++){
            result.push_back(min_heap.top());
            min_heap.pop();
            min_heap.push(arr[i]);
    }
    while(!min_heap.empty()){
        result.push_back(min_heap.top());
        min_heap.pop();
    }
    for(int i =0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}