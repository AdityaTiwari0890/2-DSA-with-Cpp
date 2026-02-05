#include<bits/stdc++.h>
using namespace std;

    int target_sum(int n, int target, vector<int>nums,vector<vector<int>>ans,int sum){
        if(n < 0){
            return target == 0?1:0;
        }
        if(ans[n][target+sum]!=-1){
            return ans[n][target+sum];
        }
        ans[n][target+sum] = target_sum(n-1,target-nums[n],nums,ans,sum) + target_sum(n-1,target+nums[n],nums,ans,sum);
        return ans[n][target+sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        vector<vector<int>>dp(nums.size(),vector<int>(sum*2+1,-1));
        return target_sum(nums.size()-1,target,nums,dp,sum);
    }
int main(){
   vector<int> nums = {1};
    int target = 1;
    cout <<findTargetSumWays(nums, target) << endl;
}