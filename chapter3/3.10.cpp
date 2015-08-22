#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void remove_punctuation(string &in, string &out);

int main()
{
	string strin;
	string strout;
	cin >> strin;
	remove_punctuation(strin, strout);
	cout << strout << endl;
	return 0;
}

void remove_punctuation(string &in, string &out)
{
	for (auto c : in)
	{
		if (!ispunct(c))
		{
			out += c;
		}
	}
}