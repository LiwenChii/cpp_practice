#include <iostream>
#include <string>
#include "7.11.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	Sales_data item1("a123");
	print(cout, item1) << endl;
	Sales_data item2;
	print(cout, item2) << endl;
	Sales_data item3("a123", 4, 70);
	print(cout, item3) << endl;
	Sales_data item4(cin);
	print(cout, item4) << endl;

	return 0;
}