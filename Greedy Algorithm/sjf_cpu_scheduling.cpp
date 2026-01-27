#include<bits/stdc++.h>
using namespace std;
int shortest(vector<int> jobs){
    int schedulings = 0;
    int avg_waiting = 0;
    sort(jobs.begin(),jobs.end());
    int job_count = jobs.size();
    for(int num:jobs){
        avg_waiting+=schedulings;
        schedulings+=num;
    }
    return (int)avg_waiting/job_count;
}
int main(){
    vector<int> arr = {4, 3, 7, 1, 2,10};
    cout<<shortest(arr);
}