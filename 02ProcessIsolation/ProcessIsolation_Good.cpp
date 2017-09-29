#include "ProcessIsolation_Good.h"



ProcessIsolation_Good::ProcessIsolation_Good()
{
	reset();
}


ProcessIsolation_Good::~ProcessIsolation_Good()
{
}

void ProcessIsolation_Good::reset()
{
	memory[0] = 0;
	memory[1] = 0;
}

int* ProcessIsolation_Good::getMemory()
{
	return memory;
}


void ProcessIsolation_Good::setStart(int value)
{
	memory[0] = value;
}

int ProcessIsolation_Good::getStart()
{
	return memory[0];
}

void ProcessIsolation_Good::setTotal(int value)
{
	memory[1] = value;
}

int ProcessIsolation_Good::getTotal()
{
	return memory[1];
}


