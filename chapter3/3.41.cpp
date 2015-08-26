#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;


int main()
{
	int array[] = { 1, 2, 3 };
	vector<int> vec(begin(array), end(array));

	for (auto i : vec)
	{
		cout << i << endl;
	}

	return 0;
}