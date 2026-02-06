#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int common(int n, int m, string&s1,string&s2,vector<vector<int>>&dp){
        if(n<0||m<0){
            return 0;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(s1[n] == s1[m]){
            dp[n][m] = 1 + common(n-1,m-1,s1,s2,dp);
        }else{
            dp[n][m] = max(common(n-1,m,s1,s2,dp),common(n,m-1,s1,s2,dp));
        }
        return dp[n][m];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return common(n-1,m-1,text1,text2,dp);
    }
};