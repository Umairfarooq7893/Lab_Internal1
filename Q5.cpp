/*
12.	Implement multi-level inheritance with classes Person (base),
Student (derived), and GraduateStudent (derived from Student).
*/
#include <iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
};
class Student : public Person{
public:
    int rollNumber;
};
class GraduateStudent : public Student{
public:
    string specialization;
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Specialization: " << specialization << endl;
    }
};
int main(){
    GraduateStudent g;
    g.name = "Umair";
    g.age = 21;
    g.rollNumber = 101;
    g.specialization = "Artificial Intelligence";
    
    g.display();

    return 0;
}