#include <iostream>
using namespace std;

int main() {

    int rows=5;


    for(int i = 0; i < rows; i++) {

        for(int space = 0; space <= rows - i ; space++)
        {cout << "  ";}
            
        int number = 1;
        
        for(int k = 0; k <= i; k++) {
            cout << number << "   ";
            number = number * (i - k) / (k + 1);
        }
        cout << endl; 
    }

    return 0;
}
