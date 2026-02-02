//                               Question --->
                            // Allocate Minimum Pages
// Difficulty: MediumAccuracy: 35.51%Submissions: 306K+Points: 4Average Time: 35m
// Given an array arr[] of integers, where each element arr[i] represents the number of pages in the i-th book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:

// Each student receives atleast one book.
// Each student is assigned a contiguous sequence of books.
// No book is assigned to more than one student.
// The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.

// Note: If it is not possible to allocate books to all students, return -1.

// Examples:

// Input: arr[] = [12, 34, 67, 90], k = 2
// Output: 113
// Explanation: Allocation can be done in following ways:
// => [12] and [34, 67, 90] Maximum Pages = 191
// => [12, 34] and [67, 90] Maximum Pages = 157
// => [12, 34, 67] and [90] Maximum Pages = 113.
// The third combination has the minimum pages assigned to a student which is 113.
// Input: arr[] = [15, 17, 20], k = 5
// Output: -1
// Explanation: Since there are more students than total books, it's impossible to allocate a book to each student.
// Constraints:
// 1 ≤ arr.size() ≤ 106
// 1 ≤ arr[i], k ≤ 103

// Expected Complexities
// Company Tags
// InfosysAmazonMicrosoftGoogleCodenationUber
// Topic Tags
// Related Interview Experiences
// Related Articles
// If you are fac


#include<iostream>
#include<math.h>
using namespace std;
bool isPossible(int arr[],int n,int m , int maxPages){
    int count = 1;
    int pages = 0;
    for(int i =0;i<n;i++){
        pages+=arr[i];
        if(pages>maxPages){
            count++;
            pages = arr[i];
            if(count>m){
                return false;
            }
        }
    }
}
int bookAllocation(int arr[],int n,int start, int end,int m,int mid = 0,int ans = -1){

    while(start<=end){
        mid = start +(end-start)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int max(int arr[],int n){
    int min = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>min){
            min = arr[i];
        }
    }
    return min;
}
int sum (int arr[], int n){
    int sum =0;
    for(int i = 0 ;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n = 4;
    int arr[n] = {19,9,30,22,7};
    int start = 30;
    int end = 87;
    int m = 3;
    cout<<bookAllocation(arr,n,start,end,m);

}
// {
// int sum (vector<int> &arr, int n){
//     int sum =0;
//     for(int i = 0 ;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int max(vector<int> &arr,int n){
//     int min = arr[0];
//     for(int i =0;i<n;i++){
//         if(arr[i]>min){
//             min = arr[i];
//         }
//     }
//     return min;
// }
//     int findPages(vector<int> &arr, int k) {
//         // code here
//         int n = arr.size();
//         if(k>n){
//             return -1;
//         }
//         int start = max(arr,n);
//         int end = sum(arr,n);
//         int mid;
//         int result = -1;
//         while(start<=end){
//             mid = start + (end - start)/2;
//             int count = 1;
//             int pages = 0;
//             for(int i =0;i<n;i++){
//                 pages+=arr[i];
//                 if(pages>mid){
//                     count+=1;
//                     pages = arr[i];
//                 }
//             }
//             if(count<=k){
//                 result = mid;
//                 end = mid-1;
//             }
//             else{
//                 start = mid+1;
//             }
//         }
//         return result;
        
//     }
// }

