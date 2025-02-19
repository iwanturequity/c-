#include<iostream>
#include<queue>
using namespace std;


class Node{
    // Node class with data, left and right pointers
    public:
    int data;
    Node* left;
    Node* right;
    
    //constructor with data and left and right pointers
    Node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildtree(Node* root ){
    cout << " enter the data " << endl;
    int data;
    cin>>data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    // using here recursion to build the tree
    cout << " enter the left child of " << data << endl;
    root->left = buildtree(root -> left);
    cout << " enter the right child of " << data << endl;
    root -> right = buildtree(root -> right);
}

// levelorder traversal of the tree

void levelOrdertraverse(Node* root){
    queue<Node*>q;
    q.push(root);

    while( !q.empty()){
        Node* temp = q.front();
        cout << temp -> data << " " ;
        q.pop();

        if(temp -> left){
            q.push(temp -> left);
        }

        if(temp -> right){
            q.push(temp -> right);
        }
    }
};

int main(){

    Node* root = NULL;

    root = buildtree(root);

    // levelorder traversal of the tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrdertraverse(root);
    return 0;
}