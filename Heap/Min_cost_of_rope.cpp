#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minCost(vector<int>& arr) {
        if(arr.size()<=1){
            return 0;
        }
        int cost = 0;
        priority_queue<int,vector<int>,greater<int>> mn_hp(arr.begin(),arr.end());
        while(mn_hp.size()>1){
            int a = mn_hp.top();
            mn_hp.pop();
            a+=mn_hp.top();
            mn_hp.pop();
            mn_hp.push(a);
            cost+=a;
        }
        return cost;
        
        // code here
        
    }
};