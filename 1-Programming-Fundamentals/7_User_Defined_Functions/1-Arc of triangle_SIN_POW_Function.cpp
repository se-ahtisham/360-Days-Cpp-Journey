#include <iostream>
#include <cmath>
using namespace std;

float triangle(float length1, float length2, float angle) {
    return (length1 * length2 * sin(angle)) / 2;
}

int main() {
    float length1, length2, angle;
    cout << "Enter length 1: ";
    cin >> length1;
    cout << "Enter length 2: ";
    cin >> length2;
    cout << "Enter angle in radians: ";
    cin >> angle;
    cout << "Area of the arc of the triangle is: " << triangle(length1, length2, angle) << endl;
    return 0;
}
