#include<iostream>
using namespace std;

int getPivot(int arr[] , int n ){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s < e){
        
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[5] = {8,11,15,1,2};
    cout<< " pivot in arry " << getPivot(arr , 5) << endl;
   return 0;
}