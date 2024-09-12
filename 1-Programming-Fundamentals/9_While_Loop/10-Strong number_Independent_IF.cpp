#include <iostream>

using namespace std;

int main() {
    int number, addition = 0, multiply, new_number, rem;
    int counter;

    cout << "Please Enter Number: ";
    cin >> number;
    new_number = number;

    while (number > 0) {
        rem = number % 10;
        multiply = 1;
        counter = 1;

        // Calculate factorial of the digit 'rem'
        while (counter <= rem) {
            multiply *= counter;
            counter++;
        }

        // Add the factorial to the sum
        addition += multiply;

        // Remove the last digit
        number /= 10;
    }

    cout << endl;

    // Check if the sum of factorials equals the original number
    if (addition == new_number) {
        cout << "This is a strong number" << endl;
    } else {
        cout << "This is not a strong number" << endl;
    }

    return 0;
}
