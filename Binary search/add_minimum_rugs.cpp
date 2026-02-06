#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int ans = 0;
        int prev = 0;
        for(int r:rungs){
            int gap = r-prev;
            if(gap>dist){
                ans+=(gap-1)/dist;
            }
            prev = r;
        }
        return ans;
    }
};