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
        // Using a for loop with i to control the loop
        for (int i = start; i <= end; i++) {
            product = multiplier * i;
            cout << multiplier << " * " << i << " = " << product << endl;
        }
    } else {
        cout << endl;
        cout << "Error! Starting Value must be less than Ending Value!" << endl;
    }

    return 0;
}
