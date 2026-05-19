/*
26. Implement a class Student with private attributes and public functions.
*/
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Setter function
    void setData(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    // Display function
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.setData(101, "Umair", 89.5);
    s1.display();

    return 0;
}