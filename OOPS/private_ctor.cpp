#include<iostream>
using namespace std;

class abc{
    int x;

    abc(int _x): x(_x) {};

    public:
    void print() const{
        cout<<x<<endl;
    }

    friend class xyz;
};

class xyz{
    int count;

    public:
    abc display(int _a){
        count++;
        return abc(_a);
    }

};

int main(){
    xyz a;
    abc x = a.display(5);
    x.print();

}