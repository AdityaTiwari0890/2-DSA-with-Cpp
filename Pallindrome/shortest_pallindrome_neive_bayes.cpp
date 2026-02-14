#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // string palli(int l, int r, string& s){
    //     while(l>=0&&r<s.size()&&s[l]==s[r]){
    //         l--;
    //         r++;
    //     }
    //     return s.substr(l+1,r-l-1);
    // }
    // string shortestPalindrome(string s) {
    //     string str = "";
    //     for(int i =0;i<s.size();i++){
    //         string a = palli(i,i,s);
    //         string b = palli(i,i+1,s);
    //         if(str.length()<a.length()){
    //             str = a;
    //         }
    //         if(str.length()<b.length()){
    //             str = b;
    //         }
    //     }
    //     cout<<str;
    //     int len = str.length();
    //     string str1 = s.substr(len-1);
    //     reverse(str1.begin(),str1.end());
    //     str1+=str;
    //     return str1;
    // }
    bool check(string s){
        int l =0;
        int r = s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return l>=r;
    }
    string shortestPalindrome(string s) {
        for(int i = s.size();i>=0;i--){
            string prefix = s.substr(0,i);
            string suffix = s.substr(i);
            if(check(prefix)){
                string s1 = suffix;
                reverse(suffix.begin(),suffix.end());
                return suffix+s;
            }
        }
        return "";
    }
};
int main(){

}