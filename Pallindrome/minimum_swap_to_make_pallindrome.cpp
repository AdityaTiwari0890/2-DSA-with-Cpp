#include<bits/stdc++.h>
using namespace std;
int min_swap(string &s){
    int l =0;
    int r = s.size();
    int swaps = 0;
    unordered_map<char,int>mp;
    for(int i =0;i<s.size();i++){
        mp[s[i]]++;
    }
    while(l<r){
        if(s[l]!=s[r]){
            char a = s[l];
            if(mp[a]>1){
                for(int i = r;i>l;i--){
                    if(s[i] == a){
                        for(int j = i;j<r-1;j++){
                            swap(s[j],s[j+1]);
                            cout<<s<<endl;
                            swaps++;
                        }
                    }
                }
            }else{
                int mid = (s.size()-1)/2;
                for(int i =l;i<mid;i++){
                    swap(s[i],s[i+1]);
                    cout<<s<<endl;
                    swaps++;
                }
            }
        }
        cout<<s<<endl;
        l++;
        r--;
    }
    return swaps;
}
int main(){
    string s = "aabcc";
    cout<<min_swap(s);
}