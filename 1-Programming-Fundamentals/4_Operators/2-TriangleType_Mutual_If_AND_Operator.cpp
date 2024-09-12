#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    cout << "Please enter First angle: ";
    cin >> angle1;
    cout << "Please enter Second angle: ";
    cin >> angle2;
    cout << "Please enter Third angle: ";
    cin >> angle3;

    int sum_of_angles = angle1 + angle2 + angle3;

    if (sum_of_angles == 180) {
        if (angle1 == angle2 && angle2 == angle3) {
            cout << "The given triangle is Equilateral triangle\n";
        } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
            cout << "The given triangle is Isosceles triangle\n";
        } else if (angle1 != angle2 && angle2 != angle3 && angle1 != angle3) {
            cout << "The given triangle is Scalene triangle\n";
        }

        if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            cout << "The given triangle is Right triangle\n";
        } else if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
            cout << "The given triangle is Acute triangle\n";
        } else if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
            cout << "The given triangle is Obtuse triangle\n";
        }
    } else {
        cout << "The given angles do not form a triangle\n";
    }

    return 0;
}
