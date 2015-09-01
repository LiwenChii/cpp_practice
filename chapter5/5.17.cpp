#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int is_prefix(const vector<int> &a, const vector<int> &b);

int main()
{
	vector<int> vec1 = { 0, 1, 1, 2, 3, 5, 8 };
	vector<int> vec2 = { 0, 1, 1, 2 };

	if (is_prefix(vec1, vec2))
	{
		cout << "is prefix" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	return 0;
}

int is_prefix(const vector<int> &a, const vector<int> &b)
{
	auto size = (a.size() < b.size()) ? a.size() : b.size();

	for (auto i = 0; i != size; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}

	return 1;	
}