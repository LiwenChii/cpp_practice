#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void replace_with_x(string &str);
void replace_with_y(string &str);

int main()
{
	string s;
	if (cin >> s)
	{
		replace_with_x(s);
		cout << s << endl;
		replace_with_y(s);
		cout << s << endl;
	}
	else
	{
		return 1;
	}
	return 0;
}

void replace_with_x(string &str)
{
	decltype(str.size()) index = 0;
	while (index < str.size())
	{
		str[index] = 'x';
		index++;
	}
}

void replace_with_y(string &str)
{
	for (decltype(str.size()) index = 0; index != str.size(); index++)
	{
		str[index] = 'y';
	}
}