#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec = { 0, 1, 2, 3, 4, 5, 6 };
	for (auto begin = vec.begin(), end = vec.end(); begin != end; begin++)
	{
		*begin = ((*begin) % 2) ? (*begin) * 2 : *begin;
	}

	for (auto i : vec)
	{
		cout << i << " ";
	}
	return 0;
}