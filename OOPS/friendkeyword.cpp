#include<iostream>
using namespace std;

class A{
    int x;

    public:
    A(int _x) : x(_x) {};

    int getx() const{
        return x;
    }
    void setx(int _x){
        x = _x;
    }
    friend class B; // using friend keyword another class also can access the datamember of that class
    friend void print(const A&a); //using friend keyword another function also can access the datamember of that class
};

class B{
    public:
    void display(const A& a){
        // cout<<a.getx()<<endl; 
        cout<<a.x<<endl;
    }
};

void print(const A&a){
    cout<<a.x<<endl;
}

int main(){
    A a(5);
    B b;
    b.display(a);

}