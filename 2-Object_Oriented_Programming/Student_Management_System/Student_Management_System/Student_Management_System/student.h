#pragma once

#include <iostream>
#include <string>


using namespace std;

class Student
{
private:
    int id;
    string name;
    string address;
    long long phone;

public:
    Student();
    Student(int id, string name, string address, long long phone);

    int getId();
    void setId(int id);

    string getName();
    void setName(string name);

    string getAddress();
    void setAddress(string address);

    long long getPhone();
    void setPhone(long long phone);
};
