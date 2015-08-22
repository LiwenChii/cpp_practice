#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void add_string_and_print(void);

int main()
{
	add_string_and_print();
	return 0;
}

void add_string_and_print(void)
{
	string str;
	string total;
	while (cin >> str)
	{
		total += str;
	}
	cout << total << endl;
}