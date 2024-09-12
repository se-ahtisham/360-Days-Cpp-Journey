#include <iostream>
using namespace std;

int main() {
    int red;
    int green;
    int blue;

    cout << "Please enter 1 if Red color exists and 0 if not: ";
    cin >> red;
    cout << "Please enter 1 if Green color exists and 0 if not: ";
    cin >> green;
    cout << "Please enter 1 if Blue color exists and 0 if not: ";
    cin >> blue;

    if (red == 0 && green == 0 && blue == 0) {
        cout << endl << "Invalid Input, Given values are not for RGB colors" << endl;
    } else if (red == 1 && green == 1 && blue == 1) {
        cout << endl << "The color is White" << endl;
    } else if (red == 1 && green == 0 && blue == 0) {
        cout << endl << "The color is Red" << endl;
    } else if (red == 0 && green == 1 && blue == 0) {
        cout << endl << "The color is Green" << endl;
    } else if (red == 0 && green == 0 && blue == 1) {
        cout << endl << "The color is Blue" << endl;
    } else if (red == 1 && green == 1 && blue == 0) {
        cout << endl << "The color is Yellow" << endl;
    } else if (red == 1 && green == 0 && blue == 1) {
        cout << endl << "The color is Magenta" << endl;
    } else if (red == 0 && green == 1 && blue == 1) {
        cout << endl << "The color is Cyan" << endl;
    } else {
        cout << endl << "Invalid Input" << endl;
    }

    return 0;
}
