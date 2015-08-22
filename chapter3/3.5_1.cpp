#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void add_string_space_print(void);

int main()
{
	add_string_space_print();
	return 0;
}

void add_string_space_print(void)
{
	string temp;
	string str;
	for (; cin >> temp; str += ((str.empty() ? "" : " ") + temp));
	cout << str << endl;
}

