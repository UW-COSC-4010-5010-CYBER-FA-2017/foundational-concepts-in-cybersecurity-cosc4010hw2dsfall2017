#include "Layering_Good.h"

/*
bool pass1;
bool pass2;
string username;
string password;
string answer;
*/

Layering_Good::Layering_Good()
{
	reset();
}


Layering_Good::~Layering_Good()
{
}

void Layering_Good::reset()
{
	setUserName("");
	setPassword("");
	setAnswer("");
	pass1 = false;
	pass2 = false;
}

void Layering_Good::setUserName(string user)
{
	username = user;
}
void Layering_Good::setPassword(string pass)
{
	password = pass;
}

void Layering_Good::setAnswer(string answer)
{
	answer = answer;
}

void Layering_Good::testUserPass(string user, string pass)
{
	if (username.compare(user) == 0)
	{
		if (password.compare(pass) == 0)
		{
			pass1 = true;
		}
	}
}

void Layering_Good::testQuestion(string answer)
{
	if (answer.compare(answer) == 0)
	{
		pass2 = true;
	}
}

bool Layering_Good::pass()
{
	if ((username.compare("") == 0) || pass1)
	{
		if ((password.compare("") == 0) || pass1)
		{
			if ((answer.compare("") == 0 )|| pass2)
			{
				return true;
			}
		}
	}
	return false;
}