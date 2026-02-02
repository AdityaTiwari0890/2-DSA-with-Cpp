#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1;
        long long r = *max_element(piles.begin(),piles.end());
        long long mid = 0;
        long long count = 0;
        long long hours = r;
        while(l<=r){
            mid = l+(r-l)/2;
            for(int num:piles){
                count+=(num+mid-1)/mid;
            }
            if(count<=h){
                hours = mid;
                r = mid - 1;
            }else{
                l = mid+1;
            }
            count = 0;
        }
        return hours;
    }
};

int main(){

}