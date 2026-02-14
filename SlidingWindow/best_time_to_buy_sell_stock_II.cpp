#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = -1;
        int profit = 0;
        for(int i =0;i<prices.size()-1;i++){
            if(buy==-1){
                if(prices[i]<=prices[i+1]){
                    buy = prices[i];
                }
            }else{
                if(prices[i]>=prices[i+1]&&prices[i]>=buy){
                    profit += prices[i] - buy;
                    buy = -1;
                }
            }
        }
        if(buy!=-1){
            profit += prices[prices.size()-1] - buy;
        }
        return profit;
    }
};
int main(){

}