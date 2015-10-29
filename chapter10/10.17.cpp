#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;

int main()
{
	Sales_data item;
	vector<Sales_data> record;
	while (read(cin, item))
	{
		record.push_back(item);
	}

	sort(record.begin(), record.end(),
		[](const Sales_data &lhs, const Sales_data &rhs)->bool
		  {return lhs.isbn().size() < rhs.isbn().size(); });

	for (const auto &i : record)
	{
		print(cout, i);
	}
	return 0;
}
