#include<iostream>
using namespace std;
int sqrt(int num){
    int i = 0;
    int l = (num+1)/2;
    int mid;
    int ans = num/2;
    int sq;
    while(i<=l){
        mid = i+(l-i)/2;
        sq = mid*mid;
        if(sq == num){
            ans = mid;
            break;
        }
        else if(sq>num){
            l = mid-1;
        }
        else{
            ans = mid;
            i = mid+1;
        }
    }
    return ans;
}
int main(){
    int num = 4;
    cout<<sqrt(num);
}