#include <iostream>
#include <algorithm>  // For std::min and std::max

using namespace std;

int main() {
    int a, b, minimum, maximum;

    cout << "Please Enter First Integer number: ";
    cin >> a;
    cout << "Please Enter Second Integer number: ";
    cin >> b;

    minimum = min(a, b);
    maximum = max(a, b);

    cout << endl;
    cout << "The Maximum value of Given Integers is: " << maximum << endl;
    cout << "The Minimum value of Given Integers is: " << minimum << endl;
    cout << endl;

    return 0;
}
