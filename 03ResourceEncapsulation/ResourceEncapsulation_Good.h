#pragma once
#include "Resource.h";

class ResourceEncapsulation_Good
{
private:
	Resource myResource;

public:
	ResourceEncapsulation_Good();
	~ResourceEncapsulation_Good();

	

	Resource getResource();

	void setResource(Resource r);

	void useResouse();


};

