#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void to_comman(string &s, const string &oldVal, const string &newVal);

int main()
{
	string str = "thoasdfthauxczxthruvv";
	to_comman(str, "tho", "though");
	cout << str << endl;

	string str1 = "thoasdfthauxczxthruvv";
	to_comman(str1, "thru", "through");
	cout << str1 << endl;

	return 0;
}

void to_comman(string &s, const string &oldVal, const string &newVal)
{
	auto pos = s.find(oldVal);
	s.replace(pos, oldVal.size(), newVal);
}