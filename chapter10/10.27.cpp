#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::unique_copy;
using std::vector;
using std::list;
using std::inserter;

int main()
{
	vector<int> ivec = { 0, 0, 1, 1, 1, 2, 5, 6, 6, 7, 88, 88 };
	list<int> lst;
	unique_copy(ivec.cbegin(), ivec.cend(), inserter(lst, lst.begin()));
	for (auto i : lst)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}