// #include<bits/stdc++.h>
// using namespace std;
// int job_profit(vector<vector<int>>arr,int n){
//     sort(arr.begin(),arr.end(),[](vector<int>a,vector<int>b){
//         if(a[2] == b[2])
//         return a[1]<b[1];
//         return a[2]>b[2];
//     });
//     int profit = 0;
//     for(int i =1;i<=n;i++){
//         if(arr[i-1][1]<=i){
//             profit += arr[i-1][2];
//         }
//     }
//     return profit;
// }
// int main(){

// }
#include<bits/stdc++.h>
using namespace std;
pair<int,int> job(vector<vector<int>>arr,int n){
    sort(arr.begin(),arr.end(),[](vector<int>a,vector<int>b){
        return a[2]>b[2];
    });
    int max_deadline = 0;
    for(auto x:arr){
        max_deadline = max(max_deadline,x[2]);
    }
    int count = 0;
    int profit = 0;
    vector<int>dead(max_deadline+1,-1);
    for(int i = 0;i<max_deadline;i++){
        for(int j =arr[i][2];j>0;j--){
            if(dead[j] == -1){
                dead[j] = arr[i][2];
                profit+=arr[i][2];
                count++;
            }
        }
    }
    return make_pair(count,profit);
}
int main(){

}