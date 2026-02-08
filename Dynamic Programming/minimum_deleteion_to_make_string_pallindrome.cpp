#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count(int i,int j,string& s1, string& s2, vector<vector<int>>&dp){
        if(i>=s1.length()||j>=s2.length()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i] == s2[j]){
            dp[i][j] = 1+count(i+1,j+1,s1,s2,dp);
        }else{
            dp[i][j] = max(count(i+1,j,s1,s2,dp),count(i,j+1,s1,s2,dp));
        }
        return dp[i][j];
    }
    int minDistance(string s1, string s2) {
        vector<vector<int>> dp(s1.length(),vector<int>(s2.length(),-1));
        int changes = count(0,0,s1,s2,dp);
        return (s1.length()-changes)+(s2.length()-changes);
    }
};
int main(){

}