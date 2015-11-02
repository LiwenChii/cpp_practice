#include "EXER_10_32.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <numeric>
#include <functional>

using std::copy;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::vector;
using std::istream_iterator;
using std::ostream_iterator;
using std::ifstream;
using std::find_if;
using std::accumulate;
using std::bind;
using std::placeholders::_1;
int main()
{
	ifstream input("./salesdata.txt");
	istream_iterator<Sales_item> in(input), eof;
	vector<Sales_item> sales_vec(in, eof);

	for (auto s : sales_vec)
	{
		cout << s << endl;
	}
	sort(sales_vec.begin(), sales_vec.end(), compareIsbn);
	cout << endl;
	for (auto beg = sales_vec.cbegin(), end = beg; beg != sales_vec.cend(); beg = end)
	{
		end = find_if(beg, sales_vec.cend(), [beg](const Sales_item &item){ return item.isbn() != beg->isbn(); });
		cout << accumulate(beg, end, Sales_item(beg->isbn())) << endl;
	}
	
	return 0;
}
