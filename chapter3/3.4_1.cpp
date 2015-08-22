#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void compare_string_length(void);

int main()
{
	compare_string_length();
	return 0;

}


void compare_string_length(void)
{
	string str1, str2;

	cin >> str1 >> str2;

	if (str1.size() == str2.size())
	{
		cout << "both the two string length are: " << str1.size() << endl;
	}
}