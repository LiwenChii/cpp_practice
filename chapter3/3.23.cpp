#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void mul_by_two(vector<int> &vec);

int main()
{
	vector<int> v(10,2);

	mul_by_two(v);

	for (auto i : v)
	{
		cout << i << endl;
	}
}

void mul_by_two(vector<int> &vec)
{
	auto it = vec.begin();

	for (; it != vec.end(); it++)
	{
		*(it) = (*(it)) * 2;
	}
}