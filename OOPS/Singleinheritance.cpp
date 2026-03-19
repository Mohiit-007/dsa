#include<iostream>
using namespace std;

// A derived class inherits from one base class.

class Employee{
    protected:
    string name;
    int salary;
    int rank;

    public:
    Employee(string _name,int _salary,int _rank){
        cout<<"employee cost called"<<endl;
        this->name = _name;
        this->salary = _salary;
        this->rank = _rank;
    }

    void display(){
        cout<<"name of employee "<<name<<" salary "<<salary<<" rank "<<rank<<endl;
    }

    ~Employee(){
        cout<<"dest is called"<<endl;
    }

};

class HRmanager : public Employee{
    protected:
    string post;
    int experience;

    public:
    HRmanager(string name,int salary,int rank,string post,int experience) : Employee(name,salary,rank){
        cout<<"HRmanager cost called"<<endl;
        // above is wrong condition base const is always called 
        // this->name = name;
        // this->salary = salary;
        // this->rank = rank;
        this->post = post;
        this->experience = experience;
    }

    void print(){
        display();
        cout<<"post of manager "<<post<<" experience of manager "<<experience<<endl;
    }

};

int main(){

    HRmanager A("mohit",1200000,2,"high",3);
    A.print();

}