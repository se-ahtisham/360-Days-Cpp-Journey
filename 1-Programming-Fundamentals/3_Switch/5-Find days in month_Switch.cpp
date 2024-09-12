#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Please Enter the Month Number: ";
    cin >> month;

    switch(month) {
        case 1:
            cout << "This month has 31 days\n";
            break;
        case 2:
            cout << "This month has 28 days\n";
            break;
        case 3:
            cout << "This month has 31 days\n";
            break;
        case 4:
            cout << "This month has 30 days\n";
            break;
        case 5:
            cout << "This month has 31 days\n";
            break;
        case 6:
            cout << "This month has 30 days\n";
            break;
        case 7:
            cout << "This month has 31 days\n";
            break;
        case 8:
            cout << "This month has 31 days\n";
            break;
        case 9:
            cout << "This month has 30 days\n";
            break;
        case 10:
            cout << "This month has 31 days\n";
            break;
        case 11:
            cout << "This month has 31 days\n";
            break;
        case 12:
            cout << "This month has 31 days\n";
            break;
        default:
            cout << "Invalid Input\n";
            break;
    }

    return 0;
}
