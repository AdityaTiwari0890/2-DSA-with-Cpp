#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int house(vector<int>&nums, vector<int>&dp,int start,int end,int idx){
    int n = end - start +1;
    if(n==0) return 0;
    if(idx==0){
        return nums[start];
    }
    if(idx==1){
        return max(nums[start],nums[start+1]);
    }
    if(dp[idx]!=-1) return dp[idx];
    dp[idx] = max(house(nums,dp,start,end,idx-1),nums[idx+start]+house(nums,dp,start,end,idx-2));
    return dp[idx];

}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        
        vector<int>dp(n-1,-1);
        int choice1 = house(nums,dp,0,n-2,n-2);
        dp.assign(n-1,-1);
        int choice2 = house(nums,dp,1,n-1,n-2);
        return max(choice1,choice2);
    }
};