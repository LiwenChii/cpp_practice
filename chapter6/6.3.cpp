#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fact(int num);

int main()
{
	cout << fact(5) << endl;
}

int fact(int num)
{
	int result = 1;
	while (num > 1)
	{
		result *= num--;
	}
	return result;
}