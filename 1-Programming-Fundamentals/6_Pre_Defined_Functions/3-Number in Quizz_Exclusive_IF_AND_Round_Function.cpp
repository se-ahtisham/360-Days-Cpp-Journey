#include <iostream>
using namespace std;

int main()
{
    float a = 0, b = 0, c = 0, d = 0, e = 0;
    cout << "Please Enter First value: ";
    cin >> a;
    cout << "Please Enter Second value: ";
    cin >> b;
    cout << "Please Enter Third value: ";
    cin >> c;
    cout << "Please Enter Fourth value: ";
    cin >> d;
    cout << "Please Enter Fifth value: ";
    cin >> e;

    if (a <= 10.0 && b <= 10.0 && c <= 10.0 && d <= 10.0 && e <= 10.0)
    {
        float sum = a + b + c + d + e;
        float avg = sum / 5;
        float r = round(avg);
        cout << "The Average of given numbers = " << avg << endl;
        cout << "The Rounded value = " << r << endl;
    }
    else
    {
        cout << "Wrong Input! Values must be less than 10.0" << endl;
    }
    return 0;
}
