#include "End.h"



End::End()
{
}


End::~End()
{
}

char End::getChar()
{
	char* chaPtr = NULL;

	int end = value.size()-1;

	chaPtr = &(value).at(end);

	return *chaPtr;
}