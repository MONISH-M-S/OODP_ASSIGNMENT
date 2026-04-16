#include <iostream>
using namespace std;
class Vehicle {
protected:
    string brand;
public:
    void setBrand(string b) {
        brand = b;
    }
};
class Car : public Vehicle {
protected:
    int seats;
public:
    void setSeats(int s) {
        seats = s;
    }
};
class ElectricCar : public Car {
private:
    int batteryRange;
public:
    void setBattery(int b) {
        batteryRange = b;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Seats: " << seats << endl;
        cout << "Battery Range: " << batteryRange << " km" << endl;
    }
};
int main() {
    ElectricCar e;
    e.setBrand("Tata");
    e.setSeats(5);
    e.setBattery(350);
    e.display();

    return 0;
}