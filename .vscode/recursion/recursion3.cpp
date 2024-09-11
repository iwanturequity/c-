#include<iostream>
using namespace std;

bool isShorted(int arr[] , int size){
    // base case
    if( size == 0 || size == 1){
        return true ;
    }
    if( arr[0] > arr[1]){
        return false ;
    }
    else{
        bool remainPart = isShorted( arr + 1, size - 1);
        return remainPart;
    }

}

int main(){
    int arr[5] = { 2,5,3,6,1};
    int size = 5;

    bool ans = isShorted( arr , size);
    if(ans){
        cout << " array is shorted " << endl;
    }
    else{
        cout << " array is not shorted "  << endl;
    }

    return 0 ;
}