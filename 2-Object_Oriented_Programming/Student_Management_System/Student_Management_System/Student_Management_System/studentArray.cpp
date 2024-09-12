#include "studentArray.h"

void StudentArray::addStudent(Student student) {
	if (size >= capacity)
	{
		cout << "Storage Full!!" << endl;
		return;
	}

	for (int i = 0; i < size; i++)
	{
		if (student.getId() == std[i].getId())
		{
			cout << "ID already Found! Try Again!!!" << endl;
			return;
		}
	}
	std[size++] = student;
	cout << "Successfully Register" << endl;
}


bool StudentArray::searchById(int id) {
	for (int i = 0; i < size; i++) {
		if (std[i].getId() == id) {
			return true;
		}
	}
	return false;
}
bool StudentArray::searchByName(string name) {
	for (int i = 0; i < size; i++) {
		if (std[i].getName() == name) {
			return true;
		}
	}
	return false;
}
bool StudentArray::updateStudent(int serachId, string name, string address, long long phone) {
	for (int i = 0; i < size; i++) {
		if (std[i].getId() == serachId) {
			std[i].setName(name);
			std[i].setAddress(address);
			std[i].setPhone(phone);
			return true;
		}
	}
	return false;
}


bool StudentArray::deleteStudent(int id) {
	for (int i = 0; i < size; i++) {
		if (std[i].getId() == id) {
			for (int j = i; j < size - 1; j++) {
				std[j] = std[j + 1];
			}
			size--;
			return true;
		}
	}
	return false;
}

void StudentArray::printAll() {

	for (int i = 0; i < size; ++i) {

		cout << " Student ID: " << std[i].getId() << endl;
		cout << " Student Name: " << std[i].getName() << endl;
		cout << " Student Address: " << std[i].getAddress() << endl;
		cout << " Student Phine Number: " << std[i].getPhone() << endl;
		cout << " --------------------------------------------------------" << endl;

	}
}
