#pragma once
#include "telephone.h"

class TelephoneArray
{
private:
    int size;
    int capacity;
    Telephone* tel;

public:
    TelephoneArray(int capacity) : size(0), capacity(capacity) {
        tel = new Telephone[capacity];
    }

    ~TelephoneArray() {
        delete[] tel;
    }

    void addTelephone(Telephone telephone);
    bool searchById(int id);
    bool searchByName(string name);
    bool updateTelephone(int searchId, string name, string fatherName, long long phNumber, string email, string address);
    bool deleteTelephone(int id);
    void printAll();
};
