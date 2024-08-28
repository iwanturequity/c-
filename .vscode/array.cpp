#include<iostream>
using namespace std;

void printArray( int arr[] , int size ) {
    cout << "printing the array" << endl;
    //print aaray
     for(int i = 0; i<size ; i++) {
        cout<<arr[i]<< " ";
     }
    cout << "printing done " << endl;
}
int main () {
    //declare array 
    int num[15];
    //accessing the array 
    cout <<endl << "value at 1 index" << num[1] << endl<< endl;

    cout << endl << "everythng is fine " << endl << endl ;

    // intialising the array
    int second[3] = { 3, 5, 7}; 
     cout << "value at 2 index" << second[2] << endl;

     int third[15] = {3,8};
     int n = 15;
    printArray( third , 15);

    //we can also intialize all location with zero
    int fourth[10] = {0};


     n = 10;
    printArray( fourth , 15);

    //size of array
    int fourthsize = sizeof(fourth)/sizeof(int);
    cout << "size of fourth" << fourthsize << endl;

    return 0 ;
}