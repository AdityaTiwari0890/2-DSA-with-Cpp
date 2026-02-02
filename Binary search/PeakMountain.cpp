#include<iostream>
using namespace std;
int PeakMountain(int arr[],int n){
    int i =1;
    int l = n-2;
    int mid;
    while(i<=l){
        mid = i+(l-i)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            i = mid+1;
        }
        else{
            l = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[10] = {1,2,3,-2,-1,0,3,2,1,0};
    cout<<PeakMountain(arr,10);
}