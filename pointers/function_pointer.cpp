#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

void update( int *p){
    // for location change ----- not change 
    //p = p + 1 ;

    *p  = *p + 1;
}

int getSum( int *arr , int n ){

    int sum = 0;
    for( int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}


int main (){
    /*
    int value = 5;

    int *p = &value;

    print(p);
    cout << " brfore " << *p << endl;
    update(p);
    cout<< " after " << *p << endl;
    */

//    int arr[6] = {1, 2,4,6,7,8};

    
//     cout << "sum is "  << getSum( arr+3 , 3) << endl;
    char s[]= "hello";
    char *p = s;
    cout << s[0] << " " << p[0];

    return 0;
}