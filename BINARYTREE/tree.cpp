#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }

};

node* createtree(){
    cout<<"enter value of node: ";
    int value;
    cin>>value;

    if(value == -1){
        return NULL;
    }

    node* root = new node(value);
    cout<<"left child node:"<<value<<endl;
    root->left = createtree();
    cout<<"right child node:"<<value<<endl;
    root->right = createtree();

    return root;
}

void preordertraversal(node* root){ //NLR
    if(root == NULL){
        return;
    }

    cout<<root->data<<endl;
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void Inordertraversal(node* root){ // LNR
    if(root == NULL){
        return;
    }

    preordertraversal(root->left);
    cout<<root->data<<endl;
    preordertraversal(root->right);
}
void postordertraversal(node* root){ // LRN
    if(root == NULL){
        return;
    }

    preordertraversal(root->left);
    preordertraversal(root->right);
    cout<<root->data<<endl;
}

void levelordertraversal(node* root){ //level
    if(root == NULL){
        return ;
    }

    queue<node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        node* front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout<<front->data<<endl;
            if(root->left != NULL) q.push(root->left);
            if(root->right != NULL )q.push(root->right);
        }
    }
}
 
int main(){
    node* root = createtree();

    return 0;
}