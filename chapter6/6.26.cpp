#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main(int argc, char **argv)
{
	string str;
	for (int i = 1; i != argc; ++i)
	{
		str += string(argv[0]) + " ";
	}

	cout << str << endl;

}