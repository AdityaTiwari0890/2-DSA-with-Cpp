#include<iostream>
using namespace std;
int max(int arr[],int n){
    int max = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
bool isPossible(int arr[],int n,int k,int mid){
    int hours = 0;
    for(int i =0;i<n;i++){
        hours+=(arr[i])/mid;
        if(arr[i]%mid){
            hours++;
        }
    }
    if(hours<=k){
        return true;
    }
    else{
        return false;
    }
}
int BananaEating(int arr[],int n,int k){
    int start = 1;
    int end = max(arr,n);
    int mid;
    int result = -1;
    while(start<=end){
        mid = start+(end-start)/2;
        if(isPossible(arr,n,k,mid)){
            end = mid-1;
            result = mid;
        }else{
            start= mid+1;
        }
    }
    return result;
}
int main(){
    int n = 4;
    int k = 8;
    int arr[n] = {3,6,11,7};
    cout<<BananaEating(arr,n,k);
}
