#include <iostream>
using namespace std;

class Test {
public:
    int x;
    static int y;

    Test() {
        x = 0;
        y++;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int Test::y = 0;

int main() {
    Test t1, t2, t3;

    t1.x = 10;
    t2.x = 20;
    t3.x = 30;

    t1.show();
    t2.show();
    t3.show();

    return 0;
}