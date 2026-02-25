#include "account.h"
#include <iostream>
#include <fstream>
using namespace std;

bool Account::login(int a, int p)
{
    if (accNo == a && pin == p)
    {
        return true;
    }
    return false;
}
void Account ::deposit(double amount)
{
    balance += amount;
    cout << "Total amount " << balance;
    saveData();
}
void Account ::withdraw(double amount)
{
    if (amount <= balance)
    {
        balance -= amount;
        cout << "Left balance " << balance;
    }
    else
    {
        cout << "Insufficient balance" << endl;
    }
    saveData();
}
double Account ::getBalance()
{
    return balance;
}
void Account::saveData()
{
    ofstream out("data.txt");
    if (!out)
    {
        cout << "Error opening file for saving!" << endl;
        return;
    }
    out << accNo << endl
        << pin << endl
        << balance;
    out.close();
}

void Account::loadData()
{
    ifstream in("data.txt");
    if (!in)
    {
        cout << "No saved data found. Using default values." << endl;
        return;
    }
    in >> accNo >> pin >> balance;
    in.close();
}