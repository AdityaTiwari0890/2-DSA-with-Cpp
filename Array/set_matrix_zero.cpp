#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> func(vector<vector<int>>&matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0] = INT_MAX;
                matrix[0][j] = INT_MAX;
            }
        }
    }
    for(int i =0;i<m;i++){
        if(matrix[0][i]==INT_MAX){
            for(int j =0;j<n;j++){
                matrix[j][i] = 0;
            }
        }
    }
    for(int i =0;i<n;i++){
        if(matrix[i][0] == 0){
            for(int j =0;j<m;j++){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}
int main(){

}