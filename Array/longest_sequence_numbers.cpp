#include<bits/stdc++.h>
using namespace std;
int seq(vector<int>arr){
    int n = arr.size();
    unordered_set<int>st;
    int longest = 0;
    for(auto i: arr){
        if(st.find(i-1)==st.end()){
            int count = 1;
            int x = i;
            while(st.find(x+1)!=st.end()){
                count++;
                x = x+1;
            }
            longest = max(longest,count);
        }
    }
    return longest;
}
int main(){

}