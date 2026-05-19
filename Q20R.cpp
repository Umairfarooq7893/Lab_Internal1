/*
21. Create a class Logger where logMessage() 
is a static function that logs messages.
*/

#include <iostream>
using namespace std;

class Logger {
public:
    // Static function
    static void logMessage(string message) {
        cout << "Log: " << message << endl;
    }
};

int main() {
    // Calling static function using class name
    Logger obj;
    obj.logMessage("Program started");
    obj.logMessage("Data saved successfully");

    return 0;
}