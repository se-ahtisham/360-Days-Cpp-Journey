#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please Enter number of day: ";
    cin >> number;

    switch(number) {
        case 1:
            cout << "This is Monday\n";
            break;
        case 2:
            cout << "This is Tuesday\n";
            break;
        case 3:
            cout << "This is Wednesday\n";
            break;
        case 4:
            cout << "This is Thursday\n";
            break;
        case 5:
            cout << "This is Friday\n";
            break;
        case 6:
            cout << "This is Saturday\n";
            break;
        case 7:
            cout << "This is Sunday\n";
            break;
        default:
            cout << "Invalid Input of number of day!\n";
            break;
    }

    return 0;
}
