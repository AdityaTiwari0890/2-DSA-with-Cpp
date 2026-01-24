#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<double,pair<int,int>>>kp(val.size());
        for(int i = 0;i<val.size();i++){
            kp[i] = {(double)val[i]/wt[i],{wt[i],val[i]}};
        }
        
        sort(kp.rbegin(),kp.rend());
        int second = 0;
        double price = 0;
        while(capacity>0&&second<val.size()){
            auto ele = kp[second];
            int wt = ele.second.first;
            if(wt<=capacity){
                capacity-=wt;
                price+=ele.second.second;
            }else{
                double f = (double)capacity/wt;
                price+=f*ele.second.second;
                capacity  = 0;
            }
            second++;
        }
        return (price);
    }
};
