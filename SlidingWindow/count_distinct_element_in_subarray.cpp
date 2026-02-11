#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        int l = 0;
        unordered_map<int,int>mp;
        int distinct = 0;
        vector<int>ans;
        for(int i =0; i<arr.size();i++){
            if(mp[arr[i]] == 0){
                distinct++;
            }
            mp[arr[i]]++;
            k--;
            if(k==0){
                mp[arr[l]]--;
                ans.push_back(distinct);
                if(mp[arr[l]]==0){
                    distinct--;
                    mp.erase(arr[l]);
                }
                l++;
                k++;
            }
        }
        return ans;
    }
};