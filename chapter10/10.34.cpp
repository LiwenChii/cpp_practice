#include <iterator>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::list;
using std::vector;
using std::reverse_iterator;
using std::cin;
using std::cout;
using std::endl;
using std::copy;

int main()
{
	//10.34
	vector<int> ivec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto riter = ivec.crbegin(); riter != ivec.crend(); riter++)
	{
		cout << *riter << " ";
	}
	cout << endl;

	//10.35
	for (auto iter = ivec.cend() - 1; iter > ivec.cbegin(); iter--)
	{
		cout << *iter << " ";
	}
	cout << *(ivec.cbegin()) << endl;

	//10.36
	list<int> ilst = { 0, 1, 2, 3, 0, 4, 5, 6, 7 };
	auto zero = find(ilst.crbegin(), ilst.crend(), 0);
	
	//10.37
	list<int> record;
	std::copy(ivec.crbegin() + 3, ivec.crbegin() + 8, std::back_inserter(record));
	for (auto i : record)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}