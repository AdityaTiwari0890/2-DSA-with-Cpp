#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long gcd(long long a,long long b){
        return b==0?a:gcd(b,a%b);
    }
    long long lcm(long long a,long long b){
        return a*b/gcd(a,b);
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        long long l = 0;
        long long r = 1LL*min(a,min(b,c))*n;
        long long ab = lcm(a,b);
        long long ac = lcm(a,c);
        long long bc = lcm(b,c);
        long long abc = lcm(ab,c);
        long long mid = 0;
        long long first = 0;
        int count = 0;
        while(l<=r){
            long long mid = l+(r-l)/2;
            long long count = mid/a+mid/b+mid/c-mid/ab-mid/ac-mid/bc+mid/abc;
            if(count>=n){
                first = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return first;

    }
};