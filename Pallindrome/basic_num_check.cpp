#include<bits/stdc++.h>
using namespace std;
bool check(int x){
    int reversed = 0;
    while(reversed<x){
        reversed = reversed*10+x%10;
        x/=10;
    }
    return x==reversed||x==reversed/10;
}
int main(){

}