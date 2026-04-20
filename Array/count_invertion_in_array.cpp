#include<bits/stdc++.h>
using namespace std;
int merge(vector<int>&arr,int left,int mid, int right){
    int l = left;
    int r = mid+1;
    int count = 0;
    vector<int>result;
    while(l<=mid && r<=right){
        if(arr[l]<=arr[r]){
            result.push_back(arr[l]);
            l++;
        }else{
            result.push_back(arr[r]);
            count+=(mid-l+1);
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
    return count;
}
int merge_sort(vector<int>&arr,int left, int right){
    int count = 0;
    if(left >= right){
        return count;
    }
    int mid = left+(right-left)/2;
    count+=merge_sort(arr,left,mid);
    count+=merge_sort(arr,mid+1,right);
    count+=merge(arr,left,mid,right);
    return count;
}
int main(){
    vector<int> arr = {5,3,2,1,4};
    cout<<merge_sort(arr,0,4)<<" ";
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}