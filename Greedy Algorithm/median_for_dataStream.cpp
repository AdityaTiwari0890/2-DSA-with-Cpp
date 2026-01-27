#include<bits/stdc++.h>
using namespace std;
class Medium{
    private:
    priority_queue<int,vector<int>,greater<int>> max_heap;
    priority_queue<int> min_heap;
    public:
    Medium(){
    }
    double Mediumfinder(){
        if(max_heap.size()==min_heap.size()){
            return (max_heap.top()+min_heap.top())/2.0;
        }
        return max_heap.top();
    }
    void add(int num){
        max_heap.push(num);
        min_heap.push(max_heap.top());
        max_heap.pop();
        while(max_heap.size()<min_heap.size()){
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }
};
int main() {
    Medium mf;
    mf.add(1);
    mf.add(2);
    cout << mf.Mediumfinder() << endl; // Output: 1.5
    mf.add(3);
    cout << mf.Mediumfinder() << endl; // Output: 2
    return 0;
}