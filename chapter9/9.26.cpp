#include <iostream>
#include <list>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
	vector<int> ivec;
	list<int> ilst;
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	for (auto i : ia)
	{
		ivec.push_back(i);
		ilst.push_back(i);
	}

	for (auto iter = ivec.begin(); iter != ivec.end();)
	{
		if ((*iter % 2) == 0)
		{
			iter = ivec.erase(iter);
		}
		else
		{
			++iter;
		}
	}

	for (auto iter = ilst.begin(); iter != ilst.end();)
	{
		if ((*iter % 2) == 1)
		{
			iter = ilst.erase(iter);
		}
		else
		{
			++iter;
		}
	}

	for (auto i : ivec)
	{
		cout << i << " ";
	}
	cout << endl;
	for (auto i : ilst)
	{
		cout << i << " ";
	}
}