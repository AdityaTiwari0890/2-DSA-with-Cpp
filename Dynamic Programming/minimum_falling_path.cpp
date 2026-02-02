#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Path(int n,int m,vector<vector<int>>&triangle,vector<vector<int>>&dp){
        int rows = triangle.size();
        if(m<0||m>=rows){
            return INT_MAX;
        }
        if(n == rows-1){
            return triangle[n][m];
        }
        if(dp[n][m] != INT_MAX){
            return dp[n][m];
        }
        dp[n][m] = triangle[n][m]+min({Path(n+1,m,triangle,dp),Path(n+1,m+1,triangle,dp),Path(n+1,m-1,triangle,dp)});
        return dp[n][m];
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int cols = matrix.size();
        vector<vector<int>>dp(cols,vector<int>(cols,INT_MAX));
        int paths = INT_MAX;
        for(int i =0;i<cols;i++){
            paths = min(paths,Path(0,i,matrix,dp));
        }
        return paths;
    }
};