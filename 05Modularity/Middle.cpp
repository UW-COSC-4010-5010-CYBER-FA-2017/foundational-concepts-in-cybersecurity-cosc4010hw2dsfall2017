#include "Middle.h"



Middle::Middle()
{
}


Middle::~Middle()
{
}

char Middle::getChar()
{
	char* chaPtr = NULL;


	int middle = (value).size() / 2;
	
	chaPtr = &(value).at(middle);

	return *chaPtr;
}
