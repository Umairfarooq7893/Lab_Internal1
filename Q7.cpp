/*
14.	Demonstrate hierarchical inheritance where 
Vehicle is the base class and Car & Bike are derived classes.
*/
#include <iostream>
using namespace std;

class Vehicle{
public:
    string brand;
    int price;
};
class Car : public Vehicle{
public:
    int model;
    void displayCar(){
        cout << "Car Brand: " << brand << endl;
        cout << "Car model: " << model << endl;
    }
};

class Bike : public Vehicle{
public:
    int model;

    void set_details(string b , int p, int m){
        brand = b;
        price = p;
        model = m;
    }
    void displayBike(){
        cout << "Bike Brand: " << brand << endl;
        cout << "Bike price: " << price << endl;
        cout << "Bike model: " << model << endl;
    }
};

int main(){
    Car c;
    c.brand = "Toyota";
    c.model = 2011;
    c.displayCar();

    Bike b;
    b.set_details("Sentro",1000,2011);
    b.displayBike();
    return 0;
}