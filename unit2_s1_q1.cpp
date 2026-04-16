#include <iostream>
using namespace std;

class Account {
private:
    float balance;

public:
    Account() {
        balance = 0;
    }
    Account(float b) {
        balance = b;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc1;        // no initial balance
    Account acc2(5000);  // with initial balance

    cout << "Account 1:\n";
    acc1.display();

    cout << "Account 2:\n";
    acc2.display();

    return 0;
}