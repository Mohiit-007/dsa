#include<iostream>
using namespace std;

// static data member  - it is globally accessed and same varibales for all instances or object like s,t,etc..
// not to use this keyword bcoz every object is created for same x or y not to diff. x or y
// static memeber function - the function can be called without creating any other object

class abc{
    public:
    static int x;
    static int y;

    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

class xyz{
    public:
    int a;
    int b;

    static void display(){
        cout<<"inside static member function"<<endl;
    }

};

int abc::x; // global access declaration for static data member
int abc::y; // global access declaration for static data member

int main(){

    abc s;
    s.x = 1;
    s.y = 2;
    s.print();
    abc t;
    t.print();
    xyz::display(); //function can be called without creating any object    
    xyz m;
    m.display();

}