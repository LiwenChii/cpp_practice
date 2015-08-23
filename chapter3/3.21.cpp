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
	auto itstart = vec.cbegin();
	auto itend = --vec.cend();

	for (; itstart < itend; itstart++, itend--)
	{
		cout << *(itstart)+ *(itend) << endl;
	}

	if (itstart == itend)
	{
		cout << *(itstart) << endl;
	}
}