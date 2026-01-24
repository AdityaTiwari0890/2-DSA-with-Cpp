#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        map<int,int> mp;
        for(int i = 0;i<hand.size();i++){
            mp[hand[i]]+=1;
        }
        while(!mp.empty()){
            auto ele = mp.begin();
            int startCard = ele->first;
            mp[startCard]--;
            if(mp[startCard]<=0){
                mp.erase(startCard);
            }
            for(int i =1;i<groupSize;i++){
                if(mp.find(startCard+i)==mp.end()){
                    return false;
                }
                mp[startCard+i]--;
                if(mp[startCard+i]==0){
                    mp.erase(startCard+i);
                }
            }
            

        }
        return true;
    }
};