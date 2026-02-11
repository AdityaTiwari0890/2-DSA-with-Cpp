#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
         int l = *max_element(nums.begin(),nums.end());
         int r = accumulate(nums.begin(),nums.end(),0);
         int count = 0;
         int sub_sum = 0;
         int first = -1;
         while(l<=r){
            int mid = l+(r-l)/2;
            count = 1;
            for(int n: nums){
                if(sub_sum+n>mid){
                    sub_sum = 0;
                    count++;
                }
                sub_sum+=n;
            }
            if(count<=k){
                first = mid;
                r = mid - 1;
            }
            else{
                l = mid+1;
            }
            sub_sum = 0;
         }
         return first;
    }
};