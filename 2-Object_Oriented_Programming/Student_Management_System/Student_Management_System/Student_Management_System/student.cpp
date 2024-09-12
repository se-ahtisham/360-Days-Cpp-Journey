#include "Student.h"

Student::Student() {};

Student::Student(int id, string name, string address, long long phone)
    : id(id), name(name), address(address), phone(phone) {}

int Student::getId() {
    return id;
}

void Student::setId(int id) {
    this->id = id;
}

string Student::getName() {
    return name;
}

void Student::setName(string name) {
    this->name = name;
}

string Student::getAddress() {
    return address;
}

void Student::setAddress(string address) {
    this->address = address;
}

long long Student::getPhone() {
    return phone;
}

void Student::setPhone(long long phone) {
    this->phone = phone;
}
