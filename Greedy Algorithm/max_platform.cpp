#include<bits/stdc++.h>
using namespace std;
int platforms(vector<int>start,vector<int>end,int n){
    int last = -1;
    int count = 1;
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i =0;i<n;i++){
        count = max(count,(int)q.size());
        while(!q.empty()&&q.top()<=start[i]) q.pop();
        q.push(end[i]);
    }
    return count;
}
int platform(vector<int>arr,vector<int>dep,int n){
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int count = 1;
    int largest = 1;
    int i = 0;
    int j = 1;
    while(j<n){
        if(arr[j]<=dep[i]){
            count++;
            j++;
            largest = max(largest,count);
        }else{
            count--;
            i++;
        }
    }
    return largest;
}
int platforms_count(vector<int>arrive,vector<int>departure,int n){
    sort(arrive.begin(),arrive.end());
    sort(departure.begin(),departure.end());
    int platforms = 1;
    int max_plat = 0;
    int last = -1;
    int i =1;
    int j =0
    while(i<n){
        if(arrive[i]<=dep[j]){
            platforms++;
            i++;
            max_plot = max(platform,max_plat);
        }
        else{
            platforms--;
            j++;
        }
    }
    return max_plat;

}
int main(){
    vector<int> arr = {900, 945, 955, 1100, 1500, 1800};
    vector<int> dep = {920, 1200, 1130, 1150, 1900, 2000};
    int n = arr.size();
    cout<<platform(arr,dep,n);

}