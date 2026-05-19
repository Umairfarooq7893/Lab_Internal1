/*
21.	Create a template class Calculator that performs 
addition and subtraction of any data type.
*/
#include <iostream>
using namespace std;

template <class T>

class Calculator{
public:
    T add(T a, T b){
        return a + b;
    }

    T subtract(T a, T b){
        return a - b;
    }
};

int main(){
    Calculator<int> c1;
    cout << "Addition (int): "    << c1.add(10, 5) << endl;
    cout << "Subtraction (int): " << c1.subtract(10, 5) << endl;

    Calculator<float> c2;
    cout << "Addition (float): "    << c2.add(5.5, 2.2) << endl;
    cout << "Subtraction (float): " << c2.subtract(5.5, 2.2) << endl;

    return 0;
}