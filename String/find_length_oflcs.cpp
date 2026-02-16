#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int len = 0;
        int left = 0;
        int right = 1;
        while(right<nums.size()){
            if(nums[right]<=nums[right-1]){
                left = right;
            }
            len = max(len,right-left+1);
            right++;
        }
        return len;
    }
};

int main(){}