#include <iostream>
#include <string>
#include "7.21.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	Sales_data total, trans;
	if (read(cin, total))
	{
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
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

	return 0;
}