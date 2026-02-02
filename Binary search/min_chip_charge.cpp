#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weight, int days) {
        int l = *max_element(weight.begin(),weight.end());
        int r = accumulate(weight.begin(),weight.end(),0);
        int ship = 0;
        int count_days = 1;
        int min_weight = l;
        while(l<=r){
            int mid = l+(r-l)/2;
            for(int w : weight){
                if(ship+w>mid){
                    count_days++;
                    ship = w;
                }else{
                    ship+=w;
                }
            }
            if(count_days<=days){
                min_weight = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
            count_days = 1;
            ship = 0;
        }
        return min_weight;
    }
};

int main(){

}