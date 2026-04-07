#include<bits/stdc++.h>
using namespace std;
int fibo(int n, vector<int>&dp){
    if(n==0){
        dp[0] = 1;
        return 1;
    }
    if(n==1){
        dp[1] = 1;
        return 1;
    }
    if(dp[n-1]==0){
        fibo(n-1,dp);
    }
    if(dp[n-2]==0){
        fibo(n-2,dp);
    }
    dp[n] = dp[n-1]+dp[n-2];
    return dp[n];
    
}
int countWays(int n) {
    // code here
    vector<int> dp(n+1);
    return fibo(n,dp);
    
    
}
int main(){

}