#include<bits/stdc++.h>
using namespace std;
vector<int>MaxSum(vector<int>&a,vector<int>&b,int k){
     sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        priority_queue<pair<int, pair<int, int>>> pq;
        set<pair<int, int>> que;
        int sum = a[0] + b[0];
        pq.push({sum, {0, 0}});
        que.insert({0, 0});
        vector<int> ans;
        
        while (k-- && !pq.empty()) {
            auto ele = pq.top();
            pq.pop();
            int sum = ele.first;
            ans.push_back(sum);
            int index1 = ele.second.first;
            int index2 = ele.second.second;
            
            if (index1 + 1 < a.size() && !que.count({index1 + 1, index2})) {
                pq.push({a[index1 + 1] + b[index2], {index1 + 1, index2}});
                que.insert({index1 + 1, index2});
            }
            
            if (index2 + 1 < b.size() && !que.count({index1, index2 + 1})) {
                pq.push({a[index1] + b[index2 + 1], {index1, index2 + 1}});
                que.insert({index1, index2 + 1});
            }
        }
        
        return ans;
}
int main(){

}