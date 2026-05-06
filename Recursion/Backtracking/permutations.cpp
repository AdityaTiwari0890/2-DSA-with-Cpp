#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&arr,vector<bool>&fill,vector<int>&curr,vector<vector<int>>&result){
    if(curr.size() == arr.size()){
        result.push_back(curr);
        return;
    }
    for(int i =0;i<arr.size();i++){
        if(!fill[i]){
            curr.push_back(arr[i]);
            fill[i] = true;
            func(arr,fill,curr,result);
            curr.pop_back();
            fill[i] = false;
        }
    }
}
int main(){}