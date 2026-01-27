#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4};
    int n = arr.size();
    int element = 0;
    for(int i = 0;i<arr.size();i++){
        if(i%2!=0){
            arr.push_back(element^arr[i]);
        }else{
            element = arr[i];
        }
    }
    int a = 1;
    for(int i = n-1;i>=0;i--){
        for(int j = 0;j<i;j++){
            cout<<" ";
        }
        for(int k =arr.size()-1;k>=(int)arr.size()-a;k--){
            cout<<arr[k];
        }
        a++;
        cout<<endl;
    }

}
