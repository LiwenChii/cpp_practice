#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::count_if;

void biggerthan6(const vector<string> &vec);

int main()
{
	vector<string> vecstr;
	string str;
	while (cin >> str)
	{
		vecstr.push_back(str);
	}
	biggerthan6(vecstr);
	return 0;
}

void biggerthan6(const vector<string> &vec)
{
	int cnt = count_if(vec.cbegin(), vec.cend(),
			[](const string &str){return str.size() > 6; });
	cout << cnt << " words of length bigger than 6" << endl;
}