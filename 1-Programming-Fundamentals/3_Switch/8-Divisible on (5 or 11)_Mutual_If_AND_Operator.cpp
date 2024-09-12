#include <iostream>
using namespace std;

int main() {
    int numbers;
    cout << "Please Enter number: ";
    cin >> numbers;

    if (numbers % 5 == 0) {
        cout << "The Given number is perfectly Divisible by 5\n";
    } else if (numbers % 11 == 0) {
        cout << "The Given number is perfectly Divisible by 11\n";
    } else {
        cout << "Not Divisible by 5 or 11\n";
    }

    return 0;
}
