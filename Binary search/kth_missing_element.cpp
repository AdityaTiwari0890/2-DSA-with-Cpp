#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0;
        int r = arr.size()-1;
        int mid = 0;
        int miss = 0;
        int last_present = -1;
        while(l<=r){
            mid = l+(r-l)/2;
            miss = (arr[mid]-(mid+1));
            if(miss<k){
                last_present = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        if(last_present == -1){
            return k;
        }
        return (arr[last_present] + (k - (arr[last_present] - (last_present+1))));
    }
};
int main(){

}