#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 0, b = 0, c = 0;
    cout << "Please Enter First Value: ";
    cin >> a;
    cout << "Please Enter Second Value: ";
    cin >> b;
    if (a == 0 || b == 0)
    {
        cout << "This is not a triangle because triangle has 3 sides\n";
    }
    else
    {
        c = sqrt(pow(a, 2) + pow(b, 2));
        cout << "The hypotenuse of right angle triangle is: " << c << endl;
    }
    return 0;
}
