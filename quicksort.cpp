#include <iostream>
using namespace std;

int Partion(int arr[] , int s , int e){
    int pivot = arr[s];
    int count = 0;
    for(int i= s+1; i<=e; i++){
        if(arr[i] < pivot){
            count++;
        }
    }
    // pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    // now go for right and left part 

    int i = s; int j = e;
    while( i<pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        while(i<pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}


void quickSort(int arr[] , int s  , int e){
    if(s >= e){
        return;
    }

    int p = Partion(arr , s  , e);

    quickSort(arr , s , p-1);
    quickSort(arr , p+1 , e);
}

int main() {

    int arr[10] { 8, 6,4,9,2 , 1 , 2 , 3 , 4 , 5};

    int n = 10;

    quickSort(arr , 0 , n-1);

   for( int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
   }cout << endl;
    

    return 0;
}