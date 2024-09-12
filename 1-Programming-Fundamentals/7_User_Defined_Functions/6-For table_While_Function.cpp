#include <iostream>
using namespace std;

void printTable(int multiplier, int start, int ending) {
    while (start <= ending) {
        cout << multiplier << "*" << start << "=" << start * multiplier << endl;
        start++;
    }
}

int main() {
    int multiplier, start, ending;
    cout << "Enter multiplier: ";
    cin >> multiplier;
    cout << "Enter start value: ";
    cin >> start;
    cout << "Enter ending value: ";
    cin >> ending;
    printTable(multiplier, start, ending);
    return 0;
}
