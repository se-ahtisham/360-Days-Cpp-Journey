#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "Please Enter Character: ";
    cin >> a;

    if ( (a == 'a' || a == 'A') || (a == 'e' || a == 'E') || 
         (a == 'i' || a == 'I') || (a == 'o' || a == 'O') || 
         (a == 'u' || a == 'U')) 
    {
        cout << "\nIts Vowel";

        if (a >= 97 && a <= 122) {
            cout << "\nIts Lower Case Letter\n";
        } else if (a >= 65 && a <= 90) {
            cout << "\nIts Upper Case Letter\n";
        }
    }
    else {
        cout << "\nIts Consonant\n";

        if (a >= 97 && a <= 122) {
            cout << "\nIts Lower Case Letter\n";
        } else if (a >= 65 && a <= 90) {
            cout << "Its Upper Case Letter\n";
        }
    }

    return 0;
}
