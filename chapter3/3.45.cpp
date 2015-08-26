#include <iostream>
using std::cout; using std::endl;

int main()
{
	int arr[3][4] =
	{
		{ 0, 1, 2, 3 },
		{ 4, 5, 6, 7 },
		{ 8, 9, 10, 11 }
	};

	for (auto &row : arr)
	{
		for (auto col : row)
		{
			cout << col << " ";
		}
	}

	cout << endl;


	for (auto i = 0; i != 3; i++)
	{
		for (auto j = 0; j != 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (auto p = arr; p != arr + 3; p++)
	{
		for (auto n = *p; n != (*p) + 4; n++)
		{
			cout << *n << " ";
		}
	}
	return 0;
}