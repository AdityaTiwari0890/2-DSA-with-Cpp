#include<bits/stdc++.h>
using namespace std;
class Data{
    public:
    int end;
    int start;
    int index;
    // Data(int st,int en, int ind):start(st),end(en),index(ind){}
};
vector<int> meeting(vector<int>start,vector<int>end,int n){
    vector<Data> arr(n);
    for(int i =0;i<start.size();i++){
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].index = i;
    }
    sort(arr.begin(),arr.end(),[](Data a,Data b){
        if(a.end == b.end){
            return a.index<b.index;
        }
        return a.end<b.end;
    });
    vector<int>ans;
    int last = -1;
    for(int i =0;i<n;i++){
        if(arr[i].start>=last){
        ans.push_back(arr[i].index);
        last = arr[i].end;
        }
    }
    return ans;
}
int main(){}