#include<iostream>
using namespace std;

// by making inline function we not provide extra memory and more function call
inline int getMax(int a, int b){
    return (a > b) ? a:b;
}
int main(){

    int a =1 , b = 2;
    int ans = 0;
    // if(a>b){
    //     ans = a;
    // }else{
    //     ans = b;
    // }
    //we can above statement in tersiary form

    // ans = (a > b) ? a:b;
    ans = getMax(a,b);
    cout<< ans << endl;

    a = a + 3;
    b = b+1;

    ans = getMax(a,b);
    cout<< ans << endl;
}