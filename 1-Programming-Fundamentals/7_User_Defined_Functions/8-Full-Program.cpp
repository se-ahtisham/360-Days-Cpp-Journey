#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of the arc of a triangle
float triangle(float length1, float length2, float angle) {
    return (length1 * length2 * sin(angle)) / 2;
}

// Function to calculate the area of a sector
float area(float radius, float angle) {
    return (pow(radius, 2) * angle) / 2;
}

// Function to calculate the area of a triangle given its sides
float length(float side1, float side2, float side3) {
    float semi = (side1 + side2 + side3) / 2;
    return sqrt(semi * (semi - side1) * (semi - side2) * (semi - side3));
}

// Function to check if a number is even or odd
bool isEven(int num) {
    return num % 2 == 0;
}

// Function to print a multiplication table
void printTable(int multiplier, int start, int ending) {
    while (start <= ending) {
        cout << multiplier << "*" << start << "=" << start * multiplier << endl;
        start++;
    }
}

// Function to swap two integers
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to calculate the GCD of two numbers
int gcd(int num1, int num2) {
    int rem;
    while (num2 != 0) {
        rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    return num1;
}

int main() {
    int choice;
    
    while (true) {
        cout << "Please select an option:" << endl;
        cout << "1. Calculate area of the arc of a triangle" << endl;
        cout << "2. Calculate area of a sector" << endl;
        cout << "3. Calculate the area of a triangle given its sides" << endl;
        cout << "4. Check if a number is even or odd" << endl;
        cout << "5. Print multiplication table" << endl;
        cout << "6. Swap two numbers" << endl;
        cout << "7. Calculate GCD of two numbers" << endl;
        cout << "0. Exit" << endl;
        cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
            case 1: {
                float length1, length2, angle;
                cout << "Enter length 1: ";
                cin >> length1;
                cout << "Enter length 2: ";
                cin >> length2;
                cout << "Enter angle in radians: ";
                cin >> angle;
                cout << "Area of the arc of the triangle is: " << triangle(length1, length2, angle) << endl;
                break;
            }

            case 2: {
                float radius, angle;
                cout << "Enter radius: ";
                cin >> radius;
                cout << "Enter angle in radians: ";
                cin >> angle;
                cout << "Area of the sector is: " << area(radius, angle) << endl;
                break;
            }

            case 3: {
                float side1, side2, side3;
                cout << "Enter side 1: ";
                cin >> side1;
                cout << "Enter side 2: ";
                cin >> side2;
                cout << "Enter side 3: ";
                cin >> side3;
                cout << "Area of the triangle is: " << length(side1, side2, side3) << endl;
                break;
            }

            case 4: {
                int num;
                cout << "Enter number: ";
                cin >> num;
                cout << (isEven(num) ? "Number is even" : "Number is odd") << endl;
                break;
            }

            case 5: {
                int multiplier, start, ending;
                cout << "Enter multiplier: ";
                cin >> multiplier;
                cout << "Enter start value: ";
                cin >> start;
                cout << "Enter ending value: ";
                cin >> ending;
                printTable(multiplier, start, ending);
                break;
            }

            case 6: {
                int num1, num2;
                cout << "Enter number 1: ";
                cin >> num1;
                cout << "Enter number 2: ";
                cin >> num2;
                swap(num1, num2);
                cout << "After swap, number 1: " << num1 << ", number 2: " << num2 << endl;
                break;
            }

            case 7: {
                int num1, num2;
                cout << "Enter number 1: ";
                cin >> num1;
                cout << "Enter number 2: ";
                cin >> num2;
                cout << "GCD of the numbers is: " << gcd(num1, num2) << endl;
                break;
            }

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
