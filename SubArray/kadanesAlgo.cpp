#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
// int sum(vector<int>arr,int n1,int n2){
//     int sum = 0;
//     for(int i =n1;i<n2;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
int main(){
    vector<int> arr = {7,4,-5,8,-12,7,6,-2};
    int n = arr.size();
    int sum = 0;
    int max = arr[0];
    for(auto i = 0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum>max){
            max = sum;
        }
        cout<<sum<<" ";
    }
    cout<<sum<<" ";
    
}