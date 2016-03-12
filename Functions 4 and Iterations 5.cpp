#include <iostream> 
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	return 0;
}

//Fibonacci Number
int fib(int n)
{
	//Base Case
	if (n == 1 || n == 2)
	{
		return 1;
	}

	//Recursive Case
	else return fib(n - 1) + fib(n - 2);
}

//Iterative Fib Function
int fib_iter(int n)
{

	//Base Case
	if (n == 1 || n == 2)
		return 1;

	//Recursive Case
	else
	{
		int number1 = 1;
		int number2 = 2;
		int fib = 0;
		for (int i = 3; i <= n; i++)
		{
			fib = number1 + number2;
			number1 = number2;
			number2 = fib;
		}
		return fib;
	}
}

//Power
int pow(int a, int b)
{
	//Base Case
	if (b == 0)
	{
		return 1;
	}

	//Recursive Caes
	else return a*pow(a, b - 1);
}
// Iterative Power Function
int pow_iter(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}

// Triangular Number
int tri(int n)
{
	//Base Case
	if (n == 1)
	{
		return 1;
	}
	//Recursive case
	else return n + tri(n - 1);
}

// Iteration 
int tri_iter(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1;
	}
	return sum;
}


