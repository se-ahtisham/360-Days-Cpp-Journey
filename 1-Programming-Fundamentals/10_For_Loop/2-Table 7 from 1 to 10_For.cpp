#include <iostream>

using namespace std;

int main() {
    cout << endl;
    
    // For loop to print the multiplication table of 7
    for (int counter = 1, product; counter <= 10; counter++) {
        product = 7 * counter;
        cout << "7 * " << counter << " = " << product << endl;
    }

    return 0;
}
