#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    swap(num1, num2);
    cout << "After swap, number 1: " << num1 << ", number 2: " << num2 << endl;
    return 0;
}
