#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print_int(const int &a);
void print_int_2array(const int(&arr)[2]);

int main()
{
	int i = 0;
	int j[2] = { 0, 1 };

	print_int(i);
	print_int_2array(j);

	return 0;
}

void print_int(const int &a)
{
	cout << a << endl;
}

void print_int_2array(const int(&arr)[2])
{
	for (auto num : arr)
	{
		cout << num << endl;
	}
}