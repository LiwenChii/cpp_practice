#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using std::list;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::inserter;
using std::back_inserter;
using std::front_inserter;

int main()
{
	vector<int> ivec;
	for (int i = 1; i != 10; i++)
	{
		ivec.push_back(i);
	}
	list<int> lst1, lst2, lst3;
	copy(ivec.cbegin(), ivec.cend(),
		inserter(lst1, lst1.begin()));
	copy(ivec.cbegin(), ivec.cend(),
		front_inserter(lst2));
	copy(ivec.cbegin(), ivec.cend(),
		back_inserter(lst3));

	for (auto i : lst1)
	{
		cout << i << " ";
	}
	cout << endl;

	for (auto i : lst2)
	{
		cout << i << " ";
	}
	cout << endl;

	for (auto i : lst3)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}