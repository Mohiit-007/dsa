#include<iostream>
using namespace std;

class Deque{
    int *arr;
    int front;
    int rear;
    int n;

    public:
    Deque(int size){
        n = size;
        arr = new int[size];
        rear = -1;
        front = -1;
    }

    void pushFront(int value){
        if(front == 0){
            cout<<"overflow"<<endl;
        }
        else if(rear == -1 && front == -1){
            front++;
            rear++;
            arr[rear] = value;
        }
        else{
            front--;
            arr[front] = value;
        }
    }
    void pushBack(int value){
        if(rear == n-1){
            cout<<"overflow"<<endl;
        }
        else if(rear == -1 && front == -1){
            front++;
            rear++;
            arr[front] = value;
        }
        else{
            rear++;
            arr[rear] = value;
        }
    }
    void popFront(){
        if(front == -1 && rear == -1){
            cout<<"underflow"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }
    void popBack(){
        if(front == -1 && rear == -1){
            cout<<"underflow"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[rear] = -1;
            rear--;
        }
    }
    bool isempty(){
        if(front == -1 && rear == -1){
            return true;
        }
        return false;
    }
    int getsize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        return rear - front + 1;
    }
    int getfront(){
        if(front == -1) return -1;
        return arr[front];
    }
    int getback(){
        if(rear == -1) return -1;
        return arr[rear];
    }

    void print(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    Deque q(6);
    q.pushBack(10);
    q.pushBack(20);
    q.pushBack(30);
    q.pushBack(40);
    q.print();
    q.pushFront(-10);
    q.print();
    q.popFront();
    q.print();
    q.popBack();
    q.print();
    cout<<q.getsize()<<endl;
    cout<<q.getfront()<<endl;
    cout<<q.getback()<<endl;
    cout<<q.isempty()<<endl;
    q.popBack();
    q.popFront();
    q.popBack();
    cout<<q.getsize()<<endl;
    cout<<q.getfront()<<endl;
    cout<<q.getback()<<endl;
    cout<<q.isempty()<<endl;
    q.pushFront(10);
    q.pushFront(20);
    q.pushFront(30);
    q.print();

    return 0;
}