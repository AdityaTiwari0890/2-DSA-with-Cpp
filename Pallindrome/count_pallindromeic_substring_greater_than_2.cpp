#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int palli(int l, int r, string &s){
        int n1 = s.length();
        int count = 0;
        while(l>=0&&r<n1&&s[l]==s[r]){
            if(r-l+1 >1)
            count++;
            l--;
            r++;
        }
        return count;
    }
    int countPS(string s) {
        int total = 0;
        for(int i =0;i<s.size();i++){
            int a = palli(i,i,s);
            int b = palli(i,i+1,s);
            total+=a;
            total+=b;
        }
        return total;
    }
};
int main(){

}