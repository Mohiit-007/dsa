#include<iostream>
using namespace std;

class node{
    public:
    node* prev;
    int value;
    node* next;

    node(int data){
        value = data;
        prev = NULL;
        next = NULL;
    }
};

void insertathead(int value,node* &head,node* &tail){
    if(head == NULL && tail == NULL){
        node* newnode = new node(value);
        head = newnode;
        tail = newnode;
    }
    else{
        node* newnode = new node(value);
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}


void insertattail(int value,node* &head,node* &tail){
    if(head == NULL && tail == NULL){
        node *newnode = new node(value);
        tail = newnode;
        head = newnode;
    }
    else{
        node* newnode = new node(value);
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = NULL;
        tail = newnode;
    }
}
 
int length(node* head){
    int n = 0;
    node* temp = head;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

void insertatanyposition(int pos,int value,node* &head,node* &tail){
    int n = length(head);

    if(head == NULL && tail == NULL){
        node* newnode = new node(value);
        tail = newnode;
        head = newnode;
    }
    if(pos == 1){
        insertathead(value,head,tail);
    }
    else if(pos == n+1){
        insertattail(value,head,tail);
    }
    else{
        node* newnode = new node(value);
        node* temp = head;
        for(int i=0;i<pos-2;i++){
            temp = temp->next;
        }
        node* forward = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = forward;
        forward->prev = newnode;
    }
}

int searching(int target,node* head){
    int n = 0;
    node* temp = head;
    while(temp != NULL){
        n++;
        if(target == temp->value){
            return n;
        }
        temp = temp->next;
    }
    return -1;
}

void deletenode(int pos,node* &head,node* &tail){
    int n = length(head);
    if(head == NULL && tail == NULL){
        cout<<"linkedlist is empty"<<endl;
    }

    if(pos == 1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else if(pos == n){
        node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->next = NULL;
        temp->prev =NULL;
        delete temp;
    }
    else{
        node*temp = head;
        for(int i=0;i<pos-2;i++){
            temp = temp->next;
        }
        node* curr = temp->next;
        node* forward = curr->next;
        temp->next = forward;
        forward->prev = temp;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }

}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    node* tail = NULL;
    insertathead(10,head,tail);
    insertathead(20,head,tail);
    insertathead(30,head,tail);
    insertathead(40,head,tail);
    print(head);
    // insertattail(10,head,tail);
    // insertattail(20,head,tail);
    // insertattail(30,head,tail);
    // print(head);
    insertatanyposition(3,25,head,tail);
    print(head);
    cout<<searching(20,head)<<endl; // searching in doubly linked list
    deletenode(5,head,tail);
    print(head);

}