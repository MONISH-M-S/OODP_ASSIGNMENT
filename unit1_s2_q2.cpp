#include <iostream>
using namespace std;
class Student {
private:
    int roll;
    string name;
    float marks;
public:
    void getData() {
        cin >> roll >> name >> marks;
    }

    void display() {
        cout << roll << " " << name << " " << marks << endl;
    }

    float getMarks() {
        return marks;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
    float sum = 0;
     for(int i = 0; i < n; i++) {
        cout << "Enter roll, name, marks:\n";
        s[i].getData();
        sum += s[i].getMarks();
    }
    float avg = sum / n;
    cout << "Average: " << avg << endl;
    cout << "Above Average Students:\n";
    for(int i = 0; i < n; i++) {
        if(s[i].getMarks() > avg)
            s[i].display();
    }
     return 0;
}