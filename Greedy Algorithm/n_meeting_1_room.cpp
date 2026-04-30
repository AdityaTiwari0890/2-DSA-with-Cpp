#include<bits/stdc++.h>
using namespace std;
int meet(vector<int>arr,vector<int>dep,int n){
    vector<tuple<int,int>>m;
    for(int i =0;i<n;i++){
        m.push_back({arr[i],dep[i]});
    }
    sort(m.begin(),m.end(),[](auto a,auto b){
        if(get<1>(a) == get<1>(b))
        return get<0>(a)<get<0>(b);
        return get<1>(a)<get<1>(b);
    });
    int l = 0;
    int r = 1;
    int count = 1;
    while(r<n){
        if(get<1>(m[l]) <=get<0>(m[r])){
            count++;
            r++;
            l++;
        }else{
            r++;
        }
    }
    return count;
}
int main(){

    vector<int> arr = {1,3,0,5,8,5};
    vector<int> dep = {2,4,6,7,9,9};

    cout<<meet(arr,dep,arr.size());
}