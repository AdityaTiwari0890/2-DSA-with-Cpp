#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int count(int n,int sum,vector<int>&arr,vector<vector<int>>&dp,int k,int total){
    if(n==0){
        return sum+1 == k || sum-1 == k;
    }
    if(dp[n][sum + total] != -1){
        return dp[n][sum+total];
    }
    dp[n][sum+total] = count(n-1,sum-1,arr,dp,k,total)+count(n-1,sum+1,arr,dp,k,total);
    return dp[n][sum+total];
}
int main(){

}