#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice = 1;
    while (choice != 0)
    {
        cout << "Press 1 To Check Hypotenuse of triangle" << endl;
        cout << "Press 2 To Find Distance between Points" << endl;
        cout << "Press 3 To Check Quizz, Max/Min values, and More" << endl;
        cout << "Press 4 To Check Quadratic Equation" << endl;
        cout << "Press 5 To Find Remainder" << endl;
        cout << "Press 6 To Check Distance Between Points" << endl;
        cout << "Press 7 To Check Angles" << endl;
        cout << "Press 8 To Find (sinx + cosx)^2 and Verify sin^2x + cos^2x = 1" << endl;
        cout << "Press 0 To Exit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
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
                break;
            }

            case 2:
            {
                double x1 = 0, y1 = 0, px = 0, py = 0, angle = 0;
                cout << "Please Enter First Horizontally Point of satellite: ";
                cin >> x1;
                cout << "Please Enter First Vertically Point of satellite: ";
                cin >> y1;
                cout << "Please Enter Horizontally Point of Plane: ";
                cin >> px;
                cout << "Please Enter Vertically Point of Plane: ";
                cin >> py;
                cout << "Please Enter the angle in Degrees: ";
                cin >> angle;
                double angd = angle * M_PI / 180;
                double x2 = x1 * cos(angd) - y1 * sin(angd);
                double y2 = x1 * sin(angd) + y1 * cos(angd);

                double dis1 = sqrt(pow(x1 - px, 2) + pow(y1 - py, 2));
                double dis2 = sqrt(pow(x2 - px, 2) + pow(y2 - py, 2));

                cout << "The First Distance between Space Ship and satellite: " << dis1 << endl;
                cout << "The Second Distance between Space Ship and satellite: " << dis2 << endl;
                cout << "The Total distance: " << dis2 - dis1 << endl;
                break;
            }

            case 3:
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
                break;
            }

            case 4:
            {
                int a = 5, b = -9, c = -2;
                double d = sqrt(pow(b, 2) + 40);
                cout << "The First value of x: " << (9 - d) / 10 << endl;
                cout << "The Second value of x: " << (9 + d) / 10 << endl;
                break;
            }

            case 5:
            {
                float a = 0, b = 0;
                cout << "Please Enter A: ";
                cin >> a;
                cout << "Please Enter B: ";
                cin >> b;

                if (a == 0 || b == 0)
                {
                    cout << "One value is zero; answer is undefined" << endl;
                }
                else
                {
                    cout << "The Remainder A over B is: " << fmod(a, b) << endl;
                    cout << "The Remainder B over A is: " << fmod(b, a) << endl;
                }
                break;
            }

            case 6:
            {
                int x1 = 9, x2 = -10, y1 = 85, y2 = 41;
                double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
                cout << "The distance is equal: " << dis << endl;
                break;
            }

            case 7:
            {
                float angle = 0;
                cout << "Please Enter Angle in Degrees: ";
                cin >> angle;
                if (angle >= 0 && angle <= 360)
                {
                    double angd = angle * M_PI / 180;
                    cout << "The Sin value of given angle is: " << sin(angd) << endl;
                    cout << "The Cos value of given angle is: " << cos(angd) << endl;
                    if (cos(angd) != 0)
                    {
                        cout << "The Tan value of given angle is: " << tan(angd) << endl;
                    }
                    else
                    {
                        cout << "Undefined" << endl;
                    }
                }
                else
                {
                    cout << "Wrong Input!" << endl;
                }
                break;
            }

            case 8:
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
                break;
            }

            case 0:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Error! Invalid Input" << endl;
        }
    }
    return 0;
}
