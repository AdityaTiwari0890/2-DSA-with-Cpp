#include<bits/stdc++.h>
using namespace std;
int majority(vector<int> arr){
    int count = 0;
    int num = arr[0];
    for(int i =0;i<arr.size();i++){
        if(arr[i] == num){
            count++;
        }else{
            count--;
            if(count <= 0){
                num = arr[i];
            }
        }
    }
    return num;
}
int main(){
    vector<int> arr = {1, 1, 1, 2, 1, 2,2,2};
    cout<<majority(arr);
}