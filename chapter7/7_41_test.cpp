#include <iostream>
#include <string>
#include "7.41.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	std::cout << "1. default way: " << std::endl;
	cout << "----------------" << endl;
	Sales_data s1;

	cout << "\n2. use std::string as parameter: " << endl;
	cout << "----------------" << endl;
	Sales_data s2("CPP-Primer-5th");

	cout << "\n3. complete parameters: " << endl;
	cout << "----------------" << endl;
	Sales_data s3("CPP-Primer-5th", 3, 25.8);

	cout << "\n4. use istream as parameter: " << endl;
	cout << "----------------" << endl;
	Sales_data s4(std::cin);

	return 0;
}