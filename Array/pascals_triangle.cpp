#include<bits/stdc++.h>
using namespace std;
vector<int> func(int n){
    n += 1;
    int ans  = 1;
    vector<int>result;
    result.push_back(ans);
    for(int i =1;i<n;i++){
        ans *= n-i;
        ans /= i;
        result.push_back(ans);
    }
    return result;
}
int main(){
    vector<vector<int>> ans;

    for(int i =0;i<n;i++){
        ans.push_back(func(i));
    }

}