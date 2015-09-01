#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string pre;
	string buffer;

	while (cin >> buffer)
	{
		if (buffer == pre)
		{
			cout << buffer << endl;
			break;
		}
		pre = buffer;
	}

	if (cin.eof())
	{
		cout << "no word was repeated." << endl;
	}
		
	return 0;
}