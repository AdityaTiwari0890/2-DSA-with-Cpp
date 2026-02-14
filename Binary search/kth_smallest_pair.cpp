#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sliding(int mid, vector<int>&nums,int n){
        int i = 0;
        int j = 1;
        int count = 0;
            while(j<=n){
                if((nums[j] - nums[i])<=mid){
                    count+=j-i;
                    j++;
                }else{
                    i++;
                }
                
            }
        return count;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = INT_MAX;
        int n = nums.size()-1;
        for(int i =0;i<=n-1;i++){
            l = min(l,nums[i+1]-nums[i]);
        }
        int r = nums[n]-nums[0];
        int first = -1;
        while(l<r){
            int mid = l+(r-l)/2;
            int count = sliding(mid,nums,n);
            cout<<count;
            if(count<k){
                l = mid+1;
            }else{
                first = mid;
                r = mid;
            }
        }
        return l;
    }
};
int main(){

}