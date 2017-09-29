#include "LeastPrivlege_Good.h"
#include <iostream>;
using namespace std;


LeastPrivlege_Good::LeastPrivlege_Good()
{
}


LeastPrivlege_Good::~LeastPrivlege_Good()
{
}

void LeastPrivlege_Good::setValue(const string s)
{
	value = s;
}

string LeastPrivlege_Good::getValue()
{
	return value;
}

char LeastPrivlege_Good::FindCharacter(const int i)
{
	char* chaPtr = NULL;
	char default = '0';
	int middle = value.size()/2;
	if (i == 0)
	{
		chaPtr = &value.at(0);
	}
	else if (i == 1) {
		chaPtr = &value.at(middle);
	}
	else if (i == 2) {
		chaPtr = &value.at(value.size()-1);
	}
	else {
		cerr << "invalid selection" << endl;
		return default;
	}

	return *chaPtr;
}