#include <iostream>

using namespace std;

int main() {
    int num1, num2, gcd = 1;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;

    // Find GCD using for loop with i
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    cout << "GCD: " << gcd << endl;

    return 0;
}
