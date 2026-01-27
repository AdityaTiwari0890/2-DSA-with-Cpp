#include<bits/stdc++.h>
using namespace std;
bool jump(vector<int>arr,int index){
    if(arr[index] == 0){
        return false;
    }
    if(index == arr.size()-1){
        return true;
    }
    int count = 0;
    for(int i = 1;i<=arr[index];i++){
        count+=jump(arr,index+i);
    }
    return count;
}
int main(){
    vector<int> arr = {3, 2, 1, 0, 4};
    cout<<jump(arr,0);
}