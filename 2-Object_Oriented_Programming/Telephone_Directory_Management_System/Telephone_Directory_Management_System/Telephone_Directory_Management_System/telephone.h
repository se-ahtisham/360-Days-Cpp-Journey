#pragma once

#include <iostream>
#include <string>

using namespace std;

class Telephone
{
private:
    int id;
    string name;
    string fatherName;
    long long phNumber;
    string email;
    string address;

public:
    Telephone();
    Telephone(int id, string name, string fatherName, long long phNumber, string email, string address);

    int getId();
    void setId(int id);

    string getName();
    void setName(string name);

    string getFatherName();
    void setFatherName(string fatherName);

    long long getPhNumber();
    void setPhNumber(long long phNumber);

    string getEmail();
    void setEmail(string email);

    string getAddress();
    void setAddress(string address);
};
