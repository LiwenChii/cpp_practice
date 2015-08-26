#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int array[10];
	int array2[10];
	for (auto i = 0; i < 10; i++)
	{
		array[i] = i;
	}

	for (auto i : array)
	{
		cout << i << " ";
	}

	cout << endl;
	for (auto i = 0; i < 10; i++)
	{
		array2[i] = array[i];
	}

	for (auto i : array2)
	{
		cout << i << " ";
	}
	
	return 0;
}