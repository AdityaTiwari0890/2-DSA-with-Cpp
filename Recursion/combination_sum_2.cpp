#include<bits/stdc++.h>
using namespace std;
void func(int ind,vector<int>&arr, int target, vector<int>&curr,vector<vector<int>>result){
    if(target < 0){
        return;
    }
    if(target == 0){
        result.push_back(curr);
        return;
    }
    if(ind == arr.size()) return;
    for(int i = ind;i<arr.size();i++){
        if(i>ind && arr[i] == arr[i-1]) continue;
        if(arr[ind] > target) break;
        curr.push_back(arr[ind]);
        func(i+1,arr,target-arr[i],curr,result);
        curr.pop_back();
    }
}
int main(){}