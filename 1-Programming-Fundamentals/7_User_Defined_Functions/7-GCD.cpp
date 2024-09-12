#include <iostream>
using namespace std;

int gcd(int num1, int num2) {
    int rem;
    while (num2 != 0) {
        rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    return num1;
}

int main() {
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "GCD of the numbers is: " << gcd(num1, num2) << endl;
    return 0;
}
