#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Path(int n,int m,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(n<0||m<0){
            return INT_MAX;
        }
        if(n==0&&m==0){
            return grid[n][m];
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        dp[n][m] = grid[n][m]+min(Path(n-1,m,grid,dp),Path(n,m-1,grid,dp));
        return dp[n][m];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> dp(rows,vector<int>(cols,-1));
        return Path(rows-1,cols-1,grid,dp);
    }
};