#pragma once
class DataHiding_Good
{

private: 
	
	const double pi = 3.14159265358979323846;
	//circle
	double getArea(double radius);
	double getPerimeter(double radius);

	//sphere
	double getVolume(double radius);
	double getSurfaceArea(double radius);

public:
	DataHiding_Good();
	~DataHiding_Good();

	void circleData(double radius);
	void sphereData(double radius);

};

