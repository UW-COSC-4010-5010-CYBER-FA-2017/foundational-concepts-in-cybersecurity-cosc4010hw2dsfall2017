#pragma once
#include "Person.h"
#include <string>
using namespace std;
class Student :
	public Person
{
private: 
	string Major;
	double gpa;
public:
	Student();
	~Student();
	Student(int a, bool ismale, string m, double GPA);

	double getGPA();
	void setGPA(double GPA);

	string getMajor();
	void setMajor(string m);



};

