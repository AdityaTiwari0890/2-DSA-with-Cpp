#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int first = 0;
        int second = 0;
        int content =0;
        while(first<g.size()&&second<s.size()){
            if(s[second]>=g[first]){
                content++;
                first++;
                second++;
            }else{
                second++;
            }
        }
        return content;
    }
};