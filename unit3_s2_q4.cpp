#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle Starting" << endl;
    }
};

class PetrolCar : public Vehicle {
public:
    void start() {
        cout << "Petrol Car Starts with Ignition" << endl;
    }
};

class ElectricCar : public Vehicle {
public:
    void start() {
        cout << "Electric Car Starts with Battery Power" << endl;
    }
};

int main() {
    Vehicle *v;

    PetrolCar p;
    ElectricCar e;

    v = &p;
    v->start();

    v = &e;
    v->start();

    return 0;
}