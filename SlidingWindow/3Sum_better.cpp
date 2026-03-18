#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sum(vector<int>arr){
    vector<vector<int>>ans;
    int n = arr.size();
    for(int i =0;i<n;i++){
        unordered_set<int>carry;
        for(int j = i+1;j<n;j++){
            int sum = arr[i]+arr[j];
            if(carry.find(-sum)!=carry.end()){
                ans.push_back({arr[i],arr[j],sum});
            }
            carry.insert(arr[j]);
        }
    }
    return ans;
}
int main(){
}