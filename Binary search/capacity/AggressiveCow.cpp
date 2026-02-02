//                                              Aggressive Cows
// Difficulty: MediumAccuracy: 59.57%Submissions: 155K+Points: 4Average Time: 30m
// You are given an array with unique elements of stalls[], which denote the positions of stalls. You are also given an integer k which denotes the number of aggressive cows. The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

// Examples:

// Input: stalls[] = [1, 2, 4, 8, 9], k = 3
// Output: 3
// Explanation: The first cow can be placed at stalls[0], 
// the second cow can be placed at stalls[2] and 
// the third cow can be placed at stalls[3]. 
// The minimum distance between cows in this case is 3, which is the largest among all possible ways.
// Input: stalls[] = [10, 1, 2, 7, 5], k = 3
// Output: 4
// Explanation: The first cow can be placed at stalls[0],
// the second cow can be placed at stalls[1] and
// the third cow can be placed at stalls[4].
// The minimum distance between cows in this case is 4, which is the largest among all possible ways.
// Input: stalls[] = [2, 12, 11, 3, 26, 7], k = 5
// Output: 1
// Explanation: Each cow can be placed in any of the stalls, as the no. of stalls are exactly equal to the number of cows.
// The minimum distance between cows in this case is 1, which is the largest among all possible ways.
// Constraints:
// 2 ≤ stalls.size() ≤ 106
// 0 ≤ stalls[i] ≤ 108
// 2 ≤ k ≤ stalls.size()




#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int mid,int k){
    int count= 1;
    int khuta = arr[0];
    for(int i =0;i<n;i++){
        if(khuta+mid<=arr[i]){
            count++;
            khuta = arr[i];
        }
    }
    if(count>=k){
        return true;
    }else{
        return false;
    }
}
int AggressiveCow(int arr[],int n,int k){
    int start = arr[0];
    int end = arr[n-1]-arr[0];
    int mid;
    int result = -1;
    while(start<=end){
        mid = start+(end - start)/2;
        // cout<<mid;
        if(isPossible(arr,n,mid,k)){
            result = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return result;
}
void Shot(int arr[],int n){
    for(int j =0;j<n;j++){
        for(int i = 0;i<n-1;i++)
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}
int main(){
    int k = 3;
    int n = 5;
    int arr[n] = {1,2,4,8,9};
    Shot(arr,n);
    cout<<AggressiveCow(arr,n,k);
}