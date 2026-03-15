#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5};
    vector<int>arr1 = {1,2,5,8};
    int l =0;
    int r = 0;
    vector<int>ans;
    while(l<arr.size()&&r<arr1.size()){
        if(arr[l]<arr1[r]){
            if(ans.empty()||ans.back()!=arr[l])
            ans.push_back(arr[l]);
            l++;
        }
        else if(arr[r]<arr[l]){
            if(ans.empty()||ans.back()!=arr1[r])
            ans.push_back(arr1[r]);
            r++;
        }else{
            if(ans.empty()||ans.back()!=arr[l])
            ans.push_back(arr[l]);
            l++;
            r++;
        }
    }
    while(r<arr1.size()){
        ans.push_back(arr1[r]);
        r++;
    }
    while(l<arr1.size()){
        ans.push_back(arr1[l]);
        l++;
    }
    for(int n:ans){
        cout<<n<<" ";
    }
}