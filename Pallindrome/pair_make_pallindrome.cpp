#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    int l = 0;
    int r = s.size()-1;
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
vector<vector<int>> Pallipair(vector<string>&words){
    vector<vector<int>>pairs;
    map<string,int>mp;
    for(int i =0;i<words.size();i++){
        string s1 = words[i];
        reverse(s1.begin(),s1.end());
        mp[s1] = i;
    }
    for(int j = 0;j<words.size();j++){
        for(int i =0;i<=words[j].size();i++){
            string prefix = words[j].substr(0,i);
            string suffix = words[j].substr(i);
            if(mp.find(suffix)!=mp.end()&&check(prefix)&&mp[suffix]!=j&&i!=words[j].size()){
                pairs.push_back({mp[suffix],j});
            }
            if(mp.find(prefix)!=mp.end()&&check(suffix)&&mp[prefix]!=j&&i!=words[j].size()){
                pairs.push_back({j,mp[prefix]});
            }
        }
    }
    return pairs;
}
int main(){
    vector<string> word = {"abcd","dcba","lls","s","sssll"};
    vector<vector<int>>pairs = Pallipair(word);
    cout<<pairs.size();
}