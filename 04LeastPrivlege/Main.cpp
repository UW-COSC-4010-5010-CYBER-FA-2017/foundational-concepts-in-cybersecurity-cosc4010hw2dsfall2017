#include "LeastPrivlege_Good.h";
#include <algorithm>
#include <iostream>;
using namespace std;


int main()
{
	/* Good example: 
		The calling/using program(main) does not know how LeastPrivlege_Good is able to work with the string and it does not 
		need to.  Main has the ablity to use the code but it doesn't have unlimited access.  Also when using LeastPrivlege_Good, it
		has a set number of ways it can be used to retrive a char(First, middle, or end: controled by Const values).  In theory it 
		could get any letter out of string but that would require opening up the controls to LeastPrivlege_Good and giving "main" 
		more acess and privagles to "LeastPrivlege_Good"
	*/

	LeastPrivlege_Good good = LeastPrivlege_Good();

	string test = "";
	string tempString ="";
	int selection = 4;

	cout << "LeastPrivlege_Good" << endl;
	cout << "Enter a test string: ";
	cin >> test;
	good.setValue(test);

	cout << "Enter F to get the first letter \nEnter M to get the middle letter\nEnter E to get the Last letter\nSelection:";
	cin >> tempString;
	
	//converts Uppercase to lowercase
	transform(tempString.begin(), tempString.end(), tempString.begin(), ::tolower);

	if (tempString._Equal("f"))
	{
		selection = good.start;
	}
	else if (tempString._Equal("m"))
	{
		selection = good.middle;
	}else if (tempString._Equal("e"))
	{
		selection = good.end;
	}
	cout << good.FindCharacter(selection)<<endl;

	/*Bad example.  Basically, String is the object class with no wrapper class controling access.  The Main program has total access to the string and can do
		anything it wants to it.  
	*/

	cout << "LeastPrivlege Bad exmaple" << endl;
	cout << "Enter a test string: ";
	cin >> test;
	

	cout << "Enter number location of the letter you want, starting with 0:";
	cin >> tempString;
	bool isNumber = true;
	for (int i = 0; i < tempString.size(); i++)
	{
		if (!isdigit(tempString.at(i)))
		{
			isNumber = false;
		}
	}

	if (isNumber)
	{ 
		int location = atoi(tempString.c_str());
		cout << test.at(location) << endl;
	}else {
		cerr << "invalid selection" << endl;
	}


	return 0;
}