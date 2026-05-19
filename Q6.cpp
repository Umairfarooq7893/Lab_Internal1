/*
Write a program demonstrating multiple inheritance where a 
SportsStudent inherits from both Student and Athlete.
*/
#include <iostream>
using namespace std;

class Student{
public:
    int rollNumber;
};
class Athlete{
public:
    string sport;
};
class SportsStudent : public Student, public Athlete{
public:
    string name;
    void display(){

        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Sport: " << sport << endl;
    }
};
int main(){
    SportsStudent s;
    s.name = "Umair";
    s.rollNumber = 101;
    s.sport = "Cricket";
    s.display();
    return 0;
}