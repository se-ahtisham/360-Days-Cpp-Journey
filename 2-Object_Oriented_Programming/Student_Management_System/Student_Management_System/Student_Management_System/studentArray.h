#pragma once
#include "Student.h"


class StudentArray
{
private:
	int size;
	int capacity;
	Student* std;



public:

	StudentArray(int capacity) : size(0), capacity(capacity) {
		std = new Student[capacity];
	}

	~StudentArray()
	{
		delete[] std;
	}

	void addStudent(Student student);
	bool searchById(int id);
	bool searchByName(string name);
	bool updateStudent(int serachId, string name, string address, long long phone);
	bool deleteStudent(int id);
	void printAll();
};
