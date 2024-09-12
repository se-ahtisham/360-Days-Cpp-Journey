#include <iostream>

using namespace std;

int main() {
    int n, number = 0;

    cout << "Enter any number to print in words: ";
    cin >> n;

    // Reverse the digits of the number
    while (n != 0) {
        number = (number * 10) + (n % 10);
        n /= 10;
    }

    // Handle the case when the number is zero
    if (number == 0) {
        cout << "Zero";
    } else {
        // Print each digit in words
        while (number != 0) {
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
            number = number / 10;
        }
    }
    
    cout << endl;

    return 0;
}
