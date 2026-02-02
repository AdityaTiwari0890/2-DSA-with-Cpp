#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        int i =0;int l = num;
        int div = -1;
        while(i<=l){
            long long mid = i+(l-i)/2;
            if(mid*mid>=num){
                if(mid*mid == num){
                    div = mid;
                }
                l = mid-1;
            }else{
                i = mid+1;
            }
        }
        return div!=-1;
    }
};