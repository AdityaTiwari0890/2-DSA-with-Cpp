#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool palli(string& s, int l, int r){
        while(l<r&&s[l]==s[r]){
            l++;
            r--;
        }
        return l>=r;
    }
    bool check(string& a, string& b){
        int l = 0;
        int r = a.size()-1;
        while(l<r&&a[l]==b[r]){
            l++;
            r--;
        }
        return palli(a,l,r)||palli(b,l,r);
    }
    bool checkPalindromeFormation(string a, string b) {
        return check(a,b)||check(b,a);
    }
};
int main(){

}