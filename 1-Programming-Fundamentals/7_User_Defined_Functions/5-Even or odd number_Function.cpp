#include <iostream>
using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << (isEven(num) ? "Number is even" : "Number is odd") << endl;
    return 0;
}
