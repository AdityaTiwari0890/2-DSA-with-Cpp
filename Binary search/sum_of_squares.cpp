#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i =0;
        long long l = sqrt(c);
        long long sum = 0;
        while(i<=l){
            sum = l*l+i*i;
            if(sum<=c){
                if(sum==c) return true;
                i++;
            }else{
                l--;
            }
        }
        return false;
    }
};