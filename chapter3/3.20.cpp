#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_neighbor(vector<int> &vec);

int main()
{
	vector<int> v1;
	int buffer;

	while (cin >> buffer)
	{
		v1.push_back(buffer);
	}

	print_neighbor(v1);

	return 0;
}

void print_neighbor(vector<int> &vec)
{
	decltype(vec.size()) index = 0;

	if (vec.size() == 1)
	{
		cout << vec[index] << endl;
	}
	else
	{
		for (; index != vec.size() - 1; index++)
		{
			cout << vec[index] << vec[index + 1] << endl;
		}
	}
	

}