#include<bits/stdc++.h>
using namespace std;
int grid(int m,int n, vector<vector<int>>dp){
    if(m == 0 && n == 0){
        return 1;
    }
    if(m < 0 || n < 0){
        return 0;
    }
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    int count = 0;
    
    count+= grid(m,n-1,dp);
    count+=grid(m-1,n,dp);
    dp[m][n] = count;
    return dp[m][n];
}
int main(){}