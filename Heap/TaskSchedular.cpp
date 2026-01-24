#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> mp;
        //frequency
        for(int i = 0;i<tasks.size();i++){
            mp[tasks[i]]+=1;
        }
        //priority_que
        priority_queue<pair<int,int>> q;
        //priority_que insert
        for(auto k:mp){
            q.push({k.second,0});
        }
        //waiting queue
        queue<pair<int,int>> que;
        int i = 0;
        while(!q.empty()||!que.empty()){
            while(!que.empty()&&que.front().second<=i){
                    auto ele = que.front();
                    q.push(ele);
                    que.pop();
            }
            if(!q.empty()){
                auto element = q.top();
                q.pop();
                element = {element.first-1,i+n+1};
                if(element.first>0)
                que.push(element);
            }
            i++;
        }
        return i;
    }
};