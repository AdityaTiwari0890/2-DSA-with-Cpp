#include<bits/stdc++.h>
using namespace std;
void nextSmallest(vector<int> nums){
    stack<int> st;
    for(int i =0;i<nums.size();i++){
        if(st.empty()){
            st.push(i);
        }else{
            while(nums[i]<nums[st.top()]){
                nums[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }

    }
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int> arr = {1,2,3,4,1,4,5};
    nextSmallest(arr);
}