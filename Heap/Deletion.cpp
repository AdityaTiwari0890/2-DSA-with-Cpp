#include<bits/stdc++.h>
using namespace std;
class Heap{
    private:
    int size;
    int capacity;
    int *arr;
    void Heapify(int index){
        int largest = index;
        int left_child = 2*index+1;
        int right_child = 2*index+2;
        if(left_child<size&&arr[left_child]>arr[largest]){
            largest = left_child;
        }
        if(right_child<size&&arr[right_child]>arr[largest]){
            largest = right_child;
        }
        if(largest!=index){
            swap(arr[largest],arr[index]);
            Heapify(largest);
        }
    }
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
        cout<<endl;
    }
    void Delete(){
        if(size<0){
            cout<<"Heap Underflow.\n";
        }
        cout<<arr[0]<<" is Deleted.\n";
        swap(arr[size-1],arr[0]);
        size--;
        Heapify(0);
    }
};
int main(){
    int size = 10;
    Heap hp(10);
    for(int i =1;i<14;i++){
        hp.insert(i);
    }
    hp.print();
    hp.Delete();
    hp.Delete();
    hp.print();
}