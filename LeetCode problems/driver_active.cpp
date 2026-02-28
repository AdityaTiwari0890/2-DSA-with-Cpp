// You are given an array where each phase wjll enable drivers and find the profit by max(driver)-min(drivers) after one phase enable second driver and so on and each driver enable earlier will remain on
// Problem Understanding (Meal/Driver Cluster Type)

// You are given an array a[] of drivers' values.

// Drivers are enabled one by one (in order).

// Once a driver is enabled, it remains active.

// After each phase, profit =

// max(active drivers) - min(active drivers)

// Return profit after each phase.
// [22:53, 20/02/2026] Mohammed Hamza: input 
// 5
// 3 1 4 2 5
// output
// 0 2 3 3 4
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    int l = 0;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    vector<int>ans(n);
    for(int r =0;r<arr.size();r++){
        mini = min(mini,arr[r]);
        maxi = max(maxi,arr[r]);
        ans[r] = maxi - mini;
    }
    
    for(int i =0;i<arr.size();i++){
        cout<<ans[i]<<" ";
    }
}