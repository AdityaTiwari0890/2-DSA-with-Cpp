#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 4;
    int pascal[4+1][4+1];
    pascal[0][0]=1;
    for(int i =0;i<=n;i++){
        for(int j = 0;j<=i;j++){
            if(j==0||j==i){
                pascal[i][j]=1;
                cout<<pascal[i][j];
                continue;
            }
            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
            cout<<pascal[i][j];
        }
        cout<<endl;
    }
    // for(int i =0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         cout<<pascal[i][j]<<" ";
    //     }
    // }
}