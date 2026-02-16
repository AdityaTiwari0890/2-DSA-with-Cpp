#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(char c: s){
            mp[c] +=1;
        }
        priority_queue<pair<int,char>>pq;
        for(auto m: mp){
            pq.push({m.second,m.first});
        }
        string ans = "";
        while(pq.size()>1){
            auto ele1 = pq.top();
            pq.pop();
            auto ele2 = pq.top();
            pq.pop();
            ans+=ele1.second;
            ans+=ele2.second;
            if(ele1.first>1)
            pq.push({ele1.first-1,ele1.second});
            if(ele2.first>1)
            pq.push({ele2.first-1,ele2.second});
        }
        if(!pq.empty()){ans+=pq.top().second;}
        return ans.size() == s.size()?ans:"";
    }
};
int main(){}