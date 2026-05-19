/*
Use protected inheritance where the base class attributes 
are inherited as protected members.
*/

#include <iostream>
using namespace std;

class Base{
protected:
    int num;
};
class Derived : protected Base{
public:
    void setValue(int n){
        num = n;
    }
    void display(){
        cout << "Number: " << num << endl;
    }
};
int main(){
    Derived d;
    d.setValue(10);
    d.display();
    return 0;
}
