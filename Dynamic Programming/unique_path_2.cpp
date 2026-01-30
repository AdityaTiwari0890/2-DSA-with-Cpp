#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Path(int n,int m,vector<vector<int>>&obj,vector<vector<int>>&dp){
        if(n==0&&m==0){
            return 1;
        }
        if(n<0||m<0){
            return 0;
        }
        if(obj[n][m]==1){
            return 0;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        dp[n][m] = Path(n-1,m,obj,dp)+Path(n,m-1,obj,dp);
        return dp[n][m];
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obj) {
        int rows = obj.size();
        int col = obj[0].size();
        if(obj[0][0]==1||obj[rows-1][col-1]==1){
            return 0;
        };
        vector<vector<int>>dp(rows,vector<int>(col,-1));
        return Path(rows-1,col-1,obj,dp);
    }
};