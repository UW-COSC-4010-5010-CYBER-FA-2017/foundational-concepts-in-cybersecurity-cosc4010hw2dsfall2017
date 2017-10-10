#include "Student.h"



Student::Student()
{
	Student::Student(0, true, "", 0.00);
}


Student::~Student()
{
}

Student::Student(int a, bool ismale, string m, double GPA)
{
	setAge(a);
	if (ismale)
	{
		setMale();
	}
	else {
		setFemale();
	}
	setMajor(m);
	setGPA(GPA);

}

double Student::getGPA()
{
	return gpa;
}

void Student::setGPA(double GPA)
{
	gpa = GPA;
}

string Student::getMajor()
{
	return Major;
}

void Student::setMajor(string m)
{
	Major = m;
}
