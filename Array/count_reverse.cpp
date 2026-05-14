#include<bits/stdc++.h>
using namespace std;
int combine(vector<int> arr, int left, int mid, int right,vector<int>&temp){
    int l = left;
    int r = mid+1;
    int count = 0;
    while(l<=mid && r<=right){
        if(arr[l] <= arr[r]){
            temp.push_back(arr[l]);
            l++;
        }else{
            if(arr[l]>2*arr[r]){
                count += mid - l + 1;
                temp.push_back(arr[r]);
                r++;
            }
        }
    }
    while(l<=mid){
        temp.push_back(arr[l++]);
    }
    while(r<=right){
        temp.push_back(arr[r++]);
    }
    int i =0;
    while(left<=right && i < temp.size()){
        arr[left] = temp[i];
        i++;
        left++;
    }
    return count;

}
int merge(vector<int> arr, int left, int right){
    int count = 0;
    if(left>right){
        return count;
    }
    int mid = (left + (right - left))/2;
    count += merge(arr,left,mid);
    count += merge(arr,mid+1,right);

    return combine(arr,left,mid,right);
}

int main(){}