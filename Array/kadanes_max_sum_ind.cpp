#include<bits/stdc++.h>
using namespace std;
vector<int> kad(vector<int>&nums){
    int start = 0;
    int ansStart = 0;
    int ansEnd = 0;
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i =0;i<nums.size();i++){
        if(currSum <= 0){
            start = i;
        }
        currSum+=nums[i];
        if(currSum >maxSum){
            maxSum = currSum;
            ansStart = start;
            ansEnd = i;
        }
        currSum = currSum<0?0:currSum;
    }
    vector<int>ans = {ansStart,ansEnd};
    return ans;
}
int kadi(vector<int> arr){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i =0;i<arr.size();i++){
        currSum += arr[i];
        if(currSum >maxSum){
            maxSum = currSum;
        }
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}
int main(){
}