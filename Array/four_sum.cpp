#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sum(vector<int>&arr,int target){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    set<vector<int>> st;
    for(int i =0;i<arr.size();i++){
        for(int j =i+1;j<arr.size();j++){
            unordered_set<int>mp;
            for(int k =j+1;k<arr.size();k++){
                if(mp.count(target - (arr[i]+arr[j]+arr[k]))){
                    vector<int>result = {arr[i],arr[j],(target - (arr[i]+arr[j]+arr[k])),arr[k]};
                    sort(result.begin(),result.end());
                    st.insert(result);
                }
                mp.insert(arr[k]);
            }
        }
    }
    for(auto x: st){
        ans.push_back(x);
    }
    return ans;
}
int main(){
    vector<int> arr = {1,0,-1,0,-2,2};
    vector<vector<int>> num = sum(arr,0);
    for(int i =0;i<num.size();i++){
        for(int j =0;j<4;j++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
}