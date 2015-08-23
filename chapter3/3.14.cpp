#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void read_integer_and_output(void);

int main()
{
	read_integer_and_output();
	return 0;
}

void read_integer_and_output(void)
{
	vector<int> v1;
	int temp;
	while (cin >> temp)
	{
		v1.push_back(temp);
	}
	for (auto c : v1)
	{
		cout << c << endl;
	}
}