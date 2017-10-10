#pragma once
#include <string>

using namespace std;

class Minimization_Bad
{
private: 
	string user;
	string message;

public:
	Minimization_Bad();
	~Minimization_Bad();
	Minimization_Bad(string name);
	
	void reset();
	
	string getUser();
	void setUser(string u);
	
	string getMessage();
	bool testMessage(string m);
	void setMessage(string m);

	void output();



};

