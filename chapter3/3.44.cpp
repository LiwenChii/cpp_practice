#include <iostream>
using std::cout; 
using std::endl;

int main()
{
	int arr[3][4] =
	{
		{ 0, 1, 2, 3 },
		{ 4, 5, 6, 7 },
		{ 8, 9, 10, 11 }
	};

	using int_arr_row = int[4];

	for (int_arr_row &row: arr)
	{
		for (int n : row)
		{
			cout << n << " ";
		}
	}

	cout << endl;

	for (size_t i = 0; i != 3; i++)
	{
		for (size_t j = 0; j != 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int_arr_row *row = arr; row != arr + 3; row++)
	{
		for (int *col = *row; col != *row + 4; col++)
		{
			cout << *col << " ";
		}
		cout << endl;
	}


	return 0;
}