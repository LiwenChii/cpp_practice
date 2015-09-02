#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int num);

int main()
{
	cout << abs(-5) << abs(0) << abs(6) << endl;
}

int abs(int num)
{
	return num > 0 ? num : -num;
}