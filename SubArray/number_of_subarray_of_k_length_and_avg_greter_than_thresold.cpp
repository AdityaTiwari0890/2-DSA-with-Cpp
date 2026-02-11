#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l = 0;
        int sum =0;
        int count =0;
        for(int r =0;r<arr.size();r++){
            sum+=arr[r];
            if((r-l+1)==k){
                if((sum/(r-l+1))>=threshold)
                count++;
                sum-=arr[l];
                l++;
            }
        }
        return count;
    }
};
int main(){

}