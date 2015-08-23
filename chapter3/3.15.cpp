#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void read_str_and_output(void);

int main()
{
	read_str_and_output();
	return 0;
}

void read_str_and_output(void)
{
	string str;
	vector<string> v1;
	while (getline(cin, str))
	{
		v1.push_back(str);
	}

	for (auto c : v1)
	{
		cout << c << endl;
	}
}