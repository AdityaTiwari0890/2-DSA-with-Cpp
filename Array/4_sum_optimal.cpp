#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sum(vector<int> arr, int target){
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    set<vector<int>> st;
    for(int i =0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            int l = j+1;
            int r = arr.size()-1;
            while(l<r){
                long long sum = arr[l] + arr[r];
                long long need = (long long)target - (arr[i]+arr[j]);
                if(sum == need){
                    st.insert({arr[i],arr[j],arr[l],arr[r]});
                    l++;
                    r--;
                }else if(sum < need){
                    l++;
                }else{
                    r--;
                }
            }
        }
    }
    for(auto x: st){
        ans.push_back(x);
    }
    return ans;
}
int main(){

}