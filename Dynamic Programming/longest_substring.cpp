#include<bits/stdc++.h>
using namespace std;
int substring(int n,int m,string& s1, string& s2, vector<vector<int>>&dp){
    for(int i =1;i<n;i++){
        for(int j = 1;j<m;j++){
            if(s1[i] == s2[j]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = 0;
            }
        }
    }
    
}
int main(){

}