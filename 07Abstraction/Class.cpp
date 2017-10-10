#include "Class.h"
#include"Student.h"
#include"Proffessor.h"
#include <iostream>;
using namespace std;


Class::Class()
{
	setUpStudnets();
	changeProffessor(Proffessor());
}


Class::~Class()
{
}

Class::Class(Proffessor t, Student* ss)
{
	setUpStudnets();
	changeProffessor(t);
	for (int i = 0; i < 5; i++)
	{
		students[i] = ss[i];
	}

}

void Class::changeProffessor(Proffessor t)
{
	Teacher = t;
}

void Class::addStudent(Student s)
{
	int i = 0;
	bool loop = true;

	while (loop)
	{
		if (students[i].getAge() != 0)
		{
			students[i] = Student();
			loop = false;
		}else {
			i++;
			if (i > 5)
			{
				loop = false;
				cerr << "Unable to add student, class is full" << endl;
			}
		}
	}
}

void Class::removeStudent(Student s)
{
	int i = 0;
	bool loop = true;

	while (loop)
	{
		if ((students[i].getAge() == s.getAge()) 
			&& (students[i].isMale() == s.isMale())
			&& (students[i].getGPA() == s.getGPA())
			&& (0 == students[i].getMajor().compare(s.getMajor())))
		{
			students[i] = Student();
			loop = false;
		}
		else {
			i++;
			if (i > 5)
			{
				loop = false;
				cerr << "Unable to find student in class" << endl;
			}
		}
	}
}


Student Class::getStudent(int a)
{
	if (a < 5)
	{
		return students[a];
	}
	else {
		cerr << "Unable to find student in class" << endl;
		return Student();
	}
	
}

Proffessor Class::getProffessor()
{
	return Teacher;
}

void Class::setUpStudnets()
{
	for (int i = 0; i < 5; i++)
	{
		students[i] = Student();
	}
}