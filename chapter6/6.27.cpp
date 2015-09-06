#include <iostream>
#include <initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int count_all_numbers(initializer_list<int> num);

int main()
{
	int a = 6, b = 2, c = 8;
	cout << count_all_numbers({ a, b }) << endl;
	cout << count_all_numbers({ a, b, c }) << endl;
	return 0;
}

int count_all_numbers(initializer_list<int> num)
{
	int result = 0;
	for (auto beg = num.begin(); beg != num.end(); ++beg)
	{
		result += *beg;
	}

	return result;
}