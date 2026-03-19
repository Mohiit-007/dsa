#include<iostream>
using namespace std;

// Multiple derived classes inherit from the same base class.

class Vechile{
    protected:
    string name;
    int NoofTyres;
    int model;

    public:
    Vechile(string name,int NoofTyres,int model){
        this->name = name;
        this->NoofTyres = NoofTyres;
        this->model = model;
    }

    void display(){
        cout<<"Vechile name is "<<name<<" no. of tyres"<<NoofTyres<<" model"<<model<<endl;
    }
};

class Car : public Vechile{
    protected:
    int engine;
    string type;

    public:
    Car(string name,int NoofTyres,int model,int engine,string type) : Vechile(name,NoofTyres,model){
        this->engine = engine;
        this->type = type;
    }

    void print1(){
        display();
        cout<<"Vechile engine is "<<engine<<" type"<<type<<endl;
    }
};

class Bike : public Vechile{
    protected:
    int engine;
    string type;

    public:
    Bike(string name,int NoofTyres,int model,int engine,string type) : Vechile(name,NoofTyres,model){
        this->engine = engine;
        this->type = type;
    }

    void print2(){
        display();
        cout<<"Vechile engine is "<<engine<<" type"<<type<<endl;
    }
};



int main(){
    Car A("thar",4,001,300,"four-wheeler");
    Bike B("bmw",2,002,100,"tow-wheeler");
    A.print1();
    B.print2();
    
}