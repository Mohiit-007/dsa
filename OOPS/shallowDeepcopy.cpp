#include<iostream>
using namespace std;


class obj{
    public:
    int x;
    int *y;

    // intialization list
    obj(int _x,int _y) : x(_x),y(new int(_y)) {}

    // default shallow copy
    // obj(const obj&a){
    //     x = a.x;
    //     y = a.y;  x and y point out to same address
    // }

    // deep copy
    obj(const obj&a){ 
        x = a.x;
        y = new int(*a.y); // assign new address to y such that x and y point out to different address
    }

    const void print(){
        cout<<x<<" "<<&y<<" "<<*y<<endl;
    }

};


int main(){
    obj a(2,3); 
    a.print();
    obj b = a; // default shallow copy
    b.print();
    *b.y = 20;
    b.print();
    a.print(); // due to shallow copy a will also get changed

}