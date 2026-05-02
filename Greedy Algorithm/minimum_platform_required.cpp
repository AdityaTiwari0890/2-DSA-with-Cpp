#include<bits/stdc++.h>
using namespace std;
int plaforms(vector<int>arr,vector<int>dep,int n){
    int l = 0;
    int r = 1;
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());

    

    int l = 0;
    int r = 1;
    int count = 1;
    int platforms = 1;
    while(r<n){
        if(arr[r]<=dep[l]){
            count++;
            r++;
        }else{
            l++;
            count++;
        }
        platforms = max(platforms,count);
    }
    return platforms;
}
int main(){}