#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>rank = score;
        sort(rank.begin(),rank.end(),greater<int>());
        unordered_map<int,int> mp;
        int ranking = 1;
        for(int i =0;i<rank.size();i++){
            mp[rank[i]]=i+1;
        }
        vector<string>result(score.size());
        for(int i =0;i<score.size();i++){
            string value;
            if(mp[score[i]]==1){
                value = "Gold Medal";
            }
            else if(mp[score[i]]==2){
                value = "Silver Medal";
            }
            else if(mp[score[i]]==3){
                value = "Bronze Medal";
            }else{
                value = to_string(mp[score[i]]);
            }
            result[i] = value;
        }
        return result;
    }
};