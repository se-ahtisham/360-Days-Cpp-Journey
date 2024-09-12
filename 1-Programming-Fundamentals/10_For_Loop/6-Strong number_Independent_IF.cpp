#include <iostream>

using namespace std;

int main() {
    int number, addition = 0, multiply, new_number, rem;
    
    cout << endl;
    cout << "Please Enter Number: ";
    cin >> number;

    new_number = number;

    // Iterate through the digits using a for loop
    for (int i = 0; number > 0; number /= 10, i++) {
        rem = number % 10;
        multiply = 1;

        // Calculate factorial of each digit
        for (int i = 1; i <= rem; i++) {
            multiply *= i;
        }

        addition += multiply;
    }

    cout << endl;
    if (addition == new_number) {
        cout << "This is a strong number" << endl;
    } else {
        cout << "This is not a strong number" << endl;
    }

    return 0;
}
