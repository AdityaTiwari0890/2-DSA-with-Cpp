#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> intervals(vector<vector<int>>&arr){
    int n = arr.size();
    sort(arr.begin(),arr.end(),[](vector<int>n1,vector<int>n2){
        return n1[0]<n2[0];
    });
    vector<vector<int>>ans;
    
    ans.push_back(arr[0]);
    for(int i = 1;i<n;i++){
        if(ans.back()[1]>=arr[i][0]){
            ans.back()[1] = max(arr.back()[1],arr[i][1]);
        }else{
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main(){}