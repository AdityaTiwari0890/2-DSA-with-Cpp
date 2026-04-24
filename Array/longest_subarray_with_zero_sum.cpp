#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>&arr){
    vector<int>sum;
    int s = 0;
    for(int x:arr){
        s+=x;
        sum.push_back(s);
    }
    int largest = 0;
    unordered_map<int,int>mp;
    mp[0] = -1;
    for(int i =0;i<sum.size();i++){
        if(mp.find(sum[i])!=mp.end()){
            largest = max(largest, i - mp[sum[i]]);
        }
        if(mp.find(sum[i])==mp.end()){
            mp[sum[i]] = i;
        }
    }
    return largest;
}
int main(){
    vector<int> arr = {9,3,-3,-1,6,-5};
    cout<<largest(arr);
}