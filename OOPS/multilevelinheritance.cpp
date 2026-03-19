#include<iostream>
using namespace std;

// A class is derived from another derived class, forming a chain.

class Base{
    protected:
    string parent;

    public:
    Base(string parent){
        this->parent = parent;
    }

    void display(){
        cout<<"parent is "<<parent<<endl;
    }
};

class Derived : public Base{
    protected:
    string child;

    public:
    Derived(string parent , string child) : Base(parent){
        this->child = child;
    }

    void display2(){
        display();
        cout<<"child is "<<child<<endl;
    }
};

class Subderived : public Derived{
    protected:
    string grandchild;

    public:
    Subderived(string parent , string child , string grandchild) : Derived(parent,child){
        this->grandchild = grandchild;
    }

    void print(){
        display2();
        cout<<"grandchild is "<<grandchild<<endl;
    }
};

int main(){
    Subderived A("a","b","c");
    A.print();

}