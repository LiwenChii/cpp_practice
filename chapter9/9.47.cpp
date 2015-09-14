#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str = "ab23c3d7R4E6";
	string numbers = "0123456789";
	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	for (auto pos = 0; (pos = str.find_first_of(numbers,pos)) != string::npos; ++pos)
	{
		cout << str[pos] << endl;
	}

	for (auto pos = 0; (pos = str.find_first_of(alphabet, pos)) != string::npos; ++pos)
	{
		cout << str[pos] << endl;
	}
	
	return 0;
}