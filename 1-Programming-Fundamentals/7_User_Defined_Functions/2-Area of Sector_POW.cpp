#include <iostream>
#include <cmath>
using namespace std;

float area(float radius, float angle) {
    return (pow(radius, 2) * angle) / 2;
}

int main() {
    float radius, angle;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter angle in radians: ";
    cin >> angle;
    cout << "Area of the sector is: " << area(radius, angle) << endl;
    return 0;
}
