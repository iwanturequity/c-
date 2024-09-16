#include<iostream>
using namespace std;

void shorted( int arr[] , int n){
    if( n == 0 || n == 1){
        return ;
    }
    // 1 case solved 
    for( int i=0; i< n-1; i++){
        if(arr[i] > arr[i+1]){
            swap( arr[i] , arr[i+1]);
        }
        
    
    }
    shorted( arr  , n-1 );
}
int main(){

    int arr[5] = { 5 ,2, 8,3 ,1};

     shorted( arr , 5);

    for( int i =0; i<5; i++){
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}