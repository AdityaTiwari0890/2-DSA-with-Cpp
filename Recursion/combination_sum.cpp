#include<bits/stdc++.h>
using namespace std;
void func(int ind, vector<int>arr,int n,int target,vector<int>&curr, vector<vector<int>>&result){
    if(target<0) return;
    if(target == 0){
        result.push_back(curr);
        return;
    }
    if(ind == n) return;
    if(arr[ind]<=target){
        curr.push_back(arr[ind]);
        func(ind,arr,n,target-arr[ind],curr,result);
        curr.pop_back();
    }
    func(ind+1,arr,n,target,curr,result);
}
int main(){}