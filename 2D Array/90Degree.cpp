#include<bits/stdc++.h>
using namespace std;
void reversing(vector<vector<int>> &arr){
    for(int i = 0;i<arr.size();i++){
        int l = 0;
        int r = arr[0].size()-1;
        while(l<=r){
            swap(arr[i][l],arr[i][r]);
            l++;
            r--;
        }
    }
}
void transposing(vector<vector<int>>&arr){
    for(int i =0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void Ninty(vector<vector<int>>& arr){
    transposing(arr);
    reversing(arr);
}
int main(){}