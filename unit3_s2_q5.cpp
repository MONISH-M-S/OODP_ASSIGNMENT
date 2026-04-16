#include <iostream>
using namespace std;

class ChargingSystem {
public:
    virtual void charge() = 0; // pure virtual function
};

class FastCharging : public ChargingSystem {
public:
    void charge() {
        cout << "Fast Charging Completed in 1 hour" << endl;
    }
};

class NormalCharging : public ChargingSystem {
public:
    void charge() {
        cout << "Normal Charging Completed in 5 hours" << endl;
    }
};

int main() {
    ChargingSystem *c;

    FastCharging f;
    NormalCharging n;

    c = &f;
    c->charge();

    c = &n;
    c->charge();

    return 0;
}