#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please Enter number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The Given number is an even number\n";
    } else if (num % 2 == 1) {
        cout << "The Given number is an odd number\n";
    } else {
        cout << "Invalid Input\n";
    }

    return 0;
}
