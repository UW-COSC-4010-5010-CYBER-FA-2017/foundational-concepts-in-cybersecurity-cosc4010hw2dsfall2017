#include "DomainSeparation_Good.h";
#include "DomainSeperation_Bad.h";
#include <iostream>;
using namespace std;


int main()
{
	/*With the good one,
	the outer code does not have direct access to the private methods and varables of the object
	It can only get access to the value of the varables and can only use the public methonds
	that are made public.  Similar to a Supervisor(private) and user (public) domains on a computer

	With this set up the outer program can still perform all the work it needs but it does not have
	direct access to the inner program.
	*/

	DomainSeparation_Good good = DomainSeparation_Good();

	cout << "Good Before execution" << endl;
	cout << "Start: " << good.getStart() << endl;
	cout << "Total: " << good.getTotal() << endl;

	for (int i = 0; i < 10; i++)
	{
		good.setTotal(good.getTotal() + 1);
	}

	cout << "Good After execution" << endl;
	cout << "Start: " << good.getStart() << endl;
	cout << "Total: " << good.getTotal() << endl;


	cout << endl;
	/*With the bad one,
	The outer code does have direct access to the private methods and varables of the object.

	With this set up the outer program can still perform all the work it needs but it gives direct
	access to varables and other item which could be exploted
	*/

	DomainSeperation_Bad bad = DomainSeperation_Bad();

	cout << "Bad Before execution" << endl;
	cout << "Start: " << bad.start << endl;
	cout << "Total: " << bad.total << endl;

	for (int i = 0; i < 10; i++)
	{
		bad.total++;
	}

	cout << "Bad After execution" << endl;
	cout << "Start: " << bad.start << endl;
	cout << "Total: " << bad.total << endl;


	/*as can be seen from the output, both programs work*/
	return 0;

}