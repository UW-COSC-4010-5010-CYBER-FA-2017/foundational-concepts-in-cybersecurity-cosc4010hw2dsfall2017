#include "Person.h"
#include "Proffessor.h"
#include "Student.h"
#include "Class.h"
#include <iostream>;
#include <string>;
using namespace std;


int main()
{
	/*Good Example
		A class is 5 students and 1 proffessor.  
		By making a c++ "class" for the students and Proffessor they are represented as single objects and easier to understand, use/modify,
		and exspand upon.  With this abstraction it is easy to understand what the code is doing and why it is doing it; and because each item is self contained
		all the inforamtion is in one place. 
	*/
	Proffessor p = Proffessor(50, true, "College of Engineering applied Sciences", false);
	Student students[5];
	students[0] = Student(18, false, "Computer Science", 4.0);
	students[1] = Student(19, true, "Mechanical Engineering", 3.5);
	students[2] = Student(20, false, "Civil Engineering", 3.0);
	students[3] = Student(21, true, "Pscychology", 2.5);
	students[4] = Student(22, false, "Biology", 2.0);

	Class myClass = Class(p, students);

	cout << "Good Example" << endl;
	cout << "Proffessor" << endl;
	cout << "Age: " << myClass.getProffessor().getAge() << endl;
	cout << "Gender: " << ((myClass.getProffessor().isMale()) ? "Male" : "Female") << endl;
	cout << "College: " << myClass.getProffessor().getCollege() << endl;
	cout << ((myClass.getProffessor().hasTenure()) ? "Recieved Tenure" : "Has not earned Tenure") << endl;
	cout << endl;
	cout << "Students" << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Student" << i << endl;
		cout << "Age: " << myClass.getStudent(i).getAge() << endl;
		cout << "Gender: " << ((myClass.getStudent(i).isMale()) ? "Male" : "Female") << endl;
		cout << "Major: " << myClass.getStudent(i).getMajor() << endl;
		cout << "GPA: " << myClass.getStudent(i).getGPA() << endl;
	}
	cout << endl;
	/*Bad Example
		No class objects.  All the data is stored in Arry/list/collections.  Several collections will need to be accessed to learn the information 
		about 1 item (student/proffessor/Etc).  Also keeping track of which index a studnet is, is handled by the programmer so will need to be update
		for a change.
	*/
	int ages[6] = { 18,19,20,21,22,50 };
	bool genders[6] = { false, true, false, true, false, true};
	string majors[5] = { "Computer Science", "Mechanical Engineering",  "Civil Engineering",  "Pscychology",  "Biology"};
	double gpas[5] = { 4.0,3.5,3.0,2.5,2.0 };
	string pCollege = "College of Engineering applied Sciences";
	bool PTenure = false;

	cout << "Bad Example" << endl;
	cout << "Proffessor" << endl;
	cout << "Age: " << ages[6] << endl;
	cout << "Gender: " << ((genders[6]) ? "Male" : "Female") << endl;
	cout << "College: " << pCollege << endl;
	cout << ((PTenure) ? "Recieved Tenure" : "Has not earned Tenure") << endl;
	cout << endl;

	cout << "Students" << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Student" << i << endl;
		cout << "Age: " << ages[i] << endl;
		cout << "Gender: " << ((genders[i]) ? "Male" : "Female") << endl;
		cout << "Major: " << majors[i] << endl;
		cout << "GPA: " << gpas[i] << endl;
	}


	return 0;
}