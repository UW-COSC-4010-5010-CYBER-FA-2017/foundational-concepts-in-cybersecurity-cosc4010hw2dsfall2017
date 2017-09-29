#include "ResourceEncapsulation_Good.h"




ResourceEncapsulation_Good::ResourceEncapsulation_Good()
{
}


ResourceEncapsulation_Good::~ResourceEncapsulation_Good()
{
}

Resource ResourceEncapsulation_Good::getResource()
{
	return myResource;
}

void ResourceEncapsulation_Good::setResource(Resource r)
{
	myResource = r;
}

void ResourceEncapsulation_Good::useResouse()
{
	myResource.outPut();
}