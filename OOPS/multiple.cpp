#include<iostream>
using namespace std;

// A derived class inherits from more than one base class.

class A{
    protected:
    string power1;

    public:
    A(string power1){
        this->power1 = power1;
    }

    void display1(){
        cout<<"A has "<<power1<<endl;
    }
};

class B{
    protected:
    string power2;

    public:
    B(string power2){
        this->power2 = power2;
    }

    void display2(){
        cout<<"B has "<<power2<<endl;
    }
};

class C : public A , public B{
    protected:
    string power3;

    public:
    C(string power1,string power2,string power3) : A(power1) , B(power2){
        this->power3 = power3;
    }
    
    void print(){
        display1();
        display2();
        cout<<"C has power of "<<power1<<","<<power2<<" and "<<power3<<endl;
    }

};


int main(){
    C x("X","Y","Z");
    x.print();

}