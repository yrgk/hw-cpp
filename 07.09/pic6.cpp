#include <iostream>

using namespace std;


int main() {
    bool t = false;
    double x, y;

    cin >> x >> y;

    // 1q
    if ((x >= 0) and (y >= 0)) {
        if ((x*x + (y-1)*(y-1) <= 1) and ((x <= 1) and (y <= 1))) {
            t = true;
        }
    }
    // 2q
    else if ((x <= 0) and (y >= 0)) {
        if ((x*x + (y-1)*(y-1) >= 1) and ((x >= -1) and (y <= 1))) {
            t = true;
        }
    }
    // 3 and 4 qs
    if (y <= 0) {
        if ((x >= -1) and (x <= 1) and (y >= -1)) {
            t = true;
        }
    }

    cout << t << endl;
}
