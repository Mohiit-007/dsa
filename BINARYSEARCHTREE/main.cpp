#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;

    node(int data){
        this->val = data;
        left = nullptr;
        right = nullptr;
    }
};

node* BSTtree(node* root,int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    else{
        if(root->val > data){
            root->left = BSTtree(root->left,data);
        }
        else{
            root->right = BSTtree(root->right,data);
        }
    }
    return root;
}

node* createtree(){
    cout<<"enter value of data: "<<endl;
    int data;
    cin>>data;
    node* root = NULL;
    while(data != -1){   
        root = BSTtree(root,data);
        cout<<"enter value of data: "<<endl;
        cin>>data;
    }
    return root;
}

void preordertraversal(node* root){
    if(!root){
        return;
    }

    cout<<root->val<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(node* root){
    if(!root){
        return;
    }

    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->val<<" ";
}

void inordertraversal(node* root){  // always sorted BST
    if(!root){
        return;
    }

    inordertraversal(root->left);
    cout<<root->val<<" ";
    inordertraversal(root->right);
}

int BSTmin(node* root){
    if(!root ){
        return 0;
    }

    while(root->left){
        root = root->left;
    }
    return root->val;
}

int BSTmax(node* root){
    if(!root){
        return 0;
    }

    while(root->right){
        root = root->right;
    }
    return root->val;
}

void levelordertraversal(node* &root){
    if(!root){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        auto front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->val<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}

bool searching(node* root,int target){
    if(!root){
        return false;
    }

    if(root->val == target){
        return true;
    }
    if(root->val > target){
        bool left = searching(root->left,target);
        if(left == true){
          return true;
        }
    }
    if(root->val < target){
        bool right = searching(root->right,target);
        if(right == true){
          return true;
        }
    }
    return false;
}

int main(){
    node* root = createtree();
    cout<<endl;
    preordertraversal(root);
    cout<<endl;
    postordertraversal(root);
    cout<<endl;
    inordertraversal(root); // always sorted BST
    cout<<endl;
    levelordertraversal(root);
    cout<<"max:"<<BSTmax(root)<<endl;
    cout<<"min:"<<BSTmin(root)<<endl;
    int target = 75;
    if(searching(root,target)){
        cout<<"target fonund"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }

}