#include "studentArray.h"


void intro()
{
    cout << endl;
    cout << "********************************************" << endl << "     Student Management System   " << endl << "********************************************" << endl;
    cout << endl;
}



int main() {
    intro();
    int totalStudent = 0;
    cout << "Please Enter Number of Students >> ";
    cin >> totalStudent;

    StudentArray std(totalStudent);
    int id = 0;
    string name = "";
    string address = "";
    long long number = 0;


    int choice = 1;
    while (choice != 0)
    {
        int main_Choice = 0;
        cout << endl;
        cout << "1. Insert a new student" << endl;
        cout << "2. Search for a student by ID " << endl;
        cout << "3. Search for a student by Name " << endl;
        cout << "4. Update an existing student" << endl;
        cout << "5. Delete a record" << endl;
        cout << "6. List directory" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> main_Choice;
        cout << endl;


        switch (main_Choice)
        {
        case 1: {
            Student student = Student();

            cout << endl;
            cout << "Enter student ID: ";
            cin >> id;
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter student Address: ";
            getline(cin, address);
            cout << "Enter student Phone#: ";
            cin >> number;

            student.setId(id);
            student.setName(name);
            student.setAddress(address);
            student.setPhone(number);

            std.addStudent(student);
            break;

        }


        case 2: {
            int id;
            cout << "Enter student ID: ";
            cin >> id;
            if (std.searchById(id)) {
                cout << "Student found." << endl;
            }
            else {
                cout << "Student not found." << endl;
            }
            break;
        }

        case 3: {
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);
            if (std.searchByName(name)) {
                cout << "Student found." << endl;
            }
            else {
                cout << "Student not found." << endl;
            }
            break;
        }

        case 4: {
            cout << "Enter student ID to update: ";
            cin >> id;

            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter new Address: ";
            cin.ignore();
            getline(cin, address);
            cout << "Enter new Phone#: ";
            cin >> number;
            if (std.updateStudent(id, name, address, number)) {
                cout << "Student updated successfully." << endl;
            }
            else {
                cout << "Student not found." << endl;
            }
            break;
        }

        case 5: {

            cout << "Enter student ID to delete: ";
            cin >> id;
            if (std.deleteStudent(id)) {
                cout << "Student deleted successfully." << endl;
            }
            else {
                cout << "Student not found." << endl;
            }
            break;
        }
        case 6:
            std.printAll();
            break;


        default:
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
        cout << " Press 1 for Again and 0 for Exit:  ";
        cin >> choice;
        cout << endl;
    }



    return 0;
}