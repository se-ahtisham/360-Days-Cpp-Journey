#include <iostream>

using namespace std;

int main() {
    int exponent;
    float base, answer = 1;

    cout << "Please Enter base: ";
    cin >> base;
    cout << "Please Enter Exponent: ";
    cin >> exponent;
    cout << endl;

    // Calculate the power using a while loop
    while (exponent != 0) {
        answer *= base;
        --exponent;
    }

    cout << base << "^" << exponent << " = " << answer << endl;

    return 0;
}
