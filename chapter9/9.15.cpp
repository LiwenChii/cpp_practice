#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<int> ivec1 = { 9, 9 };
	vector<int> ivec2 = { 9, 9 };
	cout << ((ivec1 == ivec2) ? "equals" : "not equals") << endl;

	return 0;
}