#include<bits/stdc++.h>
using namespace std;
struct Job{
public:
int id;
int dead;
int profit;
};
pair<int,int> Jobs(Job arr[],int n){
    sort(arr,arr+n,[](Job a,Job b){
        // return a->profit>b->profit;
    });
    int max_dead = 0;
    for(int i =0;i<n;i++){
        max_dead = max(arr[i].dead,max_dead);
    }
    vector<int>max_deadline(max_dead,-1);
    int earning = 0;
    int allocations = 0;
    for(int i =0;i<n;i++){
        int profit = arr[0].profit;
        int deadline = arr[0].dead;
        if(max_deadline[i]!=-1){
            for(int j = deadline;j>0;j--){
                if(max_deadline[j]==-1){
                    max_deadline[j]=deadline;
                    earning += profit;
                    allocations+=1;
                }
            }
        }else{
            earning += profit;
            allocations+=1;
        }
    }
    return {allocations,earning};
}
int main(){

}