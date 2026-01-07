#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int length;
    int top1;
    int top2;

    stack(int capacity){
        arr = new int[capacity];
        length = capacity;
        top1 = -1;
        top2 = length;
    }

    void push1(int value){
        if(abs(top1 - top2) == 1){
            cout<<"stack overflow"<<endl;
        }
        top1++;
        arr[top1] = value;
    }

    void push2(int value){
        if(abs(top1 - top2) == 1){
            cout<<"stack overflow"<<endl;
        }
        top2--;
        arr[top2] = value;
    }

    void pop1(){
        if(top1 == -1){
            cout<<"stack underflow"<<endl;
        }
        arr[top1] = 0;
        top1--;
    }

    void pop2(){
        if(top2 == -1){
            cout<<"stack underflow"<<endl;
        }
        arr[top2] = 0;
        top2++;
    }

    void print(){
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};

int main(){
    stack s(6);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push2(10);
    s.push2(20);
    s.push2(30);
    s.pop1();
    s.pop2();
    s.print();

}