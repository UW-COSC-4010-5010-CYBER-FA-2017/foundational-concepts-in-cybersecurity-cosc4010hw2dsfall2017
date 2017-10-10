#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Proffessor :
	public Person
{
private:
	string college;
	bool tenure;
public:
	Proffessor();
	~Proffessor();

	Proffessor(int a, bool ismale, string college, bool hasTenure);

	string getCollege();
	void setCollege(string c);

	bool hasTenure();
	void loseTenure();
	void gainTenure();
};

