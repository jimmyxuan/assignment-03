#include <iostream>



#include <set>



int main()

{ 

	double time1, time2, time3, time4, time5, time6;



	std::cout << "Enter time for contestant 1 in minutes:";

	std::cin >> time1;



	std::cout << "Enter time for contestant 2 in minutes:";

	std::cin >> time2;



	std::cout << "Enter time for contestant 3 in minutes:";

	std::cin >> time3;



	std::cout << "Enter time for contestant 4 in minutes:";

	std::cin >> time4;



	std::cout << "Enter time for contestant 5 in minutes:";

	std::cin >> time5;



	std::cout << "Enter time for contestant 6 in minutes:";

	std::cin >> time6;





	double myints[] = { time1, time2, time3, time4, time5, time6 };

	std::set<double> myset(myints, myints + 6);



	std::cout << "The fastest times are as follows:";

	for (std::set<double>::iterator it = myset.begin(); it != myset.end(); ++it)

		std::cout << ' ' << *it;



	std::cout << '\n';





	return 0;

}