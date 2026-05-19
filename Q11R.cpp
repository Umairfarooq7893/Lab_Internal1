/*
18.	Implement multiple interfaces where Smartphone 
inherits ElectronicDevice and Rechargeable.
*/
#include <iostream>
using namespace std;

class ElectronicDevice{
public:
    virtual void powerOn() = 0;   // interface method
};

class Rechargeable{
public:
    virtual void charge() = 0;    // interface method
};

class Smartphone : public ElectronicDevice, public Rechargeable{
public:
    void powerOn() override{
        cout << "Smartphone is powering on." << endl;
    }

    void charge() override{
        cout << "Smartphone is charging." << endl;
    }
};

int main(){
    Smartphone s;
    s.powerOn();
    s.charge();
    
    return 0;
}