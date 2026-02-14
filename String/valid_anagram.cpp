#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        vector<bool>str(26,0);
        for(int i =0;i<sentence.size();i++){
            str[sentence[i]-'a'] = 1;
        }
        for(int i =0;i<26;i++){
            if(str[i]<1){
                return false;
            }
        }
        return true;
    }
};
int main(){

}