#include <iostream>

using namespace std;

int main() {
    int counter_positive = 0, counter_negative = 0;
    float number;
    float sum = 0;
    int counter = 0;

    cout << "Please Enter a number (0 to end): ";
    cin >> number;

    if (number == 0) {
        cout << "The Average will be undefined" << endl;
    } else {
        while (number != 0) {
            if (number > 0) {
                counter_positive++;
            } else if (number < 0) {
                counter_negative++;
            }

            sum += number;
            counter++;

            cout << "Please Enter another number (0 to end): ";
            cin >> number;
        }

        if (counter > 0) {
            float average = sum / counter;
            cout << endl;
            cout << "The Average of the given numbers is: " << average << endl;
            cout << "The number of positive numbers is: " << counter_positive << endl;
            cout << "The number of negative numbers is: " << counter_negative << endl;
        } else {
            cout << "No valid numbers entered to calculate the average." << endl;
        }
    }

    return 0;
}
