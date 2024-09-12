#include <iostream>
#include <cmath> // For the fmod function

using namespace std;

int main() {
    float a = 0, b = 0, x = 0, y = 0;

    cout << "Please Enter A: ";
    cin >> a;
    cout << "Please Enter B: ";
    cin >> b;

    if (a == 0 || b == 0) {
        cout << endl;
        cout << "You Enter One Value Zero it cause Answer Undefined";
        cout << endl;
    } else {
        x = fmod(a, b);
        cout << "The Remainder A over B is equal to: " << x;
        cout << endl;
        y = fmod(b, a);
        cout << "The Remainder B over A is equal to: " << y;
        cout << endl;
    }

    cout << endl;
    return 0;
}
