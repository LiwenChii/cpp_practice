#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int return_the_bigger(int a, const int *b);

int main()
{
	int num1 = 3, num2 = 5;

	cout << return_the_bigger(num1, &num2) << endl;

	return 0;
}

int return_the_bigger(int a, const int *b)
{
	if (a > *b)
	{
		return a;
	}
	else
	{
		return *b;
	}
}