#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1 = 9, x2 = -10, y1 = 85, y2 = 41;
    double subx = 0, suby = 0, px = 0, py = 0, add = 0, dis = 0;

    subx = x2 - x1;
    suby = y2 - y1;
    px = pow(subx, 2);
    py = pow(suby, 2);
    add = px + py;
    dis = sqrt(add);

    cout << endl;
    cout << "The distance is equal: " << dis << endl;

    return 0;
}
