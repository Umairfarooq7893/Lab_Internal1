/*
10.	Implement default, parameterized, and copy constructors
    in a Person class with attributes name and age.
*/
#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    // Default Constructor
    Person(){
        name = "Unknown";
        age = 0;
        cout<<"default called\n";
    }
    // Parameterized Constructor
    Person(string n, int a){
        name = n;
        age = a;
    }
    // Copy Constructor
    Person(const Person &p){
        name = p.name;
        age  = p.age;
    }
    //member function
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main(){
//Constructors are called at object creation, not like functions.
    Person p1;                 // Default constructor
    Person p2("Umair", 20);    // Parameterized constructor
    Person p3 = p2;            // Copy constructor

    p1.display();
    p2.display();
    p3.display();

    return 0;
}