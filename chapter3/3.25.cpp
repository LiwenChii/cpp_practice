#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void mark_range(vector<int> &vec);

int main()
{
	vector<int> v(11, 0);
	mark_range(v);
	for (auto i : v)
	{
		cout << i << " ";
	}
	return 0;
}

void mark_range(vector<int> &vec)
{
	int grade;
	auto it = vec.begin();
	while (cin >> grade)
	{
		if (grade>=0 && grade <= 100)
		{
			(*(it + grade / 10))++;
		}
	}
}