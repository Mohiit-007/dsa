#include<iostream>
using namespace std;

class stack{
    public:

    int *arr;
    int length;
    int top;

    stack(int capacity){
        arr = new int[capacity];
        length = capacity;
        top = -1;
    }

    void push(int value){
       if(top == length-1){
        cout<<"stack overflow"<<endl;
       }
       else{
        top++;
        arr[top] = value;
       }
    }

    void pop(){
       if(top == -1){
        cout<<"stack underflow"<<endl;
       }
       else{
        arr[top] = 0;
        top--;
       }
    }

    int size(){
        return top+1;
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    int gettop(){
        if(top == -1){
            return -1;
        }
        return arr[top];
    }

    void print(){
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.gettop()<<endl;
    cout<<s.size()<<endl;
    s.print();
    s.pop();
    s.pop();
    s.print();
    if(s.isempty()) cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;
    cout<<s.gettop()<<endl;
    cout<<s.size()<<endl;
    s.print();

}