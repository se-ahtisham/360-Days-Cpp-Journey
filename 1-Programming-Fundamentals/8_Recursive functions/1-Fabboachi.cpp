#include <iostream>
using namespace std;

// Function to calculate Fibonacci numbers recursively
int fibonacci(int number) {
    if (number == 0) {
        return 0;
    }
    if (number == 1) {
        return 1;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main() {
    cout << "Fibonacci(10) = " << fibonacci(10) << endl;
    return 0;
}
