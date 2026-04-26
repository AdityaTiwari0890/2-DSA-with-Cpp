#include<bits/stdc++.h>
using namespace std;
int xors(vector<int>&arr,int n){
    int num = 0;
    unordered_map<int,int> mp;
    mp[0] = 1;
    int count  = 0;
    for(int i =0;i<arr.size();i++){
        num^=arr[i];
        if(mp.find(num^n)!=mp.end()){
            count+=mp[num^n];
        }
        mp[num]++;
    }
    return count;

}
int main(){

}