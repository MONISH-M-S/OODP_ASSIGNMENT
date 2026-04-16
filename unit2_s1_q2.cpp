#include <iostream>
using namespace std;

class Account {
private:
    float balance;

public:
    Account(float b) {
        balance = b;
    }
    Account(const Account &a) {
        balance = a.balance;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc1(3000);
    Account acc2 = acc1; 

    cout << "Original Account:\n";
    acc1.display();

    cout << "Copied Account:\n";
    acc2.display();

    return 0;
}