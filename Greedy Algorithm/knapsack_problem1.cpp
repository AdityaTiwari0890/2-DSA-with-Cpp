#include<bits/stdc++.h>
using namespace std;
class knap{
    public:
    int val;
    int wei;
    double rat;
};
double func(vector<int>val,vector<int>w,int n,int capacity){
    vector<knap> arr;
    for(int i =0;i<n;i++){
        arr[i].val = val[i];
        arr[i].wei = w[i];
        arr[i].rat = (double)val[i]/(double)w[i];
    }
    sort(arr,arr+n,[](knap a,knap b){
        return a.rat>b.rat;
    });
    double money = 0;
    for(auto x: arr){
        if(x.wei <= capacity){
            money += x.val;
            capacity -= x.wei;
        }else{
            money += x.rat*(capacity);
            capacity = 0;
            break;
        }
    }
    return money;
}
int main(){
    
}