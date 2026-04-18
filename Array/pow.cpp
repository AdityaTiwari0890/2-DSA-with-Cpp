#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return x;
    }
    if(n%2 == 0){
        return power(x*x,n/2);
    }else{
        return x*power(x,n-1);
    }
}
int main(){
    int n = 0;
    if(n<0){
        bool flag = 1;
    }
    cout<<power(2,2);
}