#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1 = 9, x2 = -10, y1 = 85, y2 = 41;
    double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "The distance is equal: " << dis << endl;
    return 0;
}
