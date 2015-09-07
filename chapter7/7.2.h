#ifndef _EXER7_2_H
#define _EXER7_2_H
#include <string>

using std::string;

struct Sales_data{
	Sales_data& combine(const Sales_data &item);
	string isbn()const{ return bookno; }
	double avg_price()const{ return revenue / units_sold; }

	string bookno;
	unsigned units_sold = 0;
	double revenue = 0;
};

Sales_data& Sales_data::combine(const Sales_data &item)
{
	units_sold += item.units_sold;
	revenue += item.revenue;
	return *this;
}

#endif
