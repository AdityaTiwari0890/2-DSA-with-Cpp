#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&num1,vector<int>num2){
    int r = num2.size()-1;
    int l = num1.size() - r -2;
    int i = num1.size()-1;
    while(i>l&&l>=0&&r>=0){
        if(num1[l]>=num2[r]){
            num1[i] = num1[l];
            l--;
            i--;
        }else{
            num1[i] = num2[r];
            r--;
            i--;
        }
    }

}
int main(){
    vector<int> num1 = {1,2,3,0,0,0};
    vector<int> num2 = {2,5,6};

    merge(num1,num2);

    for(int x : num1)
        cout<<x<<" ";
}