#include<iostream>
using namespace std;


class Student{

    public:
    int *age;
    string name;
    int nos;

    private:
    string gf;
    int id;

    public:

    void setid(int id){
        this->id = id;
    }

    int getid() const{
        return this->id;
    }
 
    Student(){
        cout<<"const is called"<<endl;
    }

    Student(int age,int id,int nos,string name){
        this->name = name;
        this->age = new int(age);   
        this->id = id;
        this->nos = nos;
    }

    void printname(string name){
        this->name = name;
        cout<<"Student's name: "<<this->name<<endl;
    }

    void printage(int age){
        this->age = new int(age); 
        cout<<"Student's age: "<<*this->age<<endl;
    }

    void printgf(string gf){
        this->gf = gf;
        cout<<"Student's gf: "<<this->gf<<endl;
    }

    void subject(int nos){
        this->nos = nos;
        cout<<"Student's nos: "<<this->nos<<endl;
    }

    private:
    void gfchatting(){
        cout<<"Student's gf: "<<this->gf<<endl;
    }

};


int main(){
    Student A;
    Student B(20,001,5,"mohit");
    cout<<*B.age<<" "<<B.nos<<" "<<B.name<<endl;
    // A.printgf("menu");
    // A.printname("mohit");
    // A.printage(20);
    // A.subject(5);
    cout<<B.getid()<<endl;
    B.setid(002);       
    cout<<B.getid()<<endl;
    // A.gfchatting();


}