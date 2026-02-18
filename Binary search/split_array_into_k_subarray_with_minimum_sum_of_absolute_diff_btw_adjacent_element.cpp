#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;

    int l =INT_MAX;
    int r = INT_MIN;
    for(int i =1;i<nums.size();i++){
        if(abs(nums[i] - nums[i-1]) <l){
            l = min(abs(nums[i]-nums[i-1]),l);
        }
        r += abs(nums[i]-nums[i-1]);
    }
    int curr = 0;
    int count =0;
    int first = 0;
    while(l<r){
        int mid = l+(r-l)/2;
        for(int i =0;i<nums.size();i++){
            curr+=abs(nums[i]-nums[i-1]);
            if(curr>mid){
                count++;
                curr = 0;
            }
        }
        if(count>=k){
            first = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
        count = 0;
        curr = 0;
    }
}