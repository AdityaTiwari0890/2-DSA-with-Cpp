#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(string s){
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return l>=r;
    }
    bool checkPalindromeFormation(string a, string b) {
        for(int i = 0;i<a.size();i++){
            string prefix_a = a.substr(0,i);
            string suffix_a = a.substr(i);
            string prefix_b = b.substr(0,i);
            string suffix_b = b.substr(i);
            if(check(prefix_a+suffix_b)||check(prefix_b+suffix_a)) return true;
        }
        return false;
    }
};
int main(){}