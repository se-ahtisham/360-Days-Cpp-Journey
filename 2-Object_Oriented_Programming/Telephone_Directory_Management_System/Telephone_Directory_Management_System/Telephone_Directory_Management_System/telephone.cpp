#include "Telephone.h"

Telephone::Telephone() {}

Telephone::Telephone(int id, string name, string fatherName, long long phNumber, string email, string address)
    : id(id), name(name), fatherName(fatherName), phNumber(phNumber), email(email), address(address) {}

int Telephone::getId() {
    return id;
}

void Telephone::setId(int id) {
    this->id = id;
}

string Telephone::getName() {
    return name;
}

void Telephone::setName(string name) {
    this->name = name;
}

string Telephone::getFatherName() {
    return fatherName;
}

void Telephone::setFatherName(string fatherName) {
    this->fatherName = fatherName;
}

long long Telephone::getPhNumber() {
    return phNumber;
}

void Telephone::setPhNumber(long long phNumber) {
    this->phNumber = phNumber;
}

string Telephone::getEmail() {
    return email;
}

void Telephone::setEmail(string email) {
    this->email = email;
}

string Telephone::getAddress() {
    return address;
}

void Telephone::setAddress(string address) {
    this->address = address;
}
