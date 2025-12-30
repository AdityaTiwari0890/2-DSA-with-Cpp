#include<bits/stdc++.h>
using namespace std;
int findSubarray(vector<int> &arr) {
    // code here.
    vector<int> nums(arr.size());
    int sum =0;
    for(int i =0;i<arr.size();i++){
        sum+=arr[i];
        nums[i]= sum;
    }
    unordered_map<int,int>mp;
    mp[0]++;
    sum = 0;
    for(int i =0;i<nums.size();i++){
        if(mp[nums[i]]){
            sum+=mp[nums[i]];
        }
        mp[nums[i]]++;
    }
return sum;
}