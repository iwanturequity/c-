#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node( int data){
       this -> data = data;
       this -> next = NULL; 
    }
};

void insertatPostition( int position , int data){

}

void insertatTail( node* &tail , int data){
    node* temp = new node(data);
    tail -> next = temp;
    tail = tail -> next;
}

void print( node* &head){
    node* temp = head ;
    while( temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){

    node* node1 = new node(30);

    node* head = node1;
    node* tail = node1 ;
    print(head);

    insertatTail(tail , 12);
    print(head);

    return 0;
}