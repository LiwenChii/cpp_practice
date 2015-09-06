#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

struct Sales_data{
	std::string bookno;
	unsigned units_sold = 0;
	double price = 0.0;
};

int main()
{
	Sales_data total, trans;

	if (cin >> total.bookno >> total.price >> total.units_sold)
	{
		while (cin >> trans.bookno >> trans.price >> trans.units_sold)
		{
			if (trans.bookno == total.bookno)
			{
				total.units_sold += trans.units_sold;
				total.price = (total.price + trans.price) / 2;
			}
			else
			{
				cout << total.bookno << total.price << total.units_sold << endl;
				total.bookno = trans.bookno;
				total.price = trans.price;
				total.units_sold = trans.units_sold;
			}
		}

		cout << total.bookno << total.price << total.units_sold << endl;
	}
	else
	{
		cerr << "no data?" << endl;
	}
	return 0;

}