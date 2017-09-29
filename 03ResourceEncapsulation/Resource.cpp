#include "Resource.h"
#include <iostream>;
using namespace std;


Resource::Resource()
{
}


Resource::~Resource()
{
}

void Resource::addedValue(int value)
{
	values.push_back(value);
}

int Resource::average()
{
	int total = Resource::total();
	int result = (total / (values.size()));
	return result;
}

int Resource::total()
{
	int total = 0;
	for (int i = 0; i < values.size(); i++)
	{
		total += values.at(i);
	}
	return total;
}

int Resource::min()
{
	int min = 0;
	for (int i = 0; i < values.size(); i++)
	{
		if (i == 0)
		{
			min = values.at(i);
		}else if (values.at(i) < min)
		{
			min = values.at(i);
		}
	}
	return min;
}

int Resource::max()
{
	int max = 0;
	for (int i = 0; i < values.size(); i++)
	{
		if (i == 0)
		{
			max = values.at(i);
		}
		else if (values.at(i) > max)
		{
			max = values.at(i);
		}
	}
	return max;
}

void Resource::outPut()
{
	cout << "Number of Values: "<< values.size() << endl;
	cout << "Total of all Value: " << total() << endl;
	cout << "Average Value: " << average() << endl;
	cout << "Min Value: " << min() << endl;
	cout << "Max Value: " << max() << endl;
}