#include <iostream>
#include <string>
#include <fstream>
#include "exer_8.6.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main(int argc, char **argv)
{
	ifstream input(argv[1]);
	Sales_data trans, total;
	if (input)
	{
		if (read(input, total))
		{
			while (read(input, trans))
			{
				if (trans.isbn() == total.isbn())
				{
					total.combine(trans);
				}
				else
				{
					print(cout, total);
					total = trans;
				}
			}
			print(cout, total);
		}
		else
		{
			cout << "no data??" << endl;
		}
	}
}