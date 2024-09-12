#include <iostream>

using namespace std;

int main() {
    int number = 85;
    int guess;
    int tries = 0;

    cout << "Guess the Number: ";
    cin >> guess;

    while (guess != number) {
        tries++;
        
        if (guess > number) {
            cout << "Guess number is Greater than Secret Number!" << endl;
            cout << "Try again\n" << endl;
        } else if (guess < number) {
            cout << "Guess number is Less than Secret Number!" << endl;
            cout << "Try again\n" << endl;
        }
        
        cout << "Guess the Number: ";
        cin >> guess;
    }

    tries++; // Increment tries for the correct guess
    cout << endl;
    cout << "Correct Guess!\n";
    cout << "Tries = " << tries << endl;

    return 0;
}
