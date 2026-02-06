#include<iostream>
#include<vector>
using namespace std;
int coin_change(int n,int total, vector<int>&coins,vector<vector<int>>&dp){
    if(total == 0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(total<0){
        return 0;
    }
    if(dp[n][total]!=-1){
        return dp[n][total];
    }
    dp[n][total] = coin_change(n-1,total,coins,dp)+coin_change(n,total-coins[n],coins,dp);
    return dp[n][total];
}
int main(){

}