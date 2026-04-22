#include<bits/stdc++.h>
using namespace std;
int consecutive(vector<int>arr){
    if(arr.size()<1) return 0;
    unordered_set<int> st(arr.begin(),arr.end());
    
    int largest = 1;
    for(auto x: st){
        if(st.find(x-1)==st.end()){
            int count = 1;
            int curr = x;
            while(st.find(curr+1)!=st.end()){
                count++;
                curr += 1;
            }
            largest = max(largest,count);
        }
    }
    return largest;
}
int main(){}