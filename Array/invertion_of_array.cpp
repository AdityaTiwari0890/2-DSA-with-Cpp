#include<bits/stdc++.h>
using namespace std;
int merge(vector<int>&arr,int start,int end,int mid){
    vector<int>curr;
    int count = 0;
    int left = start;
    int right = mid+1;
    while(left<=mid&&right<=end&&left<right){
        if(arr[right]<=arr[left]){
            count += mid-left+1;
            curr.push_back(arr[right]);
            right++;
        }else{
            curr.push_back(arr[left]);
            left++;
        }
    }
    while(left<=mid){
        curr.push_back(arr[left]);
        left++;
    }
    while(right<=end){
        curr.push_back(arr[right]);
        right++;
    }
    for(int i =0;i<curr.size();i++){
        arr[start++] = curr[i];
    }
    return count;

}
int func(vector<int> &arr,int start,int end){
    if(start>=end) return;
    int count = 0;
    int mid = start+(end-start)/2;
    count += func(arr,start,mid);
    count += func(arr,mid+1,end);
    count += merge(arr,start,end,mid);
    return count;
}