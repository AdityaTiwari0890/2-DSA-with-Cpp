#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int max_ele_len = 0;
        int max_len = 0;
        unordered_map<char,int> mp;
        while(right<s.size()){
            mp[s[right]]++;
            max_ele_len = max(max_ele_len,mp[s[right]]);
            if((right-left+1)-max_ele_len >k){
                if(--mp[s[left]] == 0) mp.erase(s[left]);
                left++;                
            }
            max_len = max(right-left+1,max_len);
            right++;
        }
        return max_len;
    }
};