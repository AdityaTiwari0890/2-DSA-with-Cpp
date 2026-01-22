#include<bits/stdc++.h>
using namespace std;
void Heapify(vector<int>&arr,int index){
    int n = arr.size();
    int largest = index;
    int left_child = 2*largest+1;
    int right_child = 2*largest+2;
    if(left_child<n&&arr[largest]<arr[left_child]){
        largest = left_child;
    }
    if(right_child<n&& arr[largest]<arr[right_child]){
        largest = right_child;
    }
    if(largest!=index){
        swap(arr[largest],arr[index]);
        Heapify(arr,largest);
    }

}
int main(){
    vector<int>min_heap = {10,20,30,21,23};
    for(int i = min_heap.size()/2-1;i>=0;i--){
        Heapify(min_heap,i);
    }
    for(int i =0;i<min_heap.size();i++){
        cout<<min_heap[i]<<" ";
    }
}