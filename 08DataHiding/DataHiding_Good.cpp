#include "DataHiding_Good.h"
#include <iostream>
using namespace std;



DataHiding_Good::DataHiding_Good()
{
}


DataHiding_Good::~DataHiding_Good()
{
}

//circle
double DataHiding_Good::getArea(double radius)
{
	return pi*radius*radius;
}

double DataHiding_Good::getPerimeter(double radius)
{
	return 2.0*pi*radius;
}

void DataHiding_Good::circleData(double radius)
{
	cout << "Circle with a radius of " << radius << endl;;
	cout << "perimeter: " << getPerimeter(radius) << endl;
	cout << "Area: " << getArea(radius) << endl;
}

//sphere
double DataHiding_Good::getVolume(double radius)
{
	return (4.0/3.0) * pi * radius * radius * radius;
}

double DataHiding_Good::getSurfaceArea(double radius)
{
	return 4.0 * pi*radius*radius;
}

void DataHiding_Good::sphereData(double radius)
{
	cout << "Sphere with a radius of " << radius << endl;;
	cout << "Surface Area: " << getSurfaceArea(radius) << endl;
	cout << "Volume: " << getVolume(radius) << endl;
}