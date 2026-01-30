#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Paths(int n,int m,vector<vector<int>>&dp){
        if(n==0&&m==0) return 1;
        if(n<0||m<0) return 0;
        if(dp[n][m]!=0){
            return dp[n][m];
        }
        int a = Paths(n-1,m,dp);
        int b = Paths(n,m-1,dp);
        dp[n][m] = max(a+b,dp[n][m]);
        return dp[n][m];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));
        return Paths(m-1,n-1,dp);
    }
};