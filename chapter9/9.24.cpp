#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec = { 0, 1, 3 };

	cout << ivec.at(0) << endl;
	cout << ivec[0] << endl;
	cout << ivec.front() << endl;
	cout << *(ivec.begin()) << endl;

	return 0;
}