#include<iostream>
using namespace std;

bool binarySearch( int *arr , int s , int e, int k){
    // base case 
    if( s>e ){
        return false  ;
    }
    int mid = s + (e-s)/2;

    if( arr[mid] == k){
        return true ;
    }
    if( arr[mid] > k){
        return binarySearch(arr , s , mid-1 , k);
    }
    else{
        return binarySearch(arr , mid+1 , e , k);
    }
}

int main(){

    int arr[5] = {2,4,6,8,9};

    int size = 5;
    int key = 9;

    int ans  = binarySearch( arr , 0 , 5 , key);

    cout << " present or not " << ans << endl;


    return 0;
}