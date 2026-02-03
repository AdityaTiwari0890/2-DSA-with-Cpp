#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*m*k >bloomDay.size()) return -1;
        long long l = *min_element(bloomDay.begin(),bloomDay.end());
        long long r = *max_element(bloomDay.begin(),bloomDay.end());

        long long first = -1;
        while(l<=r){
            long long mid = l+(r-l)/2;
            long long flowers_count = 0;
            long long bouquets = 0;
            for(int f:bloomDay){
                if(f<=mid){
                    flowers_count++;
                    if(flowers_count == k){
                        bouquets++;
                        flowers_count = 0;
                    }
                }else{
                    flowers_count = 0;
                }
            }
            if(bouquets>=m){
                first = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return first;
    }
};
int main(){

}