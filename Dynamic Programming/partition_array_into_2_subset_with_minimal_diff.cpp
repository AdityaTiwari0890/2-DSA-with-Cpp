#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool subset_sum(int n, int sum, vector<int>&nums,vector<vector<int>>&dp){
        if(sum==0) return true;
        if(n<0) return false;
        if(dp[n][sum]!=-1){
            return dp[n][sum]==1;
        }
        bool nottaken = subset_sum(n-1,sum,nums,dp);
        bool taken = false;
        if(nums[n]<=sum){
            taken = subset_sum(n-1,sum-nums[n],nums,dp);
        }
        dp[n][sum] = taken||nottaken?1:0;
        return dp[n][sum]==1;
    }
    int diff(vector<int>&nums){
        
        int n = nums.size();
        int sum = 0;
        for(int num: nums){
            sum+=num;
        }
        int target = sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        for(int i = 0;i<n;i++){
            dp[i][0] = 1;
        }
        for(int i = 1;i<=target;i++){
            subset_sum(n-1,i,nums,dp);
        }
        int minV = INT_MAX;
        for(int i =0;i<target;i++){
            if(dp[n-1][i]){
                minV = min(abs((sum-i)-i),minV);
            }
        }
        return minV;
    }
    int minimumDifference(vector<int>& nums) {
        return diff(nums);
    }
};