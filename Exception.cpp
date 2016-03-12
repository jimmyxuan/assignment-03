#include <iostream>
#include "Exception.h"
using namespace std;

int main()
{
	int userValue;
	Numbers range(1, 10);
	{
		cout << "Plaese enter an even number between 0 and 10: " << endl;

		try
		{
			userValue = range.getAnum();
			cout << "You entered " << userValue << endl;
		}
		catch (Numbers::Even)
		{
			cout << "Error: this is an even numnber." << endl;
		}
		cout << "End of program...\n";
			return 0;
	}


}






