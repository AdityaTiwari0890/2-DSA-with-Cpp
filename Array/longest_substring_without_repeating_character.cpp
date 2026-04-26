#include<bits/stdc++.h>
using namespace std;
int substring(string s){
    int n = s.length();
    int l = 0;
    int r = 0;
    unordered_map<char,int>mp;
    int largest = 0;
    int count = 0;
    while(r<n){
        if(mp.find(s[r])!=mp.end()){
            mp.erase(s[l]);
            count--;
            l++;
        }else{
            mp[s[r]] = r;
            count++;
            r++;
        }
        largest = max(largest,count);

    }
    return largest;
}
int main(){
    string s = "cadbzabcd"; 
    cout<<substring(s);
}