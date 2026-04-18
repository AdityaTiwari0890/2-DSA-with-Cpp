#include<bits/stdc++.h>
using namespace std;
bool searching(vector<vector<int>>&arr,int key){
    int rows = arr.size();
    int cols = arr[0].size();
    int n = rows*cols-1;
    int l = 0;
    int r = n-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        int r1 = mid/cols;
        int c1 = mid%cols;
        int mid_value = arr[r1][c1];
        if(mid_value == key){
            return 1;
        }else if(mid_value > key){
            r = mid -1;
        }else{
            l = mid+1;
        }
    }
    return 0;
}
int main(){}