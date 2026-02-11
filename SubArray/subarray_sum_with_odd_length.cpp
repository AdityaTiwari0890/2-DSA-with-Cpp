#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int l =0;
        int sum = 0;
        int n = arr.size()-1;
        for(int r =0;r<arr.size();r++){
            int total = ((r+1)*(n-r+1)+1)/2;
            sum+=arr[r]*total;
        }
        cout<<sum;
        return sum;
    }
};
int main(){

}