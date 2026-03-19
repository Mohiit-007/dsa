#include<iostream>
using namespace std;

// local variable - defined inside the function and block scoped only accessible in block
// global variable - define outside the function and gloablly access anywhere in code :: used to print gloabl var.

int x = 5;

void print(){
    int x = 10;
    cout<<"local variable: "<<x<<endl;
    cout<<"global variable: "<<::x<<endl;
}

int main(){

    cout<<x<<endl;
    int x = 20;
    cout<<"local variable: "<<x<<endl;
    cout<<"global variable: "<<::x<<endl; // used to print global variable
    print();
}
