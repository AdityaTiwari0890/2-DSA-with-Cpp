#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool reorganizeString(string s) {
        int total = s.length();
        int distinct = 0;
        int max_freq = 0;
        vector<int>str(26,0);
        for(char c: s){
            if(str[c-'a'] == 0){
                distinct++;
            }
            str[c-'a'] +=1;
            max_freq = max(max_freq,str[c-'a']);
        }
        cout<<total<<" "<<distinct<<" "<<max_freq<<endl;
        if(distinct>=max_freq){
            cout<<true<<endl;
        }else{
            if(total - distinct >max_freq){
                cout<<true<<endl;
            }else{
                cout<<false<<endl;
            }
        }
        return "";
    }
};