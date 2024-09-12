#include <iostream>

using namespace std;

int main() {
    int start, end, multiplier, product;

    cout << "Please Enter Starting value:  ";
    cin >> start;
    cout << "Please Enter Ending Value: ";
    cin >> end;
    cout << "Please Enter Multiplier: ";
    cin >> multiplier;
    cout << endl;

    if (start <= end) {
        while (start <= end) {
            product = multiplier * start;
            cout << multiplier << " * " << start << " = " << product << endl;
            start++;
        }
    } else {
        cout << "Error! Starting Value must be less than Ending Value!" << endl;
    }

    return 0;
}
