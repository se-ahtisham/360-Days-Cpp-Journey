#include <iostream>

using namespace std;

int main() {
    cout << endl;
    int counter = 1, product;

    while (counter <= 10) {
        product = 7 * counter;
        cout << "7 * " << counter << " = " << product << endl;
        counter++;
    }

    return 0;
}
