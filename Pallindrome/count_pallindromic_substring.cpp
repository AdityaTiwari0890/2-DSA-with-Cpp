#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int palli(int l, int r, string &s){
        int n1 = s.length();
        int count = 0;
        while(l>=0&&r<n1&&s[l]==s[r]){
            count++;
            l--;
            r++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int total = 0;
        for(int i =0;i<s.size();i++){
            total += palli(i,i,s);
            total += palli(i,i+1,s);
        }
        return total;
    }
};
int main(){

}