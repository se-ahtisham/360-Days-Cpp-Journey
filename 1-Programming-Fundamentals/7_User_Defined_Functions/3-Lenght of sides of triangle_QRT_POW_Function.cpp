#include <iostream>
#include <cmath>
using namespace std;

float length(float side1, float side2, float side3) {
    float semi = (side1 + side2 + side3) / 2;
    return sqrt(semi * (semi - side1) * (semi - side2) * (semi - side3));
}

int main() {
    float side1, side2, side3;
    cout << "Enter side 1: ";
    cin >> side1;
    cout << "Enter side 2: ";
    cin >> side2;
    cout << "Enter side 3: ";
    cin >> side3;
    cout << "Area of the triangle is: " << length(side1, side2, side3) << endl;
    return 0;
}
