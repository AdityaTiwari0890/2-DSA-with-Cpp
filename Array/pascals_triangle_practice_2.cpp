#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pascals(int n){
    vector<vector<int>> ans;
    for(int i =0;i<n;i++){
        vector<int>result;
        for(int j = 0;j<=i;j++){
            if(j == 0|| j == i){
                result.push_back(1);
            }else{
                result.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
        }
        ans.push_back(result);
    }
    for(int i =0;i<n;i++){
        for(int j = 0;(long long)j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return ans;
}

int index_wise(int r,int c){
    r = r-1;
    c = c -1;
    int ans = 1;
    for(int i = 0;i<c; i++){
        ans *= r-i;
        ans /= i+1;
    }
    return ans;
}

vector<int> row(int n){
    n = n+1;
    vector<int> ans;
    int re = 1;
    ans.push_back(re);
    for(int i =1;i<=n;i++){
        re *=n-i;
        re /= i;
        ans.push_back(re);
    }
    for(int i =0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return ans;
}
int main(){
    pascals(5);
    cout<<endl;
    cout<<index_wise(5,3);
    row(5);
}