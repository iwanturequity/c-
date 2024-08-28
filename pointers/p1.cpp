#include<iostream>
using namespace std;

int main(){

    int num = 5;

    cout<< num << endl;
    // address of num 
    cout<< "address of num " << &num << endl;

    int *ptr = &num;

     cout<< "value is at " << ptr << endl;

    cout<< "value is at " << *ptr << endl;


    return 0;
}