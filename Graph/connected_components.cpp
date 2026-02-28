#include<bits/stdc++.h>
using namespace std;
int countComponents(vector<int> list[], int n, int e){
    vector<bool>visited(n,false);
    int conn = 0;
    queue<int>que;
    for(int i =0;i<n;i++){
        if(!visited[i]){
            conn+=1;
        }
        que.push(i);
        visited[i] = true;

        while(!que.empty()){
            int node = que.front();
            que.pop();
            for(int n: list[node]){
                if(!visited[n]){
                    que.push(n);
                    visited[n] = true;
                }
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int e;
    cin>>e;
    vector<int> list[n];
    int u,v;
    for(int i = 0;i<e;i++){
        cin>>u>>v;
        list[u].push_back(v);
        list[v].push_back(u);
    }


}