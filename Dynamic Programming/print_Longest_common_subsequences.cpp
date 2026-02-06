#include<bits/stdc++.h>
using namespace std;
string common(int n,int m,string& s1,string& s2,vector<vector<string>>&dp){
    if(n<0 || m<0){
        return "";
    }
    if(dp[n][m]!=""){
        return dp[n][m];
    }
    if(s1[n] == s2[m]){
        dp[n][m] = s1[n]+common(n-1,m-1,s1,s2,dp);
    }else{
        string option1 = common(n-1,m,s1,s2,dp);
        string option2 = common(n,m-1,s1,s2,dp);
        if(option1.length()<option2.length()){
            dp[n][m] = option2;
        }else{
            dp[n][m] = option1;
        }
    }
    return dp[n][m];
}
string main(){
    string s1;
    string s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<string>>dp(n,vector<string>(m,""));
    return common(n-1,m-1,s1,s2,dp);
}