#include<iostream>
using namespace std;

int gcd(int a , int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a != b){
        if(a>b){
            a = a-b ;
        }
        else{
            b = b-a;
        }
    }
}

int main(){

    int a , b ;
    cout<< "enter the values of a and b" << endl;

    cin>> a >> b;

    int ans = gcd(a , b);

    cout<< "gcd of number is " << ans << endl;



    return 0;
}