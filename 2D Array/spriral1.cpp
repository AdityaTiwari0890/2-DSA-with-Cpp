#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    int n = matrix.size()-1;
    int m = matrix[0].size()-1;
    int left = 0,right = m,top = 0,bottom = n;
    while(left<=right&&top<=bottom){
        for(int i = left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;
        for(int i = top;i<=bottom;i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
        for(int i = right;i>=left;i--){
            cout<<matrix[bottom][i]<<" ";
        }
        bottom--;
        if(left<=right){
            for(int i =bottom;i>=top;i--){
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }
        }
    }
}