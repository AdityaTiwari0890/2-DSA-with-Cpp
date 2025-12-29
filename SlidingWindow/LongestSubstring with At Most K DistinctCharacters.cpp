#include<bits/stdc++.h>
using namespace std;
int Longest(string s,int k){
    unordered_map<char,int>mp;
    int left = 0;
    int right = 0;
    int length = 0;
    while(right<s.size()){
        mp[s[right]]++;
        while(mp.size()>k){
            mp[s[left]]--;
            if(s[left]==0) mp.erase(s[left]);
            left++;
        }
        length = max(length,right-left+1);
        right++;
    }
    return length;
}
