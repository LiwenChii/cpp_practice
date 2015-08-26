#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	const int size = 3;
	int arr[size] = { 0, 1, 2 };
	int arr2[size] = { 0, 1, 2 };
	vector<int> vec = { 0, 1, 2 };
	vector<int> vec2 = { 0, 1, 2 };

	for (auto i = 0; i != size; i++)
	{
		if (arr[i] != arr2[i])
		{
			cout << "The arrays are not equal" << endl;
		}
	}
	if (vec != vec2)
	{
		cout << "The vectors are not equal" << endl;
	}
	
	return 0;
}