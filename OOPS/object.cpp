#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    int id;
    int nos;
    string name;

    // default constructor
    Student(){
        cout<<"defalut constructor called"<<endl;
    }

    // parameterized constructor
    Student(int age,int id,int nos,string name){
        this->age = age;   // this keyword is use to access to global variable
        this->id = id;
        this->nos = nos;
        this->name = name;
    }

    //copy constructor
    Student(const Student &srcobj){
        this->age = srcobj.age;
        this->id = srcobj.id;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    void study(){
        cout<<this->name<<" "<<"studying"<<endl;
    }
    void bunk(){
        cout<<this->name<<" "<<"bunk"<<endl;
    }
    void sleep(){
        cout<<this->name<<" "<<"bunk"<<endl;
    }

    // default destructor
    ~Student(){
        cout<<"default destructor called"<<endl;
    }

};


int main(){
    // default approach
    // Student A;
    // A.age = 20;
    // A.id = 0001;
    // A.nos = 5;
    // A.name = "mohit";
    
    // cout<<A.age<<" "<<A.id<<" "<<A.name<<endl;

    // instance of parameterized constructor
    // student is class and A is an object
    Student A(20,0001,6,"mohit");
    cout<<A.age<<" "<<A.id<<" "<<A.name<<endl;
    A.sleep();

    Student B(24,0002,5,"rohit");
    cout<<B.age<<" "<<B.id<<" "<<B.name<<endl;
    B.bunk();

    // copy constructor
    // Student C = A;
    Student C(A);
    cout<<C.age<<" "<<C.id<<" "<<C.name<<endl;
    C.study();

    // heap memory
    Student *D = new Student(1,001,5,"purohit"); // instance of object in class in heap memory
    cout<<D->age<<" "<<D->id<<" "<<D->name<<endl;
    delete D; //  to call the default destructor delete D from heap memory or free the memory



    return 0;
}
