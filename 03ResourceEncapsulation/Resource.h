#pragma once
#include <vector>

class Resource
{
private:
	std::vector<int> values;


public:
	Resource();
	~Resource();
	
	void addedValue(int value);
	int average();
	int total();
	int min();
	int max();
	void outPut();

};

