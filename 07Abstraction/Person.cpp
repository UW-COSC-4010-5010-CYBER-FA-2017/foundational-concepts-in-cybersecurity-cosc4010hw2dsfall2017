#include "Person.h"



Person::Person()
{
	Person::Person(0, true);
}


Person::~Person()
{
}

Person::Person(int a, bool isMale)
{
	setAge(a);
	if (isMale)
	{
		setMale();
	}
	else {
		setFemale();
	}
}


int Person::getAge()
{
	return age;
}

void Person::setAge(int a)
{
	age = a;
}

bool Person::isMale()
{
	return male;
}

void Person::setMale()
{
	male = true;
}

void Person::setFemale()
{
	male = false;
}
