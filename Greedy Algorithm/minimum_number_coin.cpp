#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findMin(int n) {
        // code here
        vector<int>coins = {10,5,2,1};
        int coin = 0;
        int it =0;
        while(n>0){
            coin += n/coins[it];
            n%=coins[it++];
        }
        return coin;
    }
};