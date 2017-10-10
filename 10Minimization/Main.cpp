#include "Minimization_Bad.h"
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
	The user name is inserted into the response string easily and with very little work. No extra or un-needed varables are used
	*/
	cout << "Good Example" << endl;
	cout << "Goodbye " << input << "\nit was nice to meet you!" << endl;
	cout << endl;

	/*Bad Example
		By using a class to do all the work it makes it simplier to see but what is going on "under the hood" is much more.  String search and malipulation
		are done and several addtional varables and method calles are used.  Each one of these extra pieces of un-needed code can lead to a vulerablity 
		and makes the code that much hard to understand.
	*/
	cout << "Bad Example" << endl;
	
	Minimization_Bad bad = Minimization_Bad(input);
	bad.output();

	return 0;
}