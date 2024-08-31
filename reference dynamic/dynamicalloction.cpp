#include<iostream>
using namespace std;

int getSum(int *arr , int n ){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n ;
    cin >>  n;
    // variable size array create 

    int *arr = new int[n];

    // input in dynamic memory allocation
    for(int i =0; i<n; i++){
        cin>> arr[i];
    }
    int ans = getSum(arr , n);

    cout << " sum is " << ans << endl;

    return 0;
}