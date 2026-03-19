#include<iostream>
using namespace std;

class complex
{   
    public:
    int real;
    int imag;
    public:
    complex(){
        real = imag = -1;
    }
    complex(int r,int i) : real(r) , imag(i) {};

    complex operator+(const complex&B){
        complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }
    void print(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

};

class vechile{
    protected:
    int tyres;
    int engine;

    public:
    vechile(int _tyres,int _engine) : tyres(_tyres) , engine(_engine) {};

    void engine_on(){
        cout<<"there are "<<tyres<<endl;
    }
    void engine_off(){
        cout<<"engine is "<<engine<<" CC"<<endl;
    }
};

class car : public vechile{
    protected:
    int ac;
    string name;
    public:
    car(int tyres,int engine,int ac,string name) : vechile (tyres,engine) {
        this->ac = ac;
        this->name = name;
    };

    void start(){
        cout<<name<<" is having"<<tyres<<" tyres"<<endl;
    }
};

class bike : protected car{
    protected:
    string name1;
    int sound;
    public:
    bike(int tyres,int engine,int sound,string name1,int ac,string name) : car(tyres,engine,ac,name){
        this-> name1 = name1;
        this->sound = sound;
    }
    void bikestart(){
        engine_on();
        cout<<name1<<" is having "<<tyres<<" tyres"<<" and "<<engine<<" engine "<<"and "<<name<<endl;
    }
};


int main(){
    // car c(4,500,2,"Thar");
    // c.start();
    // bike b(2,650,100,"gt650",2,"Thar");
    // b.bikestart();
    complex a(4,5);
    complex b(3,6);
    complex c = a + b;
    c.print();

}