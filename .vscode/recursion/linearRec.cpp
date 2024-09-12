#include<iostream>

using namespace std;

bool linerSearch( int arr[] , int size , int k){
    // base case 
    if( size == 0){
        return false ;
    }
    if( arr[0] == k){
        return true;
    }
    else{
        bool remainPart = linerSearch( arr+1 , size -1 , k);
        return remainPart;
    }
}

int main(){

    int arr[5] = { 11, 2, 3 ,7,6 };
    int size = 5;
    int key = 2;

    bool ans = linerSearch( arr , 5 , 9) ;

    if( ans ){
        cout << " found " << endl;
    }else{
        cout << " not found " << endl;
    }


    return 0;
}