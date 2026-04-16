#include <iostream>
using namespace std;

class Account {
public:
    Account() {
        cout << "Account Created\n";
    }

    ~Account() {
        cout << "Account closed successfully\n";
    }
};

int main() {
    Account acc1;
    {
        Account acc2;
    } // acc2 destroyed here

    return 0;
}