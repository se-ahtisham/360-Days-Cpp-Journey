#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double angle = 0;
    cout << "Please Enter angle in Degrees: ";
    cin >> angle;
    if (angle >= 0 && angle <= 360)
    {
        double angd = angle * M_PI / 180;
        double sinx = sin(angd);
        double cosx = cos(angd);
        double result1 = pow(sinx, 2) + pow(cosx, 2);
        cout << "(sinx + cosx)^2 = " << pow(sinx + cosx, 2) << endl;
        cout << "sin^2x + cos^2x = " << result1 << endl;
        if (abs(result1 - 1) < 1e-6)
        {
            cout << "It is equal to One" << endl;
        }
        else
        {
            cout << "It is not equal to One" << endl;
        }
    }
    else
    {
        cout << "Wrong Input" << endl;
    }
    return 0;
}
