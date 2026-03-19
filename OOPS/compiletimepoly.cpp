#include<iostream>
using namespace std;

// function overloading - uses the same function with diff. number and type of arguments  
// operator overloading - uses the same operator multiple times for diff. tasks

class complex{
    public:
    int real;
    int imag;

    complex() {};

    complex(int r,int i){
        real = r;
        imag = i;
    }

    complex operator+(const complex &obj){
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    complex operator-(const complex &obj){
        complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }

    bool operator==(const complex &obj){
        return real == obj.real && imag == obj.imag;
    }

    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

};

class Add{
    public:

    int sum(int a,int b){
        cout<<"sum of int"<<endl;
        return a+b;
    }

    double sum(double a,double b){
        cout<<"sum of double"<<endl;
        return a+b;
    }

    int sum(int a,int b,int c){
        cout<<"sum of three int"<<endl;
        return a+b+c;
    }
};

int main(){
    int a = 5;
    int b = 7;
    int c = 10;

    complex B(a,b);
    B.display();
    complex C(3,2);
    C.display();
    bool x = B == C;
    cout<<x<<endl;
    complex A = B - C;
    A.display();



    // Add A;
    // cout<<A.sum(a,b)<<endl;
    // cout<<A.sum(a,b,c)<<endl;
    // cout<<A.sum(2.3,3.4)<<endl;

}