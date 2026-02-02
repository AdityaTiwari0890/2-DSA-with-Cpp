#include<iostream>
using namespace std;
int first(int arr[] ,int key, int n){
    int i = 0;
    int l = n-1;
    int index;
    while(i<=l){
        int mid = i+(l-i)/2;
        if(arr[mid] == key){
            index = mid;
            l = mid -1;
        }
        else if(key>arr[mid]){
            i=mid+1;
        }
        else{
            l = mid-1;
        }
    }
    return index;
}
int last(int arr[], int key,int n){
    int i = 0;
    int l = n-1;
    int index = -1;
    while(i<=l){
        int mid = i+(l-i)/2;
        if(arr[mid] == key){
            index = mid;
            i = mid +1;
        }
        else if(key>arr[mid]){
            i=mid+1;
        }
        else{
            l = mid-1;
        }
    }
    return index;
}
int main(){
    int a = 10;
    int arr[a] = {1,1,1,1,1,1,2,2,3,4};
    cout<<first(arr,1,a);
    cout<<last(arr,1,a);
}