#include<iostream>
using namespace std;

int getLength( char name[]){
    int count = 0;
    for (int i= 0; name[i] != '\0'; i++){
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

    cout<< "length " << getLength(name) <<endl;
    
    return 0;
}