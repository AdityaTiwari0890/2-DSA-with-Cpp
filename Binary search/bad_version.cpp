#include<bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
bool isBadVersion(int mid){

}
    int firstBadVersion(int n) {
        int i =0;int j = n;int first = 0;
        while(i<=j){
            long long mid = i+(j-i)/2;
            if(isBadVersion(mid)){
                first = mid;
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        return first;
    }
};