#include <iostream>
using namespace std;

class node{
    int data ;
    node* next ;

    node( int data ){
        this -> data = data;
        this -> next = NULL;
    }

    ~node(){
        int value = this -> data;
        // memory free 
        if( this -> next != NULL){
            delete next ;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void print(){
     
}

int main(){

    
    return 0;
}