#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

int main()
{
	char y;
	int n;
	vector <int> v = {};
	cout << "Insert values to be displayed" << endl;

	do {
		cout << "Insert a value for n" << endl;
		cin >> n;
		v.push_back(n);
		cout << "Do you wish to add more numbers to the list (y or n)" << endl;
		cin >> y;

	} 
	while (y == 'y' ||  y == 'Y');

	for (int b : v) 
	{
		cout << b << endl;
	}

	system("pause");
	return 0;
}