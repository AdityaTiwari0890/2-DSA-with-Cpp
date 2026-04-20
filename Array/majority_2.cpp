#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&arr){
    int num1 = INT_MAX;
    int num2 = INT_MAX;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i =0;i<arr.size();i++){
        if(cnt1 == 0 && arr[i]!=num2){
            num1 = arr[i];
            cnt1++;
        }
        else if(cnt2 == 0 && arr[i]!=num1){
            num2 = arr[i];
            cnt2++;
        }
        else if(arr[i] == num1){
            cnt1++;
        }
        else if(arr[i] == num2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    return cnt1>cnt2?num1:num2;

}
int main(){
    vector<int> arr = {1, 2, 1, 1, 3, 2, 2};
    cout<<majority(arr);
}