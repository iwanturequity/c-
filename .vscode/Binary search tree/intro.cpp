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

    return root;
}

// levelorder traversal of the tree
void levelOrdertraverse(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while( !q.empty()){
        Node* temp = q.front();
        // yaha answer print hone ja rha hai esliye esko bahr nikala ja rha hai
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " " ;
            if(temp -> left){
                q.push(temp -> left);
            }
    
            if(temp -> right){
                q.push(temp -> right);
            }
        }

    }
};


// inorder
void inorder(Node* root){
    if(root == NULL){
        return ;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
    // inorder traversal is left -> root -> right
}

// preorder
void preorder(Node* root){
    if(root == NULL){
        return ;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
    // inorder traversal is left -> root -> right
}

// postorder 
void postorder(Node* root){
    if(root == NULL){
        return ;
    }

    
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
    // inorder traversal is left -> root -> right
}

// build treee using level order traversal

void buildfromLevelOrder( Node* &root){
    queue<Node*>q;
    cout << "Enter root  for data " << endl;
    int data ;
    cin>> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << " enter  the left data of tree" << temp-> data << endl;
        int leftData;
        cin>> leftData ;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp -> left);
        }

        cout << " enter  the right data of tree" << temp -> data << endl;
        int rightData;
        cin>> rightData ;
        if(rightData!= -1){
            temp->right = new Node(rightData);
            q.push(temp -> right);
        }
    }
};

int main(){

    Node* root = NULL;

    buildfromLevelOrder(root);
    levelOrdertraverse(root);
    /*
    root = buildtree(root);

    // levelorder traversal of the tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Level order traversal of the tree is : " << endl;  
    levelOrdertraverse(root);

    cout << endl << " Inoredr traversal is " ;
    inorder(root);

    cout << endl << " Preorder traversal is " ;
    preorder(root);

    cout << endl <<  " Postorder traversal is " ;
    postorder(root);
    */

    buildfromLevelOrder(root);

    return 0;
}