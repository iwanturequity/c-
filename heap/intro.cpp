#include<iostream>
#include<queue>
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

            if(leftChild<size &&  arr[i] <arr[leftChild]){
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

void heapify(int arr[] , int n, int i){
    int largest = i;
    int left = 2*i ;
    int right = 2*i + 1;

    if(left<=n && arr[largest] < arr[left] ){
        largest = left;
    }
    if(right <=n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr , n , largest);
    }
}

// heap sort 
void heapSort(int arr[], int n){
    int size = n;

    while(size>1){
        swap(arr[size] , arr[1]);
        size--;
        heapify(arr , size , 1);
    }
}
int main(){

    heap h;
    h.insert(5);
    h.insert(3);
    h.insert(7);
    h.insert(1);
    h.insert(9);
    h.print();

    h.deletefromHeap();
    h.print();

    int arr[6] = {-1, 54, 55 , 53 , 52, 50};
    int n =5;

    // heap creation 0 based index 
    for(int i=n/2; i>0; i--) {
        heapify(arr , n , i);
    }
    
    cout<< " printing the array now " << endl;
    for(int i=1; i<=n ; i++){
        cout<< arr[i] << " ";
    }cout<< endl;

    // heapsort call
    heapSort(arr, n);
    cout<< " printing the sorted array " << endl;
    for(int i=1; i<=n ; i++){
        cout<< arr[i] << " ";
    }cout<< endl;

    // priority queue STK


    // this give authomatic max heap
    priority_queue<int>pq;
    pq.push(1);
    pq.push(4);
    pq.push(7);
    pq.push(2);

    cout<< "the top element is " << pq.top() << endl;
    pq.pop();
    cout<< "the top element is " << pq.top() << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>>minHeap;
    minHeap.push(1);
    minHeap.push(4);
    minHeap.push(7);
    minHeap.push(2);
    cout<< "the top element is " << minHeap.top() << endl;
    minHeap.pop();
    cout<< "the top element is " << minHeap.top() << endl;

    return 0;
}