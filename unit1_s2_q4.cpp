#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    void getData() {
        cin >> roll >> name;
    }

    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student *ptr = new Student[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter roll and name:\n";
        (ptr + i)->getData();
    }

    cout << "Student Details:\n";
    for(int i = 0; i < n; i++) {
        (ptr + i)->display();
    }

    delete[] ptr;

    return 0;
}