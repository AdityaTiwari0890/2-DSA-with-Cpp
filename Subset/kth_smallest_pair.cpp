#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>nums;
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i==j) continue;
            nums.push_back({arr[i],arr[j]});
        }
    }
    sort(nums.begin(),nums.end(),[](vector<int>&a,vector<int>&b){
        int d1 = abs(a[0] - a[1]);
    int d2 = abs(b[0] - b[1]);

    if(d1 != d2) return d1 < d2;
    if(a[0] != b[0]) return a[0] < b[0];
    return a[1] < b[1];
    });
    for(int i =0;i<nums.size();i++){
        for(int j = 0;j<nums[0].size();j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Answer is: "<<nums[5][0]<<" "<<nums[5][1];
}