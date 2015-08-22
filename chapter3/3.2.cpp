#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void getline_and_print(void);

int main()
{
	getline_and_print();
	return 0;
}

void getline_and_print(void)
{
	string s;
	while (getline(cin, s))
	{
		cout << s << endl;
	}

}