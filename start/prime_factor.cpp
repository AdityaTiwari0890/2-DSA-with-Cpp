#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 27;
    vector<int> arr(n,1);
    for(int i =2;i<27;i++){
        for(int j = i*i;j<27;j+=i){
            arr[j] = 0;
        }
    }
    for(int i =0;i<n;i++){
        if(arr[i] == 1){
            if(n%i==0){
            cout<<i<<" ";}
        }
    }
    
}