#include<bits/stdc++.h>
using namespace std;
vector<int> sum(vector<int>&arr,int target){
    vector<int>result;
    int l = 0;
    int r = arr.size()-1;
    while(l<r){
        int sum = arr[l]+arr[r];
        if(sum == target){
            result.push_back(l);
            result.push_back(r);
            return result;
        }
        else if(sum > target){
            r--;
        }
        else{
            l++;
        }
    }
    return result;
}
int main(){}