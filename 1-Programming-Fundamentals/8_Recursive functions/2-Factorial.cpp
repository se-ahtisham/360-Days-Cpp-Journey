#include <iostream>
using namespace std;

// Function to calculate factorial recursively
int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return number * factorial(number - 1);
}

int main() {
    cout << "Factorial of 4 is: " << factorial(4) << endl;
    return 0;
}
