
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        queue<int>que;
        vector<int>ans;
        int l =0;
        for(int i =0;i<arr.size();i++){
            if(arr[i]<0){
                que.push(i);
            }
            k--;
            if(k==0){
                l++;
                k++;
                if(!que.empty()){
                    ans.push_back(arr[que.front()]);
                    if(que.front()<l)
                    que.pop();
                }else{
                    ans.push_back(0);
                }
            }
        }
        return ans;
    }
};