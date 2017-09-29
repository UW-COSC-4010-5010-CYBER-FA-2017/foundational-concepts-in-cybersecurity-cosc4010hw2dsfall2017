#pragma once
#include <string>
using namespace std;

class Module
{
public:
	string value;
	Module();
	Module(string value);
	~Module();

	void setValue(string value);
	string getValue();

	virtual char getChar();


};

