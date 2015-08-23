#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void to_upper(vector<string> &vec);

int main()
{
	vector<string> v1;
	string buffer;

	while (getline(cin, buffer))
	{
		v1.push_back(buffer);
	}

	to_upper(v1);

	for (auto str : v1)
	{
		cout << str << endl;
	}
}

void to_upper(vector<string> &vec)
{
	auto it = vec.begin();

	for (auto &c : *(it))
	{
		c = toupper(c);
	}
}