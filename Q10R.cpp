/*
17. Demonstrate runtime polymorphism using a Shape class with getArea() as a virtual
function and Rectangle & Circle as derived classes.

*/
#include <iostream>
using namespace std;
class Shape{
public:
    virtual void getArea(){
        cout << "Calculating Area..." << endl;
    }
};
class Rectangle : public Shape{
public:
    int length, width;

    void getArea() override {
        cout << "Rectangle Area: " << length * width << endl;
    }
};
class Circle : public Shape{
public:
    float radius;

    void getArea() override{
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

int main(){
    Rectangle r;
    r.length = 5;
    r.width  = 2;
    r.getArea();   // runtime polymorphism

    Circle c;
    c.radius = 4;
    c.getArea();   // runtime polymorphism

    return 0;
}