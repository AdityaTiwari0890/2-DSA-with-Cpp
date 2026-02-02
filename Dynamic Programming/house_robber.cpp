#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int tonight(int n,vector<int>&nums,vector<int>&dp){
    if(n<0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int a,b;
        a = tonight(n-2,nums,dp) + nums[n];
        b = tonight(n-1,nums,dp);
    dp[n] = max(a,b);
    return dp[n];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n==1) return nums[0];
        vector<int> dp(nums.size(),-1);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        return tonight(n-1,nums,dp);
    }
};