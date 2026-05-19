/*
20. Implement a BankAccount class where getBalance() is a constant function.

*/
#include <iostream>
using namespace std;

class BankAccount{
public:
    double balance;
    BankAccount(double b){
        balance = b;
    }
    // Constant function
    double getBalance() const{
        return balance;
    }
};
int main(){
    BankAccount acc(5000);   // create object
    cout << "Balance: " << acc.getBalance() << endl;  // call using object
    return 0;
}