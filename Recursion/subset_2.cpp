#include<bits/stdc++.h>
using namespace std;
void back_track(int ind, vector<int>arr, vector<int>&curr, vector<vector<int>>&result){
    result.push_back(curr);
    for(int i = ind;i<arr.size();i++){
        if(i>ind && arr[i] == arr[i-1]) continue;
        curr.push_back(arr[i]);
        back_track(ind+1,arr,curr,result);
        curr.pop_back();
    }
}
vector<vector<int>> func(vector<int>arr,int n){
    vector<int> curr;
    vector<vector<int>> result;
    back_track(0,arr,curr,result);
    return result;
}
int main(){}