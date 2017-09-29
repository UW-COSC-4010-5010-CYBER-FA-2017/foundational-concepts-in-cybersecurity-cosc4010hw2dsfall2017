#pragma once
#include <string>
#include <iostream>
using namespace std;

class Modularity_Bad
{
private:
	string stringValue;

public:
	Modularity_Bad();
	~Modularity_Bad();
	Modularity_Bad::Modularity_Bad(string sv);

	void start();
	void middle();
	void end();
	
};

