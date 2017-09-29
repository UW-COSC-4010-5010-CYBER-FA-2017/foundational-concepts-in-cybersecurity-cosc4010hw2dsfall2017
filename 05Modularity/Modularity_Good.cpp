#include "Modularity_Good.h"




Modularity_Good::Modularity_Good(string sv)
{
	stringValue = sv;
}


Modularity_Good::~Modularity_Good()
{
}

void Modularity_Good::useModule(Module* m)
{
	m->setValue(stringValue);
	cout << m->getChar() << endl;
}
