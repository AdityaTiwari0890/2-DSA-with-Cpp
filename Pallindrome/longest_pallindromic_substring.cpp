#include<bits/stdc++.h>
using namespace std;
string longest(int n,int m, string& s){
    int l = n;
    int r = m;
    while(l>=0&&r<s.size()&&s[l]==s[r]){
        l--;
        r++;
    }
    return s.substr(l+1,r-l-1);
}
void substring(string &s){
    string str;
    for(int i =0;i<s.size();i++){
        string a = longest(i,i,s);
        string b = longest(i,i+1,s);
        if(str.length()<a.length()){
            str = a;
        }else if(str.length()<b.length()){
            str = b;
        }
    }
    cout<<str<<endl;
}
int main(){
    string s = "rac ecar";
    substring(s);
}