#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long l = min(a,b);
        long long r = 1LL*min(a,b)*n;
        long long mid = 0;
        long long count = 0;
        long long first = a;
        int mod = 1e9+7;
        long long lcm = (long long)a*b/__gcd(a,b);
        while(l<=r){
            mid = l+(r-l)/2;
            count=mid/a+mid/b-mid/lcm;
            if(count>=n){
                first = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
            count = 0;
        }
        return first%mod;
    }
};