#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    // Case 1: vertical side
    if (x1 == x2 && y1 != y2) {
        int side = abs(y2 - y1);
        cout << x1 + side << " " << y1 << " "
             << x2 + side << " " << y2;
    }
    // Case 2: horizontal side
    else if (y1 == y2 && x1 != x2) {
        int side = abs(x2 - x1);
        cout << x1 << " " << y1 + side << " "
             << x2 << " " << y2 + side;
    }
    else if (abs(x2 - x1) == abs(y2 - y1)) {
        cout << x1 << " " << y2 << " "
             << x2 << " " << y1;
    }
    else {
        cout << -1;
    }
    return 0;
}
