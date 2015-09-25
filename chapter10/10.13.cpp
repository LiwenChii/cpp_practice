#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

bool bigger_than_5(const string &str);

int main()
{
	vector<string> svec = { "sfdsfsd", "fgffffff", "wwww", "sssss" };
	std::partition(svec.begin(), svec.end(), bigger_than_5);

	for (const auto &s : svec)
	{
		cout << s << endl;
	}
	return 0;
}

bool bigger_than_5(const string &str)
{
	if (str.size() >= 5)
	{
		return true;
	}
	return false;
}