/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* A short program to print "Hello World!" to standard output.
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

template<typename T>
T burrito(T a, T b)
{
	return a + b;
}

int main() {

	int calA, calB; 
	double costA, costB, effBurr;
	std::string burritoA, burritoB;
	char stillHungry;

	cout << "This is the burrito calories bot." << endl;
	do {
		cout << "Enter the first burrito's protein source:" << endl;
		cin >> burritoA;
		cout << "Enter the second burrito's protein source:" << endl;
		cin >> burritoB;
		cout << "You have chosen to eat..." << endl;
		cout << burrito(burritoA, burritoB) << endl;
		cout << "Enter the first burrito's calorie count:" << endl;
		cin >> calA;
		cout << "Enter the second burrito's calorie count:" << endl;
		cin >> calB;
		cout << "Your total calorie intake count is:" << burrito(calA, calB) << endl;
		cout << "Enter the first burrito's cost:" << endl;
		cin >> costA;
		cout << "Enter the second burrito's cost:" << endl;
		cin >> costB;
		cout << "Your total cost of buying both of these burritos is:" << endl;
		cout.precision(2);
		cout << std::fixed << "$" << burrito(costA, costB) << endl;
		effBurr = burrito(calA, calB) / burrito(costA, costB);
		cout << "You get " << effBurr << " calories for each dollar spent." << endl;
		if (effBurr <= 250)
			cout << "You should reconsider how much you spend on your burritos!" << endl;
		else
			cout << "Congratulations! You make the most out of your dollar!" << endl;
		cout << "Would you like to eat more burritos?(Y/N)";
		cin >> stillHungry;
	} while (stillHungry == 'y' || stillHungry == 'Y');





	return 0;

}