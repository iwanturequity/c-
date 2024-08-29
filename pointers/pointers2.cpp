#include<iostream>
using namespace std;

int main(){

    /*
    int arr[10] = {3,4,5,6,7};

    cout<< " address of first array is "<< arr << endl;
    cout<< " address of first array is "<< &arr[0] << endl;

    int i = 3;
    cout<<i[arr] << endl;
    

   int a[20] = {2, 3, 4, 5};
   cout << &a[0] << endl;

   int *p = &a[0];
   cout << " -> " << &p <<  endl; 
*/
    int arr[10];
    // error
   // arr = arr + 1
   int *ptr = &arr[0];
    cout << ptr << endl;
   ptr = ptr +1;
   cout << ptr << endl;



    return 0;
}