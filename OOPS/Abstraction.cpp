#include <iostream>
using namespace std;

// Hiding complexity and showing only essential features
// Abstraction is about idea hiding (implementation hiding)
// for example : sort function don't know which sort function is using like bubble,merge,quick,etc information gets 
// hides in the header files of algorithm

class Shape {   // Abstract class
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

// Circle and Rectangle hide the actual drawing logic.
// The user just calls draw() — without worrying about internal details.
int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw();  
    s2->draw();  
}
