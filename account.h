#include <iostream>
using namespace std;

class Account
{
    int accNo;
    int pin;
    double balance;

public:
    Account()
    {
        accNo = 1000;
        pin = 123;
        balance = 2892.50;
    }
    bool login(int, int);
    void deposit(double);
    void withdraw(double);
    double getBalance();
    void saveData();
    void loadData();
};