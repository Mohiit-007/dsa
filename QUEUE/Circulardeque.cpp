#include<iostream>
using namespace std;

class CircularDeque{
    int *arr;
    int front;
    int rear;
    int n;

    public:
    CircularDeque(int size){
        n = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    
    void pushfront(int value){
        if((front == 0 && rear == n-1) || ((rear+1)%n == front)){
            cout<<"overflow"<<endl;
        }
        else if(rear == -1 && front == -1){
            rear = front = 0;
            arr[front] = value;
        }
        else if(front == 0 && rear != n-1){
            front = n - 1;
            arr[front] = value;
        }
        else{
            front--;
            arr[front] = value;
        }
    }

    void popfront(){
        if(front == -1 && rear == -1){
            cout<<"underflow"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front = rear = -1;
        }
        else if(front == n-1 && rear != 0){
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

    void pushback(int value){
        if((front == 0 && rear == n-1) || ((rear+1)%n == front)){
            cout<<"overflow"<<endl;
        }
        else if(rear == -1 && front == -1){
            rear = front = 0;
            arr[front] = value;
        }
        else if(rear == n-1 && front != 0){
            
            arr[rear] = value;
        }
        else{
            rear++;
            arr[rear] = value;
        }
    }

    void popback(){
        if(front == -1 && rear == -1){
            cout<<"underflow"<<endl;
        }
        else if(rear == front){
            arr[front] = -1;
            rear = front = -1;
        }
        else if(rear == 0 && front != n-1){
            arr[rear] = -1;
            rear = n-1;
        }
        else{
            arr[rear] = -1;
            rear--;
        }
    }

    int getsize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else if(rear >= front) return rear - front + 1;
        else return n - front + rear + 1;
    }

    bool isempty(){
        if(rear == -1 && front == -1) return true;
        return false;
    }

    void print(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    ~CircularDeque(){
        delete []arr;
    }

};


int main(){
    CircularDeque q(7);

    q.pushback(10);
    q.pushback(20);
    q.pushback(30);
    q.pushback(40);
    q.print();
    q.pushfront(50);
    q.pushfront(60);
    q.print();
    q.pushback(70);
    q.print();
    cout<<q.getsize()<<endl;
    // q.pushfront(70);
    q.popback();
    q.print();
    q.popfront();
    q.print();
    cout<<q.getsize()<<endl;
    q.pushfront(15);
    q.popfront();
    q.popfront();
    q.popback();
    q.print();
    cout<<q.getsize()<<endl;
}