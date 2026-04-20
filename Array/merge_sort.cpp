#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int left,int mid, int right){
    vector<int>result;
    int l = left;
    int r = mid+1;
    while(l<=mid && r<=right){
        if(arr[l]<=arr[r]){
            result.push_back(arr[l]);
            l++;
        }else{
            result.push_back(arr[r]);
            r++;
        }
    }
    while(l<=mid){
        result.push_back(arr[l]);
        l++;
    }
    while(r<=right){
        result.push_back(arr[r]);
        r++;
    }
    int i = 0;
    while(left<=right){
        arr[left] = result[i];
        left++;
        i++;
    }
}
void merge_sort(vector<int>&arr,int left, int right){
    if(left >= right){
        return;
    }
    int mid = left+(right-left)/2;
    merge_sort(arr,left,mid);
    merge_sort(arr,mid+1,right);

    merge(arr,left,mid,right);
}
int main(){
    vector<int>arr = {2,3,8,0,0,1};
    merge_sort(arr,0,5);
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}