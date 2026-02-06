#include<bits/stdc++.h>
using namespace std;
int pallindromic(int i, int j, string&s, vector<vector<int>>&dp){
    if(i>j) return 0;
    if(i==j){
        return 1;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(s[i] == s[j]){
        dp[i][j] = 2+ pallindromic(i+1,j-1,s,dp);
    }else{
        dp[i][j] = max(pallindromic(i,j-1,s,dp),pallindromic(i+1,j,s,dp));
    }
    return dp[i][j];
}
int main(){
    string s;
    int i =0;
    int j = s.size();
    vector<vector<int>> dp(s.size(),vector<int>(s.size(),-1));
    return pallindromic(i,j-1,s,dp);
}