#include<bits/stdc++.h>
using namespace std;
int duplicate(vector<int>arr){
    int n = arr.size();
    int ans = 0;
    for(int i = 0;i<=n;i++){
        ans^=arr[i];
    }
    for(int i =1;i<n;i++){
        ans^=i;
    }
    return ans;
}
int main(){}