#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using std::vector;
using std::list;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	list<int> ilst = { 9, 6 };
	vector<int> ivec = { 9, 6 };

	if (std::equal(ilst.cbegin(), ilst.cend(), ivec.cbegin()))
	{
		cout << "equals" << endl;
	}
	else
	{
		cout << "not equals" << endl;
	}

	return 0;
}