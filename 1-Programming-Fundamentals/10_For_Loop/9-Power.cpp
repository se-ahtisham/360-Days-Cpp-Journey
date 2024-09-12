#include <iostream>

using namespace std;

int main() {
    int exponent;
    float base, answer = 1;

    cout << "Please Enter base:  ";
    cin >> base;
    cout << "Please Enter Exponent:  ";
    cin >> exponent;

    cout << base << "^" << exponent << " = ";

    // Use for loop with i
    for (int i = 0; i < exponent; i++) {
        answer *= base;
    }

    cout << answer << endl;

    return 0;
}
