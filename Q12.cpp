/*
Implement an abstract class Device with powerOn() and powerOff() 
in derived classes Laptop and Mobile.
*/
#include <iostream>
using namespace std;

class Device{
public:
    virtual void powerOn() = 0;
    virtual void powerOff() = 0;
};

class Laptop : public Device{
public:
    void powerOn() override {
        cout << "Laptop is powered ON" << endl;
    }

    void powerOff() override {
        cout << "Laptop is powered OFF" << endl;
    }
};

class Mobile : public Device{
public:
    void powerOn() override{
        cout << "Mobile is powered ON" << endl;
    }

    void powerOff() override{
        cout << "Mobile is powered OFF" << endl;
    }
};

int main()
{
    Laptop l;
    Mobile m;

    l.powerOn();
    l.powerOff();

    m.powerOn();
    m.powerOff();

    return 0;
}