// #include<bits/stdc++.h>
// using namespace std;
// int majority(vector<int> arr){
//     int count = 0;
//     int num = arr[0];
//     for(int i =0;i<arr.size();i++){
//         if(arr[i] == num){
//             count++;
//         }else{
//             count--;
//             if(count <= 0){
//                 num = arr[i];
//             }
//         }
//     }
//     return num;
// }
// int main(){
//     vector<int> arr = {1, 1, 1, 2, 1, 2,2,2};
//     cout<<majority(arr);
// }
#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>arr){
    int cnt = 0;
    int num = INT_MAX;
    for(int i =0;i<arr.size();i++){
        if(cnt != 0){
        if(arr[i] == num){
            cnt++;
        }else{
            cnt--;
        }
        }else{
        num = arr[i];
        cnt++;
        }
    }
    return num;
}
int main(){
    vector<int> arr = {7,0,0,1,7,7,2,7,7};
    cout<<majority(arr);
}