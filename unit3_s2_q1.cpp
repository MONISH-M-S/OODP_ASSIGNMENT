#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int speed;

public:
    void setVehicle(string b, int s) {
        brand = b;
        speed = s;
    }
};

class Car : public Vehicle {
private:
    int seats;

public:
    void setCar(int s) {
        seats = s;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Seating Capacity: " << seats << endl;
    }
};

int main() {
    Car c;
    c.setVehicle("Hyundai", 120);
    c.setCar(5);
    c.display();

    return 0;
}