#include "Start.h"
#include "Module.h"



Start::Start()
{
}


Start::~Start()
{
}

char Start::getChar()
{
	char cha = '0';

	cha = value.at(0);

	return cha;
}