#include<iostream>
using namespace std;
int binarySearch(int key){
    int n = 10;
    int arr[n] = {10,9,8,7,6,5,4,3,2,1};
    int i = 0,l = n-1;
    int mid;
    while(i<=l){
        mid = i +(l-i)/2; //(i+l)/2;
        if(key==arr[mid]){
            return 1;
        }
        else if(key > arr[mid]){
            l = mid-1;
        }
        else{
            i = mid+1;
        }
    }
    return -1;
}
int main(){
    int key = -5;
    cout<<binarySearch(key);
}