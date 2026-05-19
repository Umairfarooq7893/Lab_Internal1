/*
25. Implement a try-catch block to handle division by zero.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {

        if (b == 0) {
            // Throwing an exception message
            throw "Division by zero is not allowed!";
        }

        float result = (float)a / b;
        cout << "Result = " << result << endl;
    }

    // Catch block to handle the exception
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}