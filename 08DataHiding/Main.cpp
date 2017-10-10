#include "DataHiding_Good.h"
#include <iostream>
#include <string> 
using namespace std;

int main()
{
	double radius;
	string input;
	DataHiding_Good good = DataHiding_Good();
	cout << "Enter a Radius (no units):";
	getline(cin, input);
	cout << endl;
	radius = std::stod(input);

	/*Good Example
	The inner workings of DataHiding_Good is hidden from the calling program (main).  Main does not need to know what/how DataHiding_Good caclulates the data.  
	The varable of "pi" within DataHiding_Good is hidden to the point that the colling program does not even know that "pi" even exist. This protects the progrm, you 
	cannot "hack" what you do not know. :)	
	*/
	cout << "DataHiding_Good" << endl;
	good.circleData(radius);
	good.sphereData(radius);
	cout << endl;

	/*bad Example
		All the details of how the information is calculated and the public varable of pi can be seen and edited.  With this much open to the user
		a hacker/programing/user could change and malipulate this code.  
	*/
	double pi = (3.14159265358979323846);
	cout << "DataHiding_bad" << endl;
	cout << "Circle with a radius of " << radius << endl;;
	cout << "perimeter: " << 2.0 * pi*radius << endl;
	cout << "Area: " << pi*radius*radius << endl;

	cout << "Sphere with a radius of " << radius << endl;;
	cout << "Surface Area: " << 4.0 * pi*radius*radius << endl;
	cout << "Volume: " << (4.0 / 3.0) * pi * radius * radius * radius << endl;

	cout << endl;

	return 0;
}