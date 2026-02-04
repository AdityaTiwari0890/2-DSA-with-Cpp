#include<bits/stdc++.h>
using namespace std;
int assign(int n, int k, vector<int>&g, vector<int>&s,vector<vector<int>>&dp){
        if(n<0){
            return 0;
        }
        if(k<0){
            return 0;
        }
        if(dp[n][k]!=-1){
            return dp[n][k];
        }
        if(g[n]<=s[k]){
            dp[n][k] = 1+assign(n-1,k-1,g,s,dp);
        }else{
            dp[n][k] = assign(n-1,k,g,s,dp);
        }
        return dp[n][k];
}
int findContentChildren(vector<int>& g, vector<int>& s) {
    vector<vector<int>>dp(g.size(),vector<int>(s.size(),-1));
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    return assign(g.size()-1,s.size()-1,g,s,dp);
}
