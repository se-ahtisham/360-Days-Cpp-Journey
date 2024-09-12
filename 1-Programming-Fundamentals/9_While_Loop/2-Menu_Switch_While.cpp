#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Option 3" << endl;
        cout << "0. Exit" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You chose Option 1." << endl;
                break;
            case 2:
                cout << "You chose Option 2." << endl;
                break;
            case 3:
                cout << "You chose Option 3." << endl;
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 0 and 3." << endl;
                break;
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}
