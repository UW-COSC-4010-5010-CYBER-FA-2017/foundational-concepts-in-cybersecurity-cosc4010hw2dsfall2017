#include "Resource.h";
#include "ResourceEncapsulation_Good.h";
#include <iostream>;
using namespace std;

#include <vector>;

int main()
{
	/*In this good example the resources are interchangeable and self contained.  ResourceEncapsulation_Good does not know how the resource does
	what it does and it doesn't need to.  It just needs to know how to use the resource. 
	*/
	
	Resource Resource1_10 = Resource();
	for (int i = 1; i <= 10; i++)
	{
		Resource1_10.addedValue(i);
	}

	Resource Resource2_20 = Resource();
	for (int i = 2; i <= 20; i++)
	{
		Resource2_20.addedValue(i);
	}

	ResourceEncapsulation_Good good = ResourceEncapsulation_Good();

	good.setResource(Resource1_10);
	cout << "Good Resource 1" << endl;
	good.useResouse();
	

	good.setResource(Resource2_20);
	cout << "Good Resource 2" << endl;
	good.useResouse();

	cout << endl;

	/*In this bad example the resources are not incased in a capsule.  The resource can be accessed directly and the calling program must understand what the resource
	is and how it works in order to figure out how to use it. A*/

	//non-encapsulated resource
	std::vector<int> values1_10;

	for (int i = 1; i <= 10; i++)
	{
		values1_10.push_back(i);
	}
	
	int total = 0;
	for (int i = 0; i < values1_10.size(); i++)
	{
		total += values1_10.at(i);
	}
	
	int average = (total / (values1_10.size()));
	
	int min = 0;
	for (int i = 0; i < values1_10.size(); i++)
	{
		if (i == 0)
		{
			min = values1_10.at(i);
		}
		else if (values1_10.at(i) < min)
		{
			min = values1_10.at(i);
		}
	}

	int max = 0;
	for (int i = 0; i < values1_10.size(); i++)
	{
		if (i == 0)
		{
			max = values1_10.at(i);
		}
		else if (values1_10.at(i) > max)
		{
			max = values1_10.at(i);
		}
	}

	cout << "Bad Resource 1" << endl;
	cout << "Number of Values: " << values1_10.size() << endl;
	cout << "Total of all Value: " << total << endl;
	cout << "Average Value: " << average << endl;
	cout << "Min Value: " << min << endl;
	cout << "Max Value: " << max << endl;


	//non-encapsulated resource
	std::vector<int> values2_20;
	for (int i = 2; i <= 20; i++)
	{
		values2_20.push_back(i);
	}

	total = 0;
	for (int i = 0; i < values2_20.size(); i++)
	{
		total += values2_20.at(i);
	}

	average = (total / (values2_20.size()));

	min = 0;
	for (int i = 0; i < values2_20.size(); i++)
	{
		if (i == 0)
		{
			min = values2_20.at(i);
		}
		else if (values2_20.at(i) < min)
		{
			min = values2_20.at(i);
		}
	}

	max = 0;
	for (int i = 0; i < values2_20.size(); i++)
	{
		if (i == 0)
		{
			max = values2_20.at(i);
		}
		else if (values2_20.at(i) > max)
		{
			max = values2_20.at(i);
		}
	}

	cout << "Bad Resource 2" << endl;
	cout << "Number of Values: " << values2_20.size() << endl;
	cout << "Total of all Value: " << total << endl;
	cout << "Average Value: " << average << endl;
	cout << "Min Value: " << min << endl;
	cout << "Max Value: " << max << endl;
	cout << endl;

	return 0;
}