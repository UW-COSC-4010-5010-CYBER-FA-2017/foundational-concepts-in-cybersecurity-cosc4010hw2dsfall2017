#include "DomainSeparation_Good.h"



DomainSeparation_Good::DomainSeparation_Good()
{
	reset();
}


DomainSeparation_Good::~DomainSeparation_Good()
{
}

void DomainSeparation_Good::reset()
{
	start = 0;
	total = 0;
}

int DomainSeparation_Good::getStart()
{
	return start;

}

void DomainSeparation_Good::setStart(int a)
{
	start = a;
}

int DomainSeparation_Good::getTotal()
{
	return total;
}

void DomainSeparation_Good::setTotal(int b)
{
	while (total < b)
	{
		increaseTotal(1);
	}
	while (total > b)
	{
		decreaseTotal(1);
	}
}

void DomainSeparation_Good::increaseTotal(int c)
{
	total += c;
}

void DomainSeparation_Good::decreaseTotal(int d)
{
	total -= d;
}
