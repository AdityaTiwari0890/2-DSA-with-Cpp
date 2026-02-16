#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& arr) {
        vector<char>result;
        int curr = 1;
        int i;
        for(i =1;i<arr.size();i++){
            if(arr[i] == arr[i-1]){
                curr++;
            }else{
                result.push_back(arr[i-1]);
                if(curr>1){
                    string curre = to_string(curr);
                    for(char c:curre){
                        result.push_back(c);
                    }
                }
                curr = 1;
            }
        }
        result.push_back(arr[i-1]);
        if(curr>1){
            string curre = to_string(curr);
            for(char c:curre){
                result.push_back(c);
            }
        }
        arr = result;
        return result.size();

    }
};