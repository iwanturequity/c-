
#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left ;
    Node* right ;

    Node(int d){
        this->data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

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

Node* insertinBst(Node* root , int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    // right part me insert krenge if date bada ho gya to 
    if(data > root->data){
        root->right = insertinBst(root->right, data);
    }else{
        root->left = insertinBst(root->left, data);
    }

    return root;
}

// max and min value of BST

Node* minValue(Node* root){
    Node* temp = root;

    while(temp ->left != NULL){
        temp = temp -> left;
    }
    return temp;
};

Node* maxValue(Node* root){
    Node* temp = root;
    while( temp ->right != NULL){
        temp = temp -> right;
    }
    return temp;
}

// deletion from BST

Node* deleteNode(Node* root , int val){
    if(root == NULL){
        return root;
    }
    if(root -> data == val){
        // for 0
        if(root->left== NULL && root ->right == NULL){
            delete root ;
            return NULL;
        }
        // for 1 child 
        if(root->left != NULL && root-> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL){
            Node* temp = root -> right ;
            delete root;
            return temp;
        }

        // for 2 child 
        if(root ->left != NULL && root ->right != NULL){
            int mini = minValue(root->right)->data;
            root ->data = mini;
            root -> right = deleteNode(root->right , mini);
            return root;
        }
    }
    else if(root->data > val){
        root ->left = deleteNode(root ->left , val);
    }
    else{
        root->right = deleteNode(root ->right , val);
    }
}
void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
       root =  insertinBst(root , data);
       cin >> data;
    }
};
int main(){
    Node* root = NULL;

    cout << " enter the data create the bst " << endl;

    takeInput(root);

    cout << " printing the bst " << endl;

    levelOrdertraverse(root);

    cout << endl<< " printing the inorder " << endl;
    inorder(root);

    cout << endl<< " printing the preorder " << endl;
    preorder(root);

    cout << endl<< " printing the postorder " << endl;
    postorder(root);

    cout << " minimun value is " << minValue(root)->data << endl;
    cout << "maximum value is " << maxValue(root)->data << endl;

    return 0;
}