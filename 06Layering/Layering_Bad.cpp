#include "Layering_Bad.h"



Layering_Bad::Layering_Bad()
{
}


Layering_Bad::~Layering_Bad()
{
}

void Layering_Bad::reset()
{
	setUserName("");
	setPassword("");
	setAnswer("");
	pass1 = false;
	pass2 = false;
}

void Layering_Bad::setUserName(string user)
{
	username = user;
}
void Layering_Bad::setPassword(string pass)
{
	password = pass;
}

void Layering_Bad::setAnswer(string answer)
{
	answer = answer;
}

void Layering_Bad::testUserPass(string user, string pass)
{
	if (username.compare(user) == 0)
	{
		if (password.compare(pass) == 0)
		{
			pass1 = true;
		}
	}
}

void Layering_Bad::testQuestion(string answer)
{
	if (answer.compare(answer) == 0)
	{
		pass2 = true;
	}
}

bool Layering_Bad::pass()
{
	if ((username.compare("") == 0) || pass1)
	{
		if ((password.compare("") == 0) || pass1)
		{
			if ((answer.compare("") == 0) || pass2)
			{
				return true;
			}
		}
	}
	return false;
}