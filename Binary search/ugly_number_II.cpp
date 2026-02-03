#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0) return 0;
        // priority_queue<int, vector<int>, greater<int>> heap;
        int i2 = 0;
        int i3 = 0;
        int i5 = 0;
        vector<int> ugly;
        int next2,next3,next5;
        ugly.push_back(1);
        for(int i =1;i<n;i++){
            next2 = ugly[i2]*2;
            next3 = ugly[i3]*3;
            next5 = ugly[i5]*5;
            ugly.push_back(min({next2,next3,next5}));
            if(ugly.back()==next2){
                i2++;
            }
            if(ugly.back()==next3){
                i3++;
            }
            if(ugly.back()==next5){
                i5++;
            }
        }
        return ugly[n-1];
    }
};
int main(){

}