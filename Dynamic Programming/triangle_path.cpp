#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Path(int n,int m,vector<vector<int>>&triangle,vector<vector<int>>&dp){
        if(n == triangle.size()-1){
            return triangle[n][m];
        }
        
        if(dp[n][m] != INT_MAX){
            return dp[n][m];
        }
        dp[n][m] = triangle[n][m]+min(Path(n+1,m,triangle,dp),Path(n+1,m+1,triangle,dp));
        return dp[n][m];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int rows = triangle.size();
        vector<vector<int>>dp(rows);
        for(int i =0;i<rows;i++){
            dp[i].resize(triangle[i].size(),INT_MAX);
        }
        return Path(0,0,triangle,dp);
    }
};