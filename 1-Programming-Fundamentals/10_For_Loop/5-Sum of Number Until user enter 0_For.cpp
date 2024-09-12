#include <iostream>

using namespace std;

int main() {
    int number, sum = 0;

    cout << "Please Enter Number: ";
    cin >> number;
    for (int i = number; i != 0; ) {
        sum += i;
        cout << "Please Enter the number: ";
        cin >> i;
    }

    cout << endl;
    cout << "The Sum of the Numbers = " << sum << endl;

    return 0;
}
