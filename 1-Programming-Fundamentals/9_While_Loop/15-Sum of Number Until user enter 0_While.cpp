#include <iostream>

using namespace std;

int main() {
    int number, sum = 0;

    cout << "Please Enter Number: ";
    cin >> number;

    while (number != 0) {
        sum += number;
        cout << "Please Enter the number: ";
        cin >> number;
    }

    cout << endl;
    cout << "The Sum of the Numbers = " << sum << endl;

    return 0;
}
