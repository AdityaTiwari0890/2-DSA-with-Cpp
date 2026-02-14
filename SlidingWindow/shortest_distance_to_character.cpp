#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        stack<int>st;
        int n= s.size();
        vector<int>str(n,INT_MAX);
        for(int i =0;i<n;i++){
            if(s[i] == c){
                str[i] = 0;
                while(!st.empty()){
                    str[st.top()] = i-st.top();
                    st.pop();
                }
            }
            else{
                st.push(i);
            }
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = n-1;i>=0;i--){
            if(s[i] == c){
                if(!st.empty()){
                    str[st.top()] = min(str[st.top()],st.top()-i);
                    st.pop();
                }
            }else{
                st.push(i);
            }
        }
        return str;
    }
};
int main(){

}
