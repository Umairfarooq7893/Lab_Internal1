/*
Create a base class Employee with name and salary, 
and a derived class Manager that adds a department.
*/
#include <iostream>
using namespace std;
class Employee{
public:
    string name;
    float salary;
};
class Manager : public Employee{
public:
    string department;

    void displayManager(){
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};
int main()
{
    Manager m;
    m.name ="Umair";
    m.salary = 50000;
    m.department = "IT";

    m.displayManager();
    return 0;
}