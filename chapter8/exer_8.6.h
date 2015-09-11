#ifndef EXER_8_6_H
#define EXER_8_6_H

#include <iostream>
#include <string>
using std::istream;
using std::ostream;
using std::string;


class Sales_data{
	friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
	friend istream& read(istream& is, Sales_data& item);
	friend ostream& print(ostream& os, const Sales_data& item);
public:
	Sales_data() = default;
	Sales_data(string s, unsigned u, double r) :bookno(s), sales_unit(u),
		revenue(r){}
	Sales_data(string s) :bookno(s){}
	Sales_data(istream &is){ read(is, *this); }

	string isbn() const { return bookno; }
	Sales_data& combine(const Sales_data& item);

private:
	double avg_price()const{ return revenue / sales_unit; }
	string bookno;
	unsigned sales_unit = 0;
	double revenue = 0.0;
};

Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
istream& read(istream& is, Sales_data& item);
ostream& print(ostream& os, const Sales_data& item);

Sales_data& Sales_data::combine(const Sales_data& item)
{
	sales_unit += item.sales_unit;
	revenue += item.revenue;
	return *this;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

istream& read(istream& is, Sales_data& item)
{
	is >> item.bookno >> item.sales_unit >> item.revenue;
	return is;
}

ostream& print(ostream& os, const Sales_data& item)
{
	os << item.bookno << " " << item.sales_unit << " "
		<< item.revenue << " " << item.avg_price() << std::endl;
	return os;
}

#endif