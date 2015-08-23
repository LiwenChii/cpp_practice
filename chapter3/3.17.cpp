#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void to_capital(vector<string> &vec);

int main()
{
	string str;
	vector<string> v1;
	while (cin >> str)
	{
		v1.push_back(str);
	}

	to_capital(v1);

	for (auto c : v1)
	{
		cout << c << endl;
	}
}

void to_capital(vector<string> &vec)
{
	for (auto &s : vec)
	{
		for (auto &c : s)
		{
			c = toupper(c);
		}
	}
}