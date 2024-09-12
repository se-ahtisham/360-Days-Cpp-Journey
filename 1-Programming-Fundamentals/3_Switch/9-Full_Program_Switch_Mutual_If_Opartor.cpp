#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Press 1 to execute Vowel and Consonant program." << endl;
    cout << "Press 2 to execute Find days in month." << endl;
    cout << "Press 3 to execute Find day on week." << endl;
    cout << "Press 4 to execute Even and odd program." << endl;
    cout << "Press 5 to execute Number execute on (5 or 11) or (not on 5 and 11)." << endl;
    cout << "Please Input the Number: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            char a;
            cout << "Please Enter Character: ";
            cin >> a;

            if ( (a == 'a' || a == 'A') || (a == 'e' || a == 'E') || 
                 (a == 'i' || a == 'I') || (a == 'o' || a == 'O') || 
                 (a == 'u' || a == 'U')) 
            {
                cout << "Its Vowel";
                if (a >= 97 && a <= 122) {
                    cout << "Its Lower Case Letter\n";
                } else if (a >= 65 && a <= 90) {
                    cout << "Its Upper Case Letter\n";
                }
            } else {
                cout << "Its Consonant";
                if (a >= 97 && a <= 122) {
                    cout << "Its Lower Case Letter\n";
                } else if (a >= 65 && a <= 90) {
                    cout << "Its Upper Case Letter\n";
                }
            }
            break;
        }

        case 2: {
            int month;
            cout << "Please Enter the Month Number: ";
            cin >> month;

            switch(month) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    cout << "This month has 31 days\n";
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    cout << "This month has 30 days\n";
                    break;
                case 2:
                    cout << "This month has 28 days\n";
                    break;
                default:
                    cout << "Invalid Input\n";
                    break;
            }
            break;
        }

        case 3: {
            int number;
            cout << "Please Enter number of day: ";
            cin >> number;

            switch(number) {
                case 1:
                    cout << "This is Monday\n";
                    break;
                case 2:
                    cout << "This is Tuesday\n";
                    break;
                case 3:
                    cout << "This is Wednesday\n";
                    break;
                case 4:
                    cout << "This is Thursday\n";
                    break;
                case 5:
                    cout << "This is Friday\n";
                    break;
                case 6:
                    cout << "This is Saturday\n";
                    break;
                case 7:
                    cout << "This is Sunday\n";
                    break;
                default:
                    cout << "Invalid Input of number of day!\n";
                    break;
            }
            break;
        }

        case 4: {
            int num;
            cout << "Please Enter number: ";
            cin >> num;

            if (num % 2 == 0) {
                cout << "The Given number is even number\n";
            } else {
                cout << "The Given number is odd number\n";
            }
            break;
        }

        case 5: {
            int numbers;
            cout << "Please Enter number: ";
            cin >> numbers;

            if (numbers % 5 == 0) {
                cout << "The Given number is perfectly Divisible by 5\n";
            } else if (numbers % 11 == 0) {
                cout << "The Given number is perfectly Divisible by 11\n";
            } else {
                cout << "Not Divisible by 5 or 11\n";
            }
            break;
        }

        default:
            cout << "Invalid Input\n";
            break;
    }

    return 0;
}
