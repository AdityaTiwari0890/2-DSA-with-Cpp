#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k) {
       vector<int>freq(26,0);
       int left = 0;
       int right = 0;
       int length = 0;
       int maxCount = 0;
       while(right<s.size()){
        freq[s[right]-'A']++;
        maxCount = max(maxCount,freq[s[right]-'A']);
        if(((right-left+1)-maxCount)>k){
            freq[s[left]-'A']--;
            left++;
        }
        length = max(length,right-left+1);
        right++;
       } 
       return length;
}
// AABABBA