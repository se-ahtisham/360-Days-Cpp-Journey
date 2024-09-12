#include <iostream>

using namespace std;

int main() {
    float number, sum = 0, average = 0;
    int counter = 0;

    cout << "Please Enter the Number: ";
    cin >> number;

    if (number == 0) {
        cout << endl;
        cout << "The sum will equal to Zero and Average will be undefined.\n";
    } else {
        while (number != 0) {
            sum += number;
            counter++;
            cout << "Please enter the number: ";
            cin >> number;
        }

        if (counter > 0) {
            average = sum / counter;
        }

        cout << endl;
        cout << "The sum of the numbers is = " << sum << endl;
        cout << "The average of the given numbers is = " << average << endl;
    }

    return 0;
}
