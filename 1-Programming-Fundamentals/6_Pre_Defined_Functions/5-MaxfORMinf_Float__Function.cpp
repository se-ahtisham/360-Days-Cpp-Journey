#include <iostream>
#include <cmath>  // For fmin and fmax

using namespace std;

int main() {
    float a, b, minimum, maximum;

    cout << "Please Enter First Float number: ";
    cin >> a;
    cout << "Please Enter Second Float number: ";
    cin >> b;

    minimum = fmin(a, b);
    maximum = fmax(a, b);

    cout << endl;
    cout << "The Maximum value of Given Float is: " << maximum << endl;
    cout << "The Minimum value of Given Float is: " << minimum << endl;
    cout << endl;

    return 0;
}
