#include<bits/stdc++.h>
using namespace std;
// int Platforms(int n , int arr1[],int arr2[]){
//     queue<pair<int,int>> platform;
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//     for(int i =0;i<n;i++){
//         pq.push({arr1[i],arr2[i]});
//     }
//     int count = 0;
//     for(int i =0;i<2400;i+=100){
//         while(!platform.empty()){
//             auto ele = platform.front();
//             int dept = ele.second;
//             if(i>=dept) platform.pop();
//         }
//         auto ele = pq.top();
//         if(i>=ele.first){
//             platform.push(ele);
//             pq.pop();
//         }
//         count = max((int)platform.size(),count);
//     }
//     return count;
// }



int Platforms(int n,int arr1[],int arr2[]){
    vector<pair<int,int>> trains;
    for(int i =0;i<n;i++){
        trains.push_back({arr1[i],arr2[i]});
    }
    sort(trains.begin(),trains.end());
    priority_queue<int>pq;
    int platforms = 0;
    for(int i =0;i<n;i++){
        int arrival = trains[i].first;
        int departure = trains[i].second;
        while(!pq.empty()&&pq.top()<=arrival){
            pq.pop();
        }
        pq.push(departure);
        platforms = max(platforms,(int)pq.size());
    }
    return platforms;
}
int main(){
    int arr[] = {900, 945, 955, 1100, 1500, 1800};
    int dep[] = {920, 1200, 1130, 1150, 1900, 2000};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    cout << "Minimum number of Platforms required " 
         << Platforms(n, arr, dep) << endl;

    return 0;
}