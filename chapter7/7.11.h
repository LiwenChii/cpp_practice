#ifndef _EXER7_11_H
#define _EXER7_11_H
#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

struct Sales_data{

	Sales_data() = default;
	Sales_data(const string &s) :bookno(s){};
	Sales_data(const string &s, unsigned n, double r) :bookno(s), units_sold(n), revenue(r){}
	Sales_data(istream &is);

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

Sales_data add(Sales_data &lhs, Sales_data &rhs)
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

ostream& print(ostream &os, const Sales_data &item)
{
	os << item.bookno << " " << item.units_sold <<
		" " << item.revenue << " " << item.avg_price() << std::endl;
	return os;
}

Sales_data::Sales_data(istream &is)
{
	read(is, *this);
}
#endif
