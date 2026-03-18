#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sum(vector<int>arr){
    int n = arr.size();
    vector<vector<int>>ans;
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == 0)
                ans.push_back({arr[i],arr[j],arr[k]});
            }
        }
    }
}
int main(){

}