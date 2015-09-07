#include <iostream>
#include <string>
#include "7.11.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	Sales_data trans;
	Sales_data total(std::cin);
	if (!total.bookno.empty())
	{
		while (read(cin, trans))
		{
			if (total.bookno == trans.bookno)
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total);
	}
	else
	{
		std::cerr << "no data?" << endl;
	}
	
}