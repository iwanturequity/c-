#include<iostream>
using namespace std;

// pass by reference 
void update2(int &n){
    n++;
}
void update1(int n){
    n++;
}

int main(){
    /*
    int i = 5;
    int &j = i;
    cout << i << endl;
    i++;
    cout<< i << endl;
    j++;
    cout<< j << endl;
    */

   int n = 5;
    cout << " before " << n << endl;
    update2(n);
    cout << " after " << n <<endl;
    

    return 0;
}