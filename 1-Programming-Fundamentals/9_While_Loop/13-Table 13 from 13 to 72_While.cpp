#include <iostream>

using namespace std;

int main() {
    int multiplicand = 13, product = 0;

    while (multiplicand <= 72) {
        product = 13 * multiplicand;
        cout << "13 * " << multiplicand << " = " << product << endl;
        multiplicand++;
    }

    return 0;
}
