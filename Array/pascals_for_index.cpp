#include<bits/stdc++.h>
using namespace std;
void index(int r,int c){
    r -= 1;
    c-= 1;
    int result = 1;
    for(int i = 0;i<c;i++){
        result *= c-i;
        result /= i+1;
    }
    cout<<result;
}
int main(){}