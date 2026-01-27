#include<bits/stdc++.h>
using namespace std;
int jump(int n,vector<int>&dp,vector<int>&height){
    if(n<=1){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = min(jump(n-1,dp,height)+abs(height[n-1]-height[n]),jump(n-2,dp,height)+abs(height[n-2]-height[n]));
    return dp[n];
}
int main(){
    vector<int> height = {2,1,3,5,4};
    int n = height.size()-1;
    vector<int>dp(n+1,-1);
    cout<<jump(n,dp,height);
}