#include<bits/stdc++.h>
using namespace std;
int fruits(int arr[],int k,int size){
    unordered_map<int,int>basket;
    int left = 0;
    int right = 0;
    int maxlen = 0;
    while(right<size){
        basket[arr[right]]++;
        while(basket.size()>k){
            basket[arr[left]]--;
            if(basket[arr[left]]==0){
                basket.erase(arr[left]);
            }
            left++;
        }
        maxlen = max(maxlen,right - left+1);
        right++;
    }
}
int main(){
    int arr[] = {1, 2, 3, 2, 2};
    int basket = 2;
}