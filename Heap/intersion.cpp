#include<bits/stdc++.h>
using namespace std;
class Heap{
    int size;
    int capacity;
    int *arr;
    public:
    Heap(int cap){
        size = 0;
        int capacity = cap;
        arr = new int[cap];
    }
    void insert(int val){
        if(size>=capacity){
            cout<<"Heap Overflow";
            return;
        }
        int index = size;
        cout<<val<<" is inserted in Heap.\n";
        arr[size++] = val;
        while(index>0&&arr[(index - 1)/2]<arr[index]){
            swap(arr[(index - 1)/2],arr[index]);
            index = (index - 1)/2;
        }
    }
    void print(){
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int size = 10;
    Heap hp(10);
    for(int i =1;i<14;i++){
        hp.insert(i);
    }
    hp.print();
}