#include<bits/stdc++.h>
using namespace std;
void func(int n,int r){
    vector<int>arr;
    long long val = 1;
    // cout<<val<<" ";
    for(int i =1;i<r;i++){
        val = val*(n-i);
        val /= i;
        // cout<<val<<" ";
    }
    cout<<val;
    return;
}
int main(){
    func(4,2);
}