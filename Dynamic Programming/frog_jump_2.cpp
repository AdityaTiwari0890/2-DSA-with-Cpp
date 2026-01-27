#include<bits/stdc++.h>
using namespace std;
int jump2(int n,int k,vector<int>&dp,vector<int>&height){
    if(n<k){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int jumps = INT_MAX;
    for(int i =1;i<=k;i++){
        if(n-i>=0){
            int jump = jump2(n-i,k,dp,height)+abs(height[n]-height[n-i]);
            jumps = min(jumps,jump);
        }
    }
    dp[n] = jumps;
    return dp[n];
}
int main(){
     vector<int> height{10, 5, 20, 0, 15};
    int n = height.size()-1;
    int k = 2;
    vector<int> dp(height.size(),-1);

    // Output the minimum cost
    cout << jump2(n,k,dp,height) << endl;
}