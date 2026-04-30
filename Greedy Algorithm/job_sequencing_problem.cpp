#include<bits/stdc++.h>
using namespace std;
vector<int> jobs(vector<vector<int>> job,int n){
    sort(job.begin(),job.end(),[](vector<int>a,vector<int>b){
        if(b[2]==a[2])
        return a[0]<b[0];
        return a[2]>b[2];
    });
    int assigned = 0;
    int profit = 0;
    for(int i =1;i<=n;i++){
        if(job[i-1][1]>i){
            assigned++;
            profit+=job[i][2];
        }
    }
    vector<int> ans = {assigned,profit};
    return ans;

}
int main(){
    vector<vector<int>>arr = {{1,4,20},{2,1,10},{3,2,40},{4,2,30}};
    vector<int> ans = jobs(arr,4);
    for(int i =0;i<2;i++){
        cout<<ans[i]<<" ";
    }
}