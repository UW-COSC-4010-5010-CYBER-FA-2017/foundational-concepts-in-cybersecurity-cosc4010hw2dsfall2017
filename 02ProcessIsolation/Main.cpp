#include "ProcessIsolation_Good.h";
#include "ProcessIsolation_Bad.h";
#include <iostream>;
#include <string>
#include <sstream>
using namespace std;


int main()
{
	/* The memory item of each version of good has it's own memory so even if you get direct access to it (such as with getMemory)
	then the only program you can effect is itself, as can be seen with good1
	*/

	ProcessIsolation_Good good0 = ProcessIsolation_Good();
	ProcessIsolation_Good good1 = ProcessIsolation_Good();


	cout << "Good0 Before execution" << endl;
	cout << "Start: " << good0.getStart() << endl;
	cout << "Total: " << good0.getTotal() << endl;

	for (int i = 0; i < 10; i++)
	{
		good0.setTotal(good0.getTotal() + 1);
	}

	cout << "Good0 after execution" << endl;
	cout << "Start: " << good0.getStart() << endl;
	cout << "Total: " << good0.getTotal() << endl;
	cout << endl;


	int* tempMemory = good1.getMemory();
	tempMemory[0] = 5;
	tempMemory[1] = 5;

	cout << "Good1 Before execution" << endl;
	cout << "Start: " << good1.getStart() << endl;
	cout << "Total: " << good1.getTotal() << endl;

	for (int i = 0; i < 5; i++)
	{
		good1.setTotal(good1.getTotal() + 1);
	}

	cout << "Good1 after execution" << endl;
	cout << "Start: " << good1.getStart() << endl;
	cout << "Total: " << good1.getTotal() << endl;
	cout << endl;


	//shared memory for bad item
	int memory[4];

	/* The memory item of each version of bad shares an array list with other programs.  If you get direct access to it (such as with getMemory)
	then any program using that memory can be effected.
	*/
	ProcessIsolation_Bad bad0 = ProcessIsolation_Bad(memory, 0, 2);
	ProcessIsolation_Bad bad1 = ProcessIsolation_Bad(memory, 1, 3);

	tempMemory = bad1.getMemory();
	tempMemory[0] = 0;
	tempMemory[1] = 5;
	tempMemory[2] = 0;
	tempMemory[3] = 5;
	//as can be seen, can access Bad0 memory using data from bad1

	cout << "Bad0 Before execution" << endl;
	cout << "Start: " << bad0.getStart() << endl;
	cout << "Total: " << bad0.getTotal() << endl;

	for (int i = 0; i < 10; i++)
	{
		bad0.setTotal(bad0.getTotal() + 1);
	}

	cout << "Bad0 after execution" << endl;
	cout << "Start: " << bad0.getStart() << endl;
	cout << "Total: " << bad0.getTotal() << endl;

	cout << endl;

	cout << "Bad1 Before execution" << endl;
	cout << "Start: " << bad1.getStart() << endl;
	cout << "Total: " << bad1.getTotal() << endl;

	for (int i = 0; i < 5; i++)
	{
		bad1.setTotal(bad1.getTotal() + 1);
	}

	cout << "Bad1 after execution" << endl;
	cout << "Start: " << bad1.getStart() << endl;
	cout << "Total: " << bad1.getTotal() << endl;


	return 0;

}