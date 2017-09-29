#include "ProcessIsolation_Bad.h"



ProcessIsolation_Bad::ProcessIsolation_Bad(int* mem, int start, int total)
{
	memory = mem;
	memoryStart = start;
	memoryTotal = total;
	reset();
}


ProcessIsolation_Bad::~ProcessIsolation_Bad()
{

}

void ProcessIsolation_Bad::reset()
{
	memory[memoryStart] = 0;
	memory[memoryTotal] = 0;
}

int* ProcessIsolation_Bad::getMemory()
{
	return memory;
}


void ProcessIsolation_Bad::setStart(int value)
{
	memory[memoryStart] = value;
}

int ProcessIsolation_Bad::getStart()
{
	return memory[memoryStart];
}

void ProcessIsolation_Bad::setTotal(int value)
{
	memory[memoryTotal] = value;
}

int ProcessIsolation_Bad::getTotal()
{
	return memory[memoryTotal];
}
