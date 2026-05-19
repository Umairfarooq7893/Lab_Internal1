#include <iostream>
using namespace std;
class Base{
protected:
    int num;   // protected member
};
class Derived : public Base{
public:
    void setValue(int val){
        num = val;   // accessible in derived class only
    }
    void display(){
        cout << "Value of num: " << num << endl;
    }
};
int main(){
    Derived d;
    d.setValue(20);
    d.display();

    // d.num = 5; 

    return 0;
}