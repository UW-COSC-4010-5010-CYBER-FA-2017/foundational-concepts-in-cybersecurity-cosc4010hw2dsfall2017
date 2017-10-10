#include "Layering_Good.h"
#include "Layering_Bad.h"
#include <iostream>;
#include <string>
using namespace std;


int main()
{
	string user = "";
	string pass = "";
	string answer = "";

	/* Good Example
		Layering_Good can be used to make the user have to enter multiple levels of authorization. 2 layers are shown below. The user must enter their username/pass
		combo and a single question.  The User/pass combo is part of one programd and the question is part of another.  The user must pass both layers or 
		else they are locked out.  If a Hack was used, they user would need to hack 2 seperate laryers. 
	*/

	Layering_Good username = Layering_Good();
	Layering_Good question1 = Layering_Good();
	username.setUserName("userG");
	username.setPassword("passwordG");
	question1.setAnswer("answerG");

	cout << "Good: Layer test (All are case senitive)" << endl;
	cout << "Enter UserName(userG):";
	cin >> user;
	cout << endl;
	cout << "Enter Password(passwordG):";
	cin >> pass;
	cout << endl;
	cout << "What is the answer(answerG):";
	cin >> answer;
	cout << endl;
	
	username.testUserPass(user, pass);
	question1.testQuestion(answer);
	if (username.pass() && question1.pass())
	{
		cout << "Access Granted"<< endl;
	}
	else {
		cout << "Access Denied" << endl;
	}
		

	/* Bad Example
	Layering_Bad is basically the same as Layering_Good.  It is how it is used that makes it a bad example of layering.  In this case all the same information
	io being tested as the good example but it is doing done all in 1 program all at once.  If a hack was able to control this code then they would only need to
	"hack" 1 place even though multiple questions are still being asked.
	*/

	user = "";
	pass = "";
	answer = "";

	Layering_Bad bad = Layering_Bad();
	bad.setUserName("userB");
	bad.setPassword("passwordB");
	bad.setAnswer("answerB");

	cout << "Bad: Layer test (All are case senitive)" << endl;
	cout << "Enter UserName(userB):";
	cin >> user;
	cout << endl;
	cout << "Enter Password(passwordB):";
	cin >> pass;
	cout << endl;
	cout << "What is the answer(answerB):";
	cin >> answer;
	cout << endl;

	bad.testUserPass(user, pass);
	bad.testQuestion(answer);
	if (bad.pass())
	{
		cout << "Access Granted" << endl;
	}
	else {
		cout << "Access Denied" << endl;
	}
	
	return 0;
}

