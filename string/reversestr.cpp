#include<iostream>
using namespace std;

void reversestr( char name[] , int n){
    int s =0;
    int e = n-1;
    while (s<e)
    {
       swap(name[s++] , name[e--]);
    }

    
}

int getLength( char name[]){
    int count = 0;
    for (int i= 0; name[i] != '0'; i++){
        count++ ;
    }
    return count;
}

int main(){
    char name[20];
    cout << " your name is " ;
    cin>> name;
    cout<< "enter your name " ;

    cout<< name << endl;
    int len = getLength(name);
    cout<< "length " << len <<endl;

    reversestr(name , len);
    
    cout << " your name is " ;
    cout<< name << endl;
    return 0;
}