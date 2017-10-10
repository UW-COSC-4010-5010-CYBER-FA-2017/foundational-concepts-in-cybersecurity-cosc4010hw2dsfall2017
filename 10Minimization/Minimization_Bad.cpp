#include "Minimization_Bad.h"
#include <iostream>
using namespace std;



Minimization_Bad::Minimization_Bad()
{
	reset();
}


Minimization_Bad::~Minimization_Bad()
{
}

Minimization_Bad::Minimization_Bad(string name)
{
	reset();
	setUser(name);
}

void Minimization_Bad::reset()
{
	setUser("person");
	setMessage("Goodbye person \nit was nice to meet you!");
}

string Minimization_Bad::getUser()
{
	return user;
}

void Minimization_Bad::setUser(string u)
{
	user = u;
}

string Minimization_Bad::getMessage()
{
	return message;
}

bool Minimization_Bad::testMessage(string m)
{
	if (m.find("person") == std::string::npos)
	{
		cerr << "The work person must be in the message" << endl;
		return false;
	}
	else {
		return true;
	}
	
}

void Minimization_Bad::setMessage(string m)
{
	if (testMessage(m))
	{
		message = m;
	}
}

void Minimization_Bad::output()
{
	string p1 = "person";
	int startLoc = message.find(p1);

	string beginString = message.substr(0, startLoc);
	string endString = message.substr(startLoc + p1.length(), message.length());
	
	cout << beginString << user << endString << endl;


}
