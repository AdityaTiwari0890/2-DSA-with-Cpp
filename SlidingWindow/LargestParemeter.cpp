#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        stable_sort(nums.begin(),nums.end());
        int left = 0;
        int right = 0;
        int k = 3;
        int parameter = 0;
        int sum = 0;
        while(right<nums.size()){
            if(k==1){
                if(sum>nums[right])
                parameter = max((sum+nums[right]),parameter);

            }
            sum+=nums[right];
            k--;
            if(k==0){
                sum-=nums[left];
                left++;
                k++;
            }
            right++;
        }
        return parameter;
    }
};