#include "Proffessor.h"



Proffessor::Proffessor()
{
}


Proffessor::~Proffessor()
{
}

Proffessor::Proffessor(int a, bool ismale, string college, bool hasTenure)
{
	setAge(a);
	if (ismale)
	{
		setMale();
	}
	else {
		setFemale();
	}
	setCollege(college);
	if (hasTenure)
	{
		gainTenure();
	}
	else {
		loseTenure();
	}
}


string Proffessor::getCollege()
{
	return college;
}

void Proffessor::setCollege(string c)
{
	college = c;
}

bool Proffessor::hasTenure()
{
	return tenure;
}

void Proffessor::loseTenure()
{
	tenure = false;
}

void Proffessor::gainTenure()
{
	tenure = true;
}
