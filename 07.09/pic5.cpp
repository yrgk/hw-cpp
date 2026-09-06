#include <iostream>

using namespace std;


int main() {
    bool t = false;
    double x, y;

    cin >> x >> y;

    // 1q
    if ((x >= 0) and (y >= 0)) {
        if ((x + y >= 1) and ((x <= 1) and (y <= 1))) {
            t = true;
        }
    }
    // 2q
    if ((x <= 0) and (y >= 0)) {
        if (x*x + y*y <= 1) {
            t = true;
        }
    }
    // 3q
    if ((x <= 0) and (y <= 0)) {
        if ((x + y <= -1) and ((x >= -1) and (y >= -1))) {
            t = true;
        }
    }
    // 4q
    if ((x >= 0) and (y <= 0)) {
        if (x*x + y*y <= 1) {
            t = true;
        }
    }

    cout << t << endl;
}
