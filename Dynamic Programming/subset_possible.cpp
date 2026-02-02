#include<bits/stdc++.h>
using namespace std;
bool check_subset(int n, int target, vector<int>&arr,vector<vector<int>>&dp){
    if(target == 0){
        return true;
    }
    if(n==0){
        return target-arr[n] == 0;
    }
    if(dp[n][target]!=-1){
        return dp[n][target];
    }
    dp[n][target] = check_subset(n-1,target,arr,dp)||check_subset(n-1,target-arr[n],arr,dp);
    return dp[n][target];
}
int main(){
    vector<int> arr = {1, 2, 3, 4};
    int k = 4;
    int n = arr.size();
    vector<vector<int>>dp(arr.size(),vector<int>(k+1,-1));
    if (check_subset(n-1, k, arr,dp))
        cout << "Subset with the given target found";
    else
        cout << "Subset with the given target not found";

    return 0;
}