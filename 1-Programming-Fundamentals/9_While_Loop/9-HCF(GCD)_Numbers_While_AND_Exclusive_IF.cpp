#include <iostream>

using namespace std;

int main() {
    int num1, num2, gcd = 1, i = 1;

    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;

    while (i <= num1 && i <= num2) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
        i++;
    }

    cout << "GCD: " << gcd << endl;

    return 0;
}
