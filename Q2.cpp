/*
9.Write a BankAccount class with attributes:
 accountNumber, holderName, and balance.
 Implement deposit, withdrawal, and balance check functions.
*/

#include<iostream>
using namespace std;
class BankAccount{
public:
    int accountNumber;
    string holderName;
    float balance;

    void deposit(float Amount){
        balance = balance + Amount;
    }
    void withdrawl(float Amount){
        if(Amount < balance){
            balance = balance - Amount;
        }else{
            cout<<"Insufficient Balance"<< endl;
        }
    }
    void checkBalance(){
        cout<<"Account Number"<< accountNumber<<endl;
        cout<<"Account Holder Name :"<< holderName <<endl;
        cout<< "Balance : "<< balance<<  endl;
    }
};
int main(){ 
    BankAccount b;
    // Initialize values
    b.accountNumber = 101;
    b.holderName = "Umair";
    b.balance = 0;

    b.deposit(1000);
    b.withdrawl(2000);
    b.checkBalance();
}