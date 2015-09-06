#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool have_capital(const string &s);
void to_lower(string &s);

int main()
{
	string str = "abcDeFg";
	if (have_capital(str))
	{
		cout << "the string str have capital character" << endl;
	}

	to_lower(str);

	cout << str << endl;
	return 0;

}

bool have_capital(const string &s)
{
	for (auto c : s)
	{
		if (isupper(c))
		{
			return true;
		}
	}
	return false;
}

void to_lower(string &s)
{
	for (auto &c : s)
	{
		c = tolower(c);
	}
}