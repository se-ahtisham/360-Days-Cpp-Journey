#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char source, char destination, char helper) {
    if (n == 0) {
        return;
    }

    TowerOfHanoi(n - 1, source, helper, destination);
    cout << "Move " << source << " to " << destination << endl;
    TowerOfHanoi(n - 1, helper, destination, source);
}

int main() {
    TowerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}
