#include<bits/stdc++.h>
using namespace std;
int sell(vector<int>arr){
    int buy = 0;
    int profit = 0;

    for(int i =1;i<arr.size();i++){
        if(buy == 0){
            if(arr[i]>arr[i+1]){
                buy = arr[i-1];
            }
        } else{
            if(arr[i-1]>=buy && arr[i-1]>arr[i]){
                profit += arr[i-1]-buy;
                buy = 0;
            }
        }  
    }
    
    return profit;
}
int main(){
    vector<int> v = {7,1,5,3,6,4};
    cout<<sell(v);
}