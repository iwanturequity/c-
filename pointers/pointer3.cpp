#include<iostream>
using namespace std;

int main(){
    int arr[5] {2,3,4,5,6};

    char ch[6] = "abcde" ;

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
   // entire value print kra dega 
    cout<< c << endl;

    return 0;
}