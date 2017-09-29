#include "Module.h"



Module::Module()
{
}


Module::~Module()
{
}

Module::Module(string value)
{
	setValue(value);
}

void Module::setValue(string v)
{
	value = v;
}
string Module::getValue()
{
	return value;
}

char Module::getChar()
{
	return '0';
}