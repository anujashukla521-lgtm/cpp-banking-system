#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    Account acc;
    acc.loadData();

    int a, p;
    cout << "Enter account number: ";
    cin >> a;
    cout << "Enter PIN: ";
    cin >> p;

    if (acc.login(a, p))
    {
        cout << "Login successful!" << endl;
        int choice;
        double amt;

        do
        {
            cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter amount: ";
                cin >> amt;
                acc.deposit(amt);
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amt;
                acc.withdraw(amt);
                break;

            case 3:
                cout << "Balance = " << acc.getBalance() << endl;
                break;

            case 4:
                cout << "Thank you!!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
            }

        } while (choice != 4);
    }
    else
    {
        cout << "Wrong account number or PIN!" << endl;
    }

    return 0;
}