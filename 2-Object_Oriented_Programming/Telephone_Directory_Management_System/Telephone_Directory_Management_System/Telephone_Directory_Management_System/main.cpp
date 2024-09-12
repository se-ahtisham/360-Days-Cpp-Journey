#include "telephoneDirectory.h"

void intro()
{
    cout << endl;
    cout << "********************************************" << endl;
    cout << "     Telephone Management System           " << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

int main() {
    intro();
    int totalTelephones = 0;
    cout << "Please Enter Number of Telephones >> ";
    cin >> totalTelephones;

    TelephoneArray* telArray= new TelephoneArray(totalTelephones);
    int id = 0;
    string name = "";
    string fatherName = "";
    string email = "";
    string address = "";
    long long number = 0;

    int choice = 1;
    while (choice != 0)
    {
        int main_Choice = 0;
        cout << endl;
        cout << "1. Insert a new telephone record" << endl;
        cout << "2. Search for a record by ID" << endl;
        cout << "3. Search for a record by Name" << endl;
        cout << "4. Update an existing record" << endl;
        cout << "5. Delete a record" << endl;
        cout << "6. List directory" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> main_Choice;
        cout << endl;

        switch (main_Choice)
        {
        case 1: {
            Telephone* telephone = new Telephone();

            cout << endl;
            cout << "Enter telephone ID: ";
            cin >> id;
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter father's name: ";
            getline(cin, fatherName);
            cout << "Enter phone number: ";
            cin >> number;
            cout << "Enter email: ";
            cin.ignore();
            getline(cin, email);
            cout << "Enter address: ";
            getline(cin, address);

            telephone->setId(id);
            telephone->setName(name);
            telephone->setFatherName(fatherName);
            telephone->setPhNumber(number);
            telephone->setEmail(email);
            telephone->setAddress(address);

            telArray->addTelephone(*telephone);

            delete telephone;
            break;
        }

        case 2: {
            cout << "Enter telephone ID: ";
            cin >> id;
            if (telArray->searchById(id)) {
                cout << "Record found." << endl;
            }
            else {
                cout << "Record not found." << endl;
            }
            break;
        }

        case 3: {
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            if (telArray->searchByName(name)) {
                cout << "Record found." << endl;
            }
            else {
                cout << "Record not found." << endl;
            }
            break;
        }

        case 4: {
            cout << "Enter ID to update: ";
            cin >> id;

            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter new father's name: ";
            getline(cin, fatherName);
            cout << "Enter new phone number: ";
            cin >> number;
            cout << "Enter new email: ";
            cin.ignore();
            getline(cin, email);
            cout << "Enter new address: ";
            getline(cin, address);

            if (telArray->updateTelephone(id, name, fatherName, number, email, address)) {
                cout << "Record updated successfully." << endl;
            }
            else {
                cout << "Record not found." << endl;
            }
            break;
        }

        case 5: {
            cout << "Enter ID to delete: ";
            cin >> id;
            if (telArray->deleteTelephone(id)) {
                cout << "Record deleted successfully." << endl;
            }
            else {
                cout << "Record not found." << endl;
            }
            break;
        }

        case 6:
            telArray->printAll();
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
        cout << "Press 1 to continue and 0 to exit: ";
        cin >> choice;
        cout << endl;
    }


    telArray->~TelephoneArray();
    cout << "Deleted Successsfully:)" << endl;

    return 0;
}
