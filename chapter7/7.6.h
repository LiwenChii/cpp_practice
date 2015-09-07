#ifndef _EXER7_2_H
#define _EXER7_2_H
#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

struct Sales_data{
	Sales_data& combine(const Sales_data &item);
	string isbn()const{ return bookno; };
	double avg_price()const{ return revenue / units_sold; };

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

Sales_data& add(Sales_data &lhs, Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

istream& read(istream &is, Sales_data &item)
{
	is >> item.bookno >> item.units_sold >> item.revenue;
	return is;
}

ostream& print(ostream &os, Sales_data &item)
{
	os << item.bookno << " " <<item.units_sold <<
		" " << item.revenue << " " << item.revenue << std::endl;
	return os;
}
#endif
