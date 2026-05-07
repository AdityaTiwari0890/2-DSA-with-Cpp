#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> arr){
    int n = arr.size();
    int index = -1;
    for(int i = n-1;i>0;i--){
        if(arr[i]>arr[i-1]){
            index = i-1;
            break;
        }
    }
    if(index == -1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int j = n-1;j>index;j--){
        if(arr[j]>arr[index]){
            swap(arr[j],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    return arr;
}
int main(){}
