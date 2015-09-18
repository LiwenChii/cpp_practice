#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main()
{
	vector<int> ivec = { 0, 1, 2, 2, 3, 3, 4, 44, 4 };
	cout << std::accumulate(ivec.cbegin(), ivec.cend(), 0) << endl;
	return 0;
}