#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void sum_and_print(vector<int> &vec);

int main()
{
	int buffer;
	vector<int> v1;
	while (cin >> buffer)
	{
		v1.push_back(buffer);
	}

	sum_and_print(v1);

	return 0;
}

void sum_and_print(vector<int> &vec)
{
	decltype(vec.size()) start = 0;
	decltype(vec.size()) end = vec.size() - 1;

	for (; start < end;start++,end--)
	{
		cout << vec[start] + vec[end] << endl;
	}
	if (start == end)
	{
		cout << vec[start] << endl;
	}
}