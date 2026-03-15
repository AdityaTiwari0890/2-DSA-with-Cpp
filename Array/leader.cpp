#include<bits/stdc++.h>
using namespace std;
vector<int>lead(vector<int>&arr){
    int n = arr.size();
    int maxi = arr[n-1];
    vector<int>ans;
    for(int i =n-2;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int a;

}