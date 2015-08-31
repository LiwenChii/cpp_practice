#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int val = 0;
	int sum = 0;
	while (val <= 10)
	{
		sum += val, ++val;
	}
	cout << sum << endl;

	return 0;
}