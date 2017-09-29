#pragma once
#include "Module.h"
#include <string>
#include <iostream>
using namespace std;

class Modularity_Good
{
private:
	string stringValue;
public:
	Modularity_Good(string sv);
	~Modularity_Good();

	void useModule(Module* m);
};

