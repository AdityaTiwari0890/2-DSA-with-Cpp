#include<bits/stdc++.h>
using namespace std;
void Heapify(vector<int> &arr,int index,int n){
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
        Heapify(arr,largest,n);
    }
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();
    for(int i = n/2-1;i>=0;i--){
        Heapify(arr,i,n);
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}