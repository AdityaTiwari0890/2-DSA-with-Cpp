#include<bits/stdc++.h>
using namespace std;
int coin(int n,int k,vector<int>coins,vector<vector<int>>dp){
        if(k<=0){
            return 0;
        }
        if(n<0){
            return 0;
        }
        if(dp[n][k] != -1){
            return dp[n][k];
        }
        dp[n][k] = k/coins[n] + coin(n-1,k%coins[n],coins,dp);
        return dp[n][k];
    }
int main(){

}