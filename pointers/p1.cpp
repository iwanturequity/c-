#include<iostream>
using namespace std;

int main(){

    int num = 5;

    // cout<< num << endl;
    // // address of num 
    // cout<< "address of num " << &num << endl;

    // int *ptr = &num;

    //  cout<< "value is at " << ptr << endl;

    // cout<< "value is at " << *ptr << endl;

    // double d = 2.4;

    // double *p2 = &d;

    // cout<< "size of pointer" << sizeof(double) <<  endl;
    // cout<< "size of pointer" << sizeof(p2) <<  endl;
    // cout<< "size of pointer" << sizeof(ptr) <<  endl;

    int a  = num;
    a++;

    cout<< num << endl;

    int *p = &num;
    (*p)++;
    cout<< num << endl;
    // copying a pointer 

    int *q = p;
    cout<< *q <<  " - " << *p << endl;

    return 0;
}