#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

inline bool isShorter(const string &s1, const string &s2);

int main()
{
	string str1 = "abc", str2 = "ab";
	if (isShorter(str1, str2))
	{
		cout << str1 << " is shorter than " << str2 << endl;
	}
	else
	{
		cout << str1 << " is longer than " << str2 << endl;
	}

	return 0;
}

inline bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
