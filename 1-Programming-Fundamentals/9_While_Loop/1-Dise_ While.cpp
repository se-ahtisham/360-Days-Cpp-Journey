#include <iostream>

using namespace std;

int main() {
    int dice = 0;
    int counter = 0;

    while (dice != 4) {
        cout << "Please Enter the Number that is on the dice: ";
        cin >> dice;

        if (dice >= 0 && dice <= 6) {
            counter++;
        } else {
            cout << "Invalid input. Please enter a number between 0 and 6." << endl;
        }
    }

    cout << endl;
    cout << "You get 4 after: " << counter << " turns" << endl;
    cout << endl;

    return 0;
}
