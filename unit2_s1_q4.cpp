#include <iostream>
using namespace std;

class Account {
private:
    float balance;

public:
    Account(float b = 0) {
        balance = b;
    }
    Account operator+(Account a) {
        Account temp;
        temp.balance = balance + a.balance;
        return temp;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc1(2000), acc2(3000);
    Account total;

    total = acc1 + acc2;

    cout << "Combined Account Balance:\n";
    total.display();

    return 0;
}