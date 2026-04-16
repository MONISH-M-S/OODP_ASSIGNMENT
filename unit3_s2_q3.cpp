#include <iostream>
using namespace std;

class Engine {
public:
    void startEngine() {
        cout << "Engine Started" << endl;
    }
};

class GPS {
public:
    void startNavigation() {
        cout << "Navigation Started" << endl;
    }
};

class SmartCar : public Engine, public GPS {
public:
    void ready() {
        cout << "Smart Car Ready for Driving" << endl;
    }
};

int main() {
    SmartCar s;
    s.startEngine();
    s.startNavigation();
    s.ready();

    return 0;
}