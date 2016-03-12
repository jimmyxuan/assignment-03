#pragma once
#ifndef Numbers
#define Numbers
using namespace std;

class Numbers 
{
private:
	int odd, even;

public:
	class Odd
	{};
	class Even
	{};
	Numbers(int aeven, int aodd) {
		odd = aodd;
		even = aeven;
	}
	int get Anum()
	{
		cin >> Anum;
		if (Anum % 2) 
		{
			throw Even();
		}
		else if (Anum!% 2) 
		{
			throw Odd();
		}
		return Anum;
	}
};
#endif