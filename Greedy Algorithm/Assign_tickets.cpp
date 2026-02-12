#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>A(n);
    vector<int>B(m);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int l = 0;
    int r = 0;
    while(l<A.size()&&r<B.size()){
        if(A[l]<=B[r]){
            cout<<A[l]<<endl;
            l++;
        }else{
            cout<<-1<<endl;
        }
        r++;
    }
    while(r<B.size()){
        cout<<-1<<endl;
        r++;
    }
}