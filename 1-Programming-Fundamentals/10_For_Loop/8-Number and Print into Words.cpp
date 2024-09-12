#include <iostream>

using namespace std;

int main() {
    int n, number = 0;
    cout << "Enter any number to print in words: ";
    cin >> n;

    // Reverse the digits
    for (int i = 0; n != 0; i++) {
        number = (number * 10) + (n % 10);
        n /= 10;
    }

    // Print the digits in words
    for (int i = 0; number != 0; number /= 10) {
        switch (number % 10) {
            case 0: cout << "Zero "; break;
            case 1: cout << "One "; break;
            case 2: cout << "Two "; break;
            case 3: cout << "Three "; break;
            case 4: cout << "Four "; break;
            case 5: cout << "Five "; break;
            case 6: cout << "Six "; break;
            case 7: cout << "Seven "; break;
            case 8: cout << "Eight "; break;
            case 9: cout << "Nine "; break;
        }
    }

    return 0;
}
