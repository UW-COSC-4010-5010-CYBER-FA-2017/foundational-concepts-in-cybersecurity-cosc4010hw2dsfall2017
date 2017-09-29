#include "Modularity_Good.h"
#include "Modularity_Bad.h"
#include "End.h"
#include "Middle.h"
#include "Module.h"
#include "Start.h"
using namespace std;


int main()
{
	/* Good example:
		With good version, Modularity_Good can take 3 different modules that are subclass of Module.  This allows the program to accept different "modules" 
		each of which can be subsituted for one another. This allows new modules to be created and used for other uses that may be required in the future.
		Note: inorder to allow "proper" inhertance must use ptr to class object not the object itself. 
	*/
	Modularity_Good good = Modularity_Good("abcdef");
	Module* base = NULL;
	Start start = Start();
	Middle mid = Middle();
	End end = End();
	cout << "Modularity Good" << endl;
	base = &start;
	good.useModule(base);

	base = &mid;
	good.useModule(base);
	
	base = &end;
	good.useModule(base);
	cout << endl;

	/* Bad Example:
		This is a self contanted program that does all of what the good does but it cannot accept modules or other "on the fly" changes.  The code would
		need to be re-written inorder to and new functionality. 
	*/
	Modularity_Bad bad = Modularity_Bad("abcdef");
	cout << "Modularity Good" << endl;
	bad.start();
	bad.middle();
	bad.end();


	return 0;
}