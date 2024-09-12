#include <iostream>

using namespace std;

int main() {
    int number, counter = 0;

    cout << "Please Enter Number: ";
    cin >> number;

    // Handle the case for zero separately
    if (number == 0) {
        counter = 1;
    } else {
        while (number != 0) {
            number = number / 10;
            counter++;
        }
    }

    cout << "Total Number of digits: " << counter << endl;

    return 0;
}
