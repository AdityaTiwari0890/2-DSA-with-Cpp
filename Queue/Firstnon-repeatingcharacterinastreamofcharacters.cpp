#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "abcacdbd";
    string ans;
    queue<char> que;
    int arr[26] = {0};
    for(char c:str){
        que.push(c);
        arr[c-'a']+=1;
        while(!que.empty()&&arr[que.front()-'a']>1){
            que.pop();
        }
    }
}