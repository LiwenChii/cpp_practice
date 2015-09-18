#include <iostream>
#include <vector>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec = { 0, 1, 2, 3, 4, 5, 65 };
	std::fill_n(ivec.begin(), ivec.size(), 0);
	
	for (auto i : ivec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}