#include<iostream>
using namespace std;

// const keyword - when we use a variable with const keyword then we can't reintialize the variable
// mutable keyword - It is used for debugging and use of it is not a good praticse

class abc{
    mutable int x;
    int *y;
    mutable int z;

    public:
    // old method ot intialize
    // abc(int _x,int _y,int _z){
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }

    // new method to initialize
    abc(int _x,int _y,int _z) : x(_x),y(new int(_y)),z(_z) {
        cout<<"intilization done"<<endl;
    }

    int getx() const{
        return x;
    }
    void setx(int x1) const{
        x = x1;
    }
    int gety() const{
        return *y;
    }
    void sety(int val){
        *y = val;
    }
    int getz() const{
        return z;
    }
    void setz(int z1) const{
        z = z1;
    }

    void print(){
        cout<<getx()<<" "<<gety()<<" "<<getz()<<endl;
    }
};

    void printABC(const abc &a){
        cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz()<<endl;
    }


int main(){

    abc s(1,2,3);
    printABC(s);
    cout<<s.getx()<<endl;
    cout<<s.gety()<<endl;
    cout<<s.getz()<<endl;
    s.print();

    int a = 5;
    printf("%d",a);


    // const int a = 5;
    // cout<<a<<endl;
    // // a = 10; return error can't reintialize it

    // //const - datavalue , non-const - pointer
    // const int *b = new int(10);
    // int c = 15;
    // b = &c;
    // cout<<*b<<endl;

    // //const - pointer , non-const - datavalue
    // int *const d  = new int(7);
    // int e = 15;
    // // d = &e; return error bcoz pointer is constant here can't change it
    // *d = 10;
    // cout<<*d<<endl;

    // // const - pointer , const - datavalue
    // const int *const f = new int(12);
    // // *f = 10; return error bcoz datavalue is constant here can't change it
    // // f = &e; return error bcoz pointer is constant here can't change it

}