#include<bits/stdc++.h>
using namespace std;
bool min_check(vector<int>arr,int index){
    if(index>=arr.size()){
        return 1;
    }
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;
    if(left<arr.size()&&arr[left]<arr[largest]){
        return false;
    }
    if(right<arr.size()&&arr[right]<arr[largest]){
        return false;
    }

    return min_check(arr,left)&&min_check(arr,right);
}
int main(){
    vector<int> arr = {10, 20, 30, 21, 23};
    cout<<min_check(arr,0);
}