#include <iostream>

using namespace std;

int main() {
    int number, remainder;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;

    cout << "Please Enter Number: ";
    cin >> number;
    cout << endl;

    while (number != 0) {
        remainder = number % 10;
        number = number / 10;

        switch (remainder) {
            case 0: a++; break;
            case 1: b++; break;
            case 2: c++; break;
            case 3: d++; break;
            case 4: e++; break;
            case 5: f++; break;
            case 6: g++; break;
            case 7: h++; break;
            case 8: i++; break;
            case 9: j++; break;
        }
    }

    cout << "The Frequency of 0 = " << a << endl;
    cout << "The Frequency of 1 = " << b << endl;
    cout << "The Frequency of 2 = " << c << endl;
    cout << "The Frequency of 3 = " << d << endl;
    cout << "The Frequency of 4 = " << e << endl;
    cout << "The Frequency of 5 = " << f << endl;
    cout << "The Frequency of 6 = " << g << endl;
    cout << "The Frequency of 7 = " << h << endl;
    cout << "The Frequency of 8 = " << i << endl;
    cout << "The Frequency of 9 = " << j << endl;

    return 0;
}
