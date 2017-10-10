#pragma once
#include <string>;
using namespace std;

class Layering_Bad
{
private:
	bool pass1;
	bool pass2;
	string username;
	string password;
	string answer;

public:
	Layering_Bad();
	~Layering_Bad();

	void reset();
	void setUserName(string user);
	void setPassword(string pass);
	void setAnswer(string answer);
	void testUserPass(string user, string pass);
	void testQuestion(string answer);
	bool pass();
};

