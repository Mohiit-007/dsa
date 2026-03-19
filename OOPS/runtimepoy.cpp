#include<iostream>
using namespace std;

// run time polymorphism - use virtual keyword to change at run-time not at compile time
// final keyword - use final keyword in base class such that derived class can't inherit the properties of base class


class shape {
    public:

    virtual void display(){
        cout<<"shape drawing..."<<endl;
    }
};

class circle : public shape{
    public:

    void display(){
        cout<<"circle drawing..."<<endl;
    }
};

class rectangle : public shape{
    public:

    void display() override { // function overiding
        cout<<"rectangle drawing..."<<endl;
    }
};

class triangle : public shape{
    public:

    void display(){
        cout<<"triangle drawing..."<<endl;
    }
};

void shapedrawing(shape *s){
    s->display();
}


int main(){
    // triangle t;
    // shapedrawing(&t);

    shape *s = new shape();
    s->display();
    shape*t = new triangle(); // exmpale of abstraction - user don't know about what inside in triangle class bcoz it prints from shape class
    t->display();
    circle *c = new circle();
    c->display();
    rectangle *r = new rectangle();
    r->display();


}
