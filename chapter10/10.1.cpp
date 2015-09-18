#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::list;

int main()
{
	vector<int> ivec = { 0, 3, 4, 5, 6, 3, 6, 9, 3, 6, 5, 30 };
	cout << std::count(ivec.cbegin(), ivec.cend(), 3) << endl;

	list<string> strlst = { "lai", "zi", "heng","zii", "zi" };
	cout << std::count(strlst.cbegin(), strlst.cend(), "zi");
	return 0;
}