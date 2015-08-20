#include <iostream>
#include "Header.h"

int main()
{
	Sales_data item1, item2;
	std::cin >> item1.bookno >> item1.units_sold >> item1.price;
	item1.revenue = item1.price*item1.units_sold;
	std::cin >> item2.bookno >> item2.units_sold >> item2.price;
	item2.revenue = item2.price*item2.units_sold;

	if (item1.bookno == item2.bookno)
	{
		Sales_data total;
		total.bookno = item1.bookno;
		total.units_sold = item1.units_sold + item2.units_sold;
		total.revenue = item1.revenue + item2.revenue;
		total.price = total.revenue / total.units_sold;
		std::cout << total.bookno <<" "<< total.units_sold <<" "<< total.revenue
			<<" "<< total.price << std::endl;
	}
	else
	{
		std::cout << "the bookno must be the same" << std::endl;
	}
}