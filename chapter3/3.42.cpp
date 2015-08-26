#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> i_vec = { 0, 1, 3 };
	int int_arr[3];

	for (auto i = 0; i != 3; i++)
	{
		int_arr[i] = i_vec[i];
	}

	for (auto i : int_arr)
	{
		cout << i << endl;
	}
	
	return 0;
}