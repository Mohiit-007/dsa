#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node *next;

    node(int data){
        this->value = data;
        this->next = NULL;
    }
};

node* insertathead(int value,node*& head,node*& tail){
    if(head == NULL && tail == NULL){
        node* newnode = new node(value); 
        head = newnode;
        tail = newnode;
    }
    else{
        node* newnode = new node(value);
        newnode->next = head;
        head = newnode; 
    }
    return head;
}

node* insertattail(int value,node*& head,node*& tail){
    if(head == NULL && tail == NULL){
        node* newnode = new node(value);
        tail = newnode;
        head = newnode;
    }
    else{
        node* newnode = new node(value);
        tail->next = newnode;
        tail = newnode;
    }
    return head;
}

int length(node* head){
    int n = 0;
    node* temp = head;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

node* insertatanyposition(int position,int value,node* &head,node* &tail){
    int n = length(head);
    if(position == 1){
        insertathead(value,head,tail);
    }
    else if(position == n+1){
        insertattail(value,head,tail);
    }
    else{
        node* temp = head;
        for(int i=0;i<position-2;i++){
            temp = temp->next;
        }
        node* newnode = new node(value);
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}


void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int searching(int target,node* head){
    int ans = 0;
    node* temp = head;
    while(temp!=NULL){
        ans++;
        if(target == temp->value){
            return ans;
        }
        temp = temp->next;
    }
    return -1;
}

node* deltenode(int pos,node* &head,node* &tail){
    int n = length(head);

    if(head == NULL && tail == NULL){
        cout<<"no node to delete"<<endl;
    }

    if(head == tail){
        node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else{
        if(pos == 1){
            node *temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            node* prev = head;
            for(int i=0;i<pos-2;i++){
                prev = prev->next;
            }
            node* curr = prev->next;
            node* forward = curr->next;
            prev->next = forward;
            curr->next = NULL;
            delete curr;
        }
    }
    return head;
}

node* deletebyvalue(int target,node *head,node *tail){

    if(head == tail){
        node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else{
        node* prev = head;
        while(prev != NULL){
            if(target == prev->value){
                node *curr = prev;
                delete curr;
            }
            // else{
            //     cout<<"element not found"<<endl;
            // }
            prev = prev->next;
        }
    }
    return head;
}

int main(){
    node* head = NULL;
    node* tail = NULL;
    // head = insertathead(10,head,tail);
    // print(head);
    // head = insertathead(20,head,tail);
    // print(head);
    // head = insertathead(30,head,tail);
    // print(head);
    head = insertattail(10,head,tail);
    // print(head);
    head = insertattail(20,head,tail);
    // print(head);
    head = insertattail(30,head,tail);
    // print(head);
    head = insertatanyposition(2,25,head,tail);
    // print(head);
    head = insertatanyposition(5,45,head,tail);
    // print(head);
    head = insertatanyposition(3,35,head,tail);
    print(head);
    // cout<<searching(20,head)<<endl; // searching in linked list
    head = deltenode(3,head,tail);
    print(head);

}