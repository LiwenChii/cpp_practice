#include <iostream>
#include <string>
#include <list>
#include <vector>

using std::vector;
using std::list;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	list<const char*> lch(9, "hhh");
	vector<string> vstr;
	vstr.assign(lch.cbegin(), lch.cend());

	for (const auto &str : vstr)
	{
		cout << str << endl;
	}

	return 0;
}