#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        balance += amt;
    }

    void withdraw() {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance\n";
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    int choice;

    b.createAccount();

    do {
        cout << "\n1.Deposit\n2.Withdraw\n3.Balance\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: b.deposit(); break;
            case 2: b.withdraw(); break;
            case 3: b.display(); break;
            case 4: cout << "Exit\n"; break;
            default: cout << "Invalid\n";
        }
    } while(choice != 4);

    return 0;
}