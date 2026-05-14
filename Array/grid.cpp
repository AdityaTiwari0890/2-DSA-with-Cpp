#include<bits/stdc++.h>
using namespace std;
int grid(int m, int n, vector<vector<int>> dp){
    int n = dp.size();

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==0 && j==0)
            dp[0][0] = 1;
            if(i>0)
            dp[i][j] += dp[i-1][j];
            if(j>0)
            dp[i][j] += dp[i][j-1];
        }
    }
    return dp[n-1][m-1];
}
int main(){}