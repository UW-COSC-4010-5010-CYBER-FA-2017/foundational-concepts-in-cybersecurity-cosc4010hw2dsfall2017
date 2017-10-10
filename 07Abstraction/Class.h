#pragma once
#include "Student.h"
#include "Proffessor.h"

class Class
{
	Student students[5];
	Proffessor Teacher;

	void setUpStudnets();

public:
	Class();
	~Class();
	Class(Proffessor t, Student* ss);

	void changeProffessor(Proffessor t);
	void addStudent(Student s);
	void removeStudent(Student s);
	Student getStudent(int a);
	Proffessor getProffessor();
};

