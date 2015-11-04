#include <string>
#include <vector>
#include <utility>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::pair;
using std::make_pair;
int main()
{
	string str;
	int i;
	vector<pair<string, int>> record;
	while (cin >> str >> i)
	{
		record.push_back(make_pair(str, i));
	}

	for (const auto &p : record)
	{
		cout << p.first << p.second << endl;
	}
	return 0;
}