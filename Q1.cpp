/*
Define a Student class with private attributes: name, rollNumber, and marks.
Implement methods to set student details and display them.
*/
#include <iostream>
using namespace std;
class Student{
private:
    string name;
    int rollNumber;
    float marks;
public:
    void setDetails(string n, int r, float m){
        name = n;
        rollNumber = r;
        marks = m;
    }
    void displayDetails(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main(){
    Student s;

    s.setDetails("Umair", 101, 85.5);
    s.displayDetails();

    return 0;
}