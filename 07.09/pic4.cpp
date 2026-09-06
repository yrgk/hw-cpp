#include <iostream>

using namespace std;


int main() {
    bool t = false;
    double x, y;

    cin >> x >> y;

    if ((-1 <= x <= 1) and (-1 <= y <= 1) and (abs(x) + abs(y) >= 1)) {
        t = true;
    }

    cout << t << endl;
}
