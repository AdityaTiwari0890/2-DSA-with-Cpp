#include<bits/stdc++.h>
using namespace std;
void rows(int n){
    int ans = 1;
    for(int i =1;i<=n;i++){
        ans *= n-i;
        ans /= i;
        cout<<ans<<" ";
    }
}
int main(){}