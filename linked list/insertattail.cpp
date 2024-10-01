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

    // destructor for delation 
    ~node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

// --------------- insertion at head -------------------;
  void insertAtHead( node* &head , int data){ 
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
  }


// --------------- insertion at tail -------------------;
void insertatTail( node* &tail , int data){
    node* temp = new node(data);
    tail -> next = temp;
    tail = temp;
}

// --------------- insertion at any position -------------------;
void insertatPostition(node* &tail ,  node* &head , int position , int data){

    if( position == 1){
        insertAtHead(head , data);
        return;
    }
    node* temp = head ;
    int cnt = 1;
    while( cnt < position-1){
        temp = temp -> next;
        cnt ++;
    }

    // if position is greater than length of linked list then insert at tail
    if( temp -> next = NULL){
        insertatTail(tail , data);
        return;
    }

    // node creation 
    node* nodeInsert = new node(data);
    nodeInsert -> next = temp -> next;
    temp -> next  = nodeInsert; 
}


// --------------- delation from linklist -------------------;

void deleteNode( int position , node* &head){
    // deleting starting node 
    if( position == 1){
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
    // memory free of stating node 
        delete temp;
    }
    else{
        // middle and last node delation 
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while( cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next ;
        curr -> next = NULL;  // breaking link with deleted node
        delete curr;  // memory free of deleted node
    }
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

    insertatTail(tail , 15);
    print(head);

    insertatPostition( tail ,head , 3 , 25);
    print(head);

    deleteNode(1 , head);
    print(head);

    return 0;
}