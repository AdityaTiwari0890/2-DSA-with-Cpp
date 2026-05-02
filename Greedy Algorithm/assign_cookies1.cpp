#include<bits/stdc++.h>
using namespace std;
int func(vector<int>student,vector<int>cookie,int n){
    sort(student.begin(),student.end());
    sort(cookie.begin(),cookie.end());
    int l = 0;
    int r = 0;
    int cookies = 0;
    while(r<n){
        if(student[l]<=cookie[r]){
            l++;
            r++;
            cookies ++;
        }
        else{
            r++;
        }
    }
    return cookies;
}
int main(){

}