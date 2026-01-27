#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>> room;
        for(int i =0;i<start.size();i++){
            room.push_back({end[i],start[i]});
        }
        int meeting = 1;
        sort(room.begin(),room.end());
        int curr_end = room[0].first;
        for(int i =1;i<room.size();i++){
            if(curr_end<=room[i].second){
                meeting++;
                curr_end = room[i].first;
            }
        }
        return meeting;
    }
};