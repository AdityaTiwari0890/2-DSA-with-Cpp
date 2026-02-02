#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5;
    int key = 6;
    vector<bool> arr1(arr,arr+6);
    for(int i =0;i<arr1.size();i++){
        if(arr[i]>=key){
            arr1[i] = true;
        }else{
            arr1[i] = false;
        }
    }


}