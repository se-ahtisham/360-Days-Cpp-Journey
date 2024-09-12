#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Please Enter the Grade: ";
    cin >> grade;
    cout << endl;

    if (grade >= 87 && grade <= 100) {
        cout << "Grade A" << endl;
    } else if (grade >= 80 && grade < 87) {
        cout << "Grade B+" << endl;
    } else if (grade >= 72 && grade < 80) {
        cout << "Grade B" << endl;
    } else if (grade >= 67 && grade < 72) {
        cout << "Grade C+" << endl;
    } else if (grade >= 60 && grade < 67) {
        cout << "Grade C" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
