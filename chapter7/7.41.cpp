#include "7.41.h"

std::istream& read(std::istream &is, Sales_data &item)
{
	is >> item.bookno >> item.sales_unit >> item.revenue;
	return is;
}



std::ostream& print(std::ostream &os, const Sales_data &item)
{
	os << item.bookno << item.sales_unit << item.revenue;
	return os;
}



Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}