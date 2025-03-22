#include<iostream>
using namespace std;

class heap{
    public:
        int arr[100];
        int size;

    // constructor
    heap(){
        arr[0] = -1;
        size = 0;
    }
    // insertion in heap
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index>1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }else{
                return; 
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<< arr[i] << " ";
        }
        cout<< endl;
    }

    // deletion from heap
    void deletefromHeap(){
        // base case
        if(size == 0){
            cout << " heap is empty " << endl;
            return;
        }

        // step-1: change last and first element
        swap(arr[1] , arr[size]);
        size--;
        // step -3 now check left and right child of index
        int i = 1; 
        while(i<size){
            int leftChild = 2*i;
            int rightChild = 2*i + 1;

            if(leftChild<size && arr[i] < arr[i] <arr[leftChild]){
                swap(arr[i] , arr[leftChild]);
                i = leftChild;
            }
            else if(rightChild<size && arr[i] < arr[rightChild]){
                swap(arr[i] , arr[rightChild]);
                i = rightChild;
            }
            else{
                return;
            }
        }
    }
};
int main(){

    heap h;
    h.insert(5);
    h.insert(3);
    h.insert(7);
    h.insert(1);
    h.insert(9);
    h.print();

    return 0;
}