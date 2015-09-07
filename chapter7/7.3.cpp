#include <iostream>
#include <string>
#include "7.2.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	Sales_data total, trans;

	if (cin >> total.bookno >> total.units_sold >> total.revenue)
	{
		while (cin >> trans.bookno >> trans.units_sold >> trans.revenue)
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				cout << total.bookno << total.units_sold << total.revenue << endl;
				total.bookno = trans.bookno;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
		}
		cout << total.bookno << total.units_sold << total.revenue << endl;
	}
	else
	{
		std::cerr << "no data?" << endl;
		return -1;
	}

	return 0;
}