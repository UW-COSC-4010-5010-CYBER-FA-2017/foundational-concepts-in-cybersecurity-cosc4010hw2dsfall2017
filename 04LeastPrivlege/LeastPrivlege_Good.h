#pragma once

#include <string>

using namespace std;

class LeastPrivlege_Good
{
private: 
	string value;

public:
	const static int start = 0;
	const static int middle = 1;
	const static int end = 2;
	
	LeastPrivlege_Good();
	~LeastPrivlege_Good();

	void setValue(const string s);
	string getValue();
	char FindCharacter(const int i);
};

