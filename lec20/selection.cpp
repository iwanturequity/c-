#include<iostream>
using namespace std;

void seleSort(int arr[] , int n){
    for(int i =0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
}
void print(int arr[] , int n ){
    for(int i =0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int main(){
    int arr[5] = {5,3,8,2,6};

    seleSort(arr, 5);
    print( arr, 5);

    return 0;
}