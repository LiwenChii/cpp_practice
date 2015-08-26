#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("ab");
	string s2("ac");

	if (s1 == s2)
	{
		cout << "s1 and s2 are the same string" << endl;
	}

	char str1[10] = "ab";
	char str2[10] = "ab";

	if (strcmp(str1, str2) == 0)
	{
		cout << "str1 and str2 are the same string" << endl;
	}
	
	return 0;
}