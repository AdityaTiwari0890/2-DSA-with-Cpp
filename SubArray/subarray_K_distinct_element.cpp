#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraywithlessthanequalKdistinct(vector<int>&nums, int k){
        int l = 0;
        map<int,int>mp;
        int ans = 0;
        for(int r = 0;r<nums.size();r++){
            mp[nums[r]]++;
            while(mp.size()>k&&l<=r){
                if(--mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            ans+=r-l+1;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subarraywithlessthanequalKdistinct(nums,k)- subarraywithlessthanequalKdistinct(nums,k-1);
    }
};
int main(){
    
}