#include<bits/stdc++.h>
using namespace std;
void PrefixToPostfix(string s){
    stack<string> st;
    // string result;
    for(int i = s.size()-1; i >= 0; i--){
        char c = s[i];
        if(isalnum(c)){
            st.push(string(1,c));
        }
        else{
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            st.push("("+op1+c+op2+")");
        }
    }
    cout<<st.top();
}
int main(){
    string s = "*+ab-cd";
    PrefixToPostfix(s);
}