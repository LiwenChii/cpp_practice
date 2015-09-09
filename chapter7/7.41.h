#ifndef EXER_7_41
#define EXER_7_41

#include <iostream>
#include <string>

class Sales_data{
	friend std::istream& read(std::istream &is, Sales_data &item);
	friend std::ostream& print(std::ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
public:
	Sales_data(std::string n, unsigned u, double r) :bookno(n), sales_unit(u),
		revenue(r)
	{
		std::cout << "Sales_data(const std::string&, unsigned, double)" << std::endl;
	}
	Sales_data() :Sales_data("", 0, 0.0)
	{
		std::cout << "Sales_data()" << std::endl;
	}
	Sales_data(std::string n) :Sales_data(n, 0, 0.0)
	{
		std::cout << "Sales_data(const std::string&)" << std::endl;
	}
	Sales_data(std::istream& is) :Sales_data(){ read(is, *this); }

	Sales_data& combine(const Sales_data &item);
	std::string isbn()const{ return bookno; }

private:
	double avg_price()const{ return revenue / sales_unit; }

	std::string bookno;
	unsigned sales_unit = 0;
	double revenue = 0;
};

inline Sales_data& Sales_data::combine(const Sales_data &item)
{
	sales_unit += item.sales_unit;
	revenue += item.revenue;
	return *this;
}

#endif