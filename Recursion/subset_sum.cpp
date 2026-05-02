#include<bits/stdc++.h>
using namespace std;
void func(vector<int> arr, int n,int sum,vector<int>&dp){
    if(n < 0){
        dp.push_back(sum);
        return;
    }
    func(arr,n-1,sum+arr[n],dp);
    func(arr,n-1,sum,dp);

}
int main(){
}