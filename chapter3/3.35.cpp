#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	const int size = 10;
	int array[size];
	for (auto ptr = array; ptr != array + size; ptr++)
	{
		*ptr = 0;
	}

	for (auto i : array)
	{
		cout << i << " ";
	}
	
	return 0;
}