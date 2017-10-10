#include <string>
#include <iostream>
using namespace std;

int main()
{
	string input;
	cout << "What is your name? ";
	getline(cin, input);
	cout << endl;

	/*Good Example
		The user name is inserted into the response string easily and with very little work.
	*/
	cout << "Good Example" << endl;
	cout << "Hello " << input << "\nI am very glad to meet you!" << endl;
	cout << endl;

	/*Bad Example
		adding the input into the response can be done in a variety of ways.  In this case, a string must be search and malipulated 
		inorder to get the disired results.  It requires several extra varables and functions calls that are not strickly needed
		when the "good" way is simplier and faster, not to metion the fact that it can open up the code to possible explots. 
	*/
	cout << "Bad Example" << endl;
	string person = "person";
	string reply = "Hello person \nI am very glad to meet you!";
	int start = reply.find(person);
	int length = person.length();
	
	string begin = reply.substr(0, start);
	string end = reply.substr(start + length, reply.length());
	reply = begin + input + end;
	cout << reply << endl;

	return 0;
}