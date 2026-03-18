#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sum1(vector<int>arr){
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    int n = arr.size();
    for(int i =0;i<n;i++){
        if(i>0&&arr[i]==arr[i-1]) continue;
        int right = n-1;
        int left = i+1;
        while(left<right){
            int sum = arr[i]+arr[left]+arr[right];
            if(sum == 0){
                ans.push_back({arr[i],arr[left],arr[right]});
                left++;
                right--;
                while(left<right&&arr[left] == arr[left-1]){
                    left++;
                }
                while(left<right&&arr[right]==arr[right+1]){
                    right--;
                }
            }
            else if(sum<0){
                left++;
            }else{
                right--;
            }
        }
    }
}
int main(){

}