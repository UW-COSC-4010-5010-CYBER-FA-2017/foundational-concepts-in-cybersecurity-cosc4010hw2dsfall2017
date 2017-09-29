#include "Modularity_Bad.h"



Modularity_Bad::Modularity_Bad()
{
}

Modularity_Bad::Modularity_Bad(string sv)
{
	stringValue = sv;
}

Modularity_Bad::~Modularity_Bad()
{
}

void Modularity_Bad::start()
{
	char* chaPtr = NULL;

	chaPtr = &(stringValue).at(0);
	cout << *chaPtr << endl;
}

void Modularity_Bad::middle()
{
	char* chaPtr = NULL;

	int middle = (stringValue).size() / 2;

	chaPtr = &(stringValue).at(middle);

	cout << *chaPtr << endl;
}

void Modularity_Bad::end()
{
	char* chaPtr = NULL;

	int end = stringValue.size() - 1;

	chaPtr = &(stringValue).at(end);

	cout << *chaPtr << endl;
}