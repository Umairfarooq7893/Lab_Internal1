/*
Implement function overloading for a Math class to 
calculate the sum of two and three numbers.
*/
#include <iostream>
using namespace std;

class Math{
public:
    int sum(int a, int b){
        return a + b;
    }

    int sum(int a, int b, int c){
        return a + b + c;
    }
};
int main(){
    Math m;
    cout << "Sum of two numbers: "   <<   m.sum(5, 10)        << endl;
    cout << "Sum of three numbers: " <<   m.sum(5, 10, 15)    << endl;

    return 0;
}