#include <iostream>
using namespace std;

class Account {
private:
    float balance;

public:
    Account() {
        balance = 0;
    }
    void deposit(float amt) {
        balance += amt;
    }
    void deposit(float amt, float bonus) {
        balance += (amt + bonus);
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc;

    acc.deposit(1000);
    acc.deposit(500, 50);

    acc.display();

    return 0;
}