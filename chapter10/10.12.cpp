#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include "Sales_data.h"

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::stable_sort;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs);

int main()
{
	Sales_data item;
	vector<Sales_data> record;
	while (read(cin, item))
	{
		record.push_back(item);
	}

	stable_sort(record.begin(), record.end(), compareIsbn);
	for (const auto &i : record)
	{
		print(cout, i);
	}
	
}

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return (lhs.isbn().size() < rhs.isbn().size());
}
