#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    // constructor 
    node( int data ){
        this-> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    } 

    // destructor for deletion
    ~node(){
    int value = this -> data;
    // memory free
    if( next != NULL){
        delete next ;
        next = NULL;
    }
    cout << " memory free " << value << endl;
    } 
};

// traverse the link list 
void print( node* head){
    node* temp = head;
    while( temp != NULL){
        cout << temp -> data <<  " ";
        temp = temp -> next;
    }
    cout << endl;
}

// length of linked list
int getlength( node* head){

    int length = 0;
    node* temp = head;
    while( temp != NULL){
        length++;
        temp = temp -> next;
    }
    return length;
}

void insertatHead( node* &head , int data){
    if( head == NULL){
        node* temp = new node(data);
        head  = temp;
    }else {
        node* temp = new node(data);
        temp -> next = head  ;
        head -> prev = temp ;
        head = temp;
    }
   
}



void insertatTail(node* &tail , int data){
    node* temp = new node(data);
    if( tail == NULL){
        node* temp = new node(data);
        tail = temp;
    }else{
        node* temp = new node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
    
}

// insert at position 
void insertatPosition(node* &head , node* &tail , int position , int data){
     if( position == 1){
        insertatHead(head , data);
        return;
    }
    node* temp = head ;
    int cnt = 1;
    while( cnt < position-1){
        temp = temp -> next;
        cnt ++;
    }

    // if position is greater than length of linked list then insert at tail
    if( temp -> next == NULL){
        insertatTail(tail , data);
        return;
    }

    // node creation 
    node* nodeInsert = new node(data);
    nodeInsert -> next = temp -> next;
    temp -> next -> prev = nodeInsert;
    temp -> next  = nodeInsert; 
    nodeInsert -> prev = temp;
}

void deleteNode( int position , node* &head){
    // deleting starting node 
    if( position == 1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
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
        curr -> prev = NULL;
        prev -> next = curr -> next ;
        curr -> next  = NULL;
        delete curr;  // memory free of deleted node
    }
}

int main(){

    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1 ;
    
    print(head);

    //cout << getlength(head) << endl;

    insertatHead(head , 11);
    print(head);

    insertatHead(head , 13);
    print(head);

    insertatHead(head , 8);
    print(head);

    insertatTail(tail , 25);
    print(head);

    insertatPosition(head , tail , 5 , 100);
    print(head);

    insertatPosition(head , tail, 1 , 101);
    print(head);

    return 0;
}