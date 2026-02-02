#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;
        int l = nums.size()-1;
        int mid = 0;
        int first = -1;
        while(i<=l){
            mid = i+(l-i)/2;

            if(nums[mid]>=target){
                if(nums[mid] == target)
                first = mid;
                l = mid-1;
            }else{
                i = mid+1;
            }
        }
        if(first == -1|| nums[first]!=target){
            return {-1,-1};
        }
        int second = -1;
        i = 0;
        l = nums.size()-1;
        while(i<=l){
            mid = i+(l-i)/2;
            if(nums[mid]<=target){
                if(nums[mid]==target){
                    second = mid;
                }
                i = mid+1;
            }else{
                l = mid-1;
            }
        }
        return {first,second};
    }
};
int main(){

}