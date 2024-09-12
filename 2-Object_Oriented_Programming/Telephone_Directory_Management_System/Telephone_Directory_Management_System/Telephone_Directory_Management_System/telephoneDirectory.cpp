#include "telephoneDirectory.h"

void TelephoneArray::addTelephone(Telephone telephone) {
    if (size >= capacity) {
        cout << "Storage Full!!" << endl;
        return;
    }

    for (int i = 0; i < size; i++) {
        if (telephone.getId() == tel[i].getId()) {
            cout << "ID already Found! Try Again!!!" << endl;
            return;
        }
    }
    tel[size++] = telephone;
    cout << "Successfully Registered" << endl;
}

bool TelephoneArray::searchById(int id) {
    for (int i = 0; i < size; i++) {
        if (tel[i].getId() == id) {
            return true;
        }
    }
    return false;
}

bool TelephoneArray::searchByName(string name) {
    for (int i = 0; i < size; i++) {
        if (tel[i].getName() == name) {
            return true;
        }
    }
    return false;
}

bool TelephoneArray::updateTelephone(int searchId, string name, string fatherName, long long phNumber, string email, string address) {
    for (int i = 0; i < size; i++) {
        if (tel[i].getId() == searchId) {
            tel[i].setName(name);
            tel[i].setFatherName(fatherName);
            tel[i].setPhNumber(phNumber);
            tel[i].setEmail(email);
            tel[i].setAddress(address);
            return true;
        }
    }
    return false;
}

bool TelephoneArray::deleteTelephone(int id) {
    for (int i = 0; i < size; i++) {
        if (tel[i].getId() == id) {
            for (int j = i; j < size - 1; j++) {
                tel[j] = tel[j + 1];
            }
            size--;
            return true;
        }
    }
    return false;
}

void TelephoneArray::printAll() {
    for (int i = 0; i < size; i++) {
        cout << "Telephone ID: " << tel[i].getId() << endl;
        cout << "Name: " << tel[i].getName() << endl;
        cout << "Father's Name: " << tel[i].getFatherName() << endl;
        cout << "Phone Number: " << tel[i].getPhNumber() << endl;
        cout << "Email: " << tel[i].getEmail() << endl;
        cout << "Address: " << tel[i].getAddress() << endl;
        cout << "--------------------------------------------------------" << endl;
    }
}
