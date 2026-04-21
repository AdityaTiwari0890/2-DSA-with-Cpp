#include<bits/stdc++.h>
using namespace std;
bool sum(vector<int>arr,int target){
    unordered_map<int> mp;
    for(int i =0;i<arr.size();i++){
        if(mp.count(arr[i]-target)||mp.count(arr[i]+target)){
            return true;
        }
        mp.insert(arr[i]);
    }
    return 0;
}

int main(){}