#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void replace_with_x(string &str);

int main()
{
	string s;
	if (cin >> s){
		replace_with_x(s);
		cout << s << endl;
	}
	else{
		return 1;
	}
	return 0;
}

void replace_with_x(string &str)
{
	for (auto &c : str)
	{
		c = 'x';
	}
}