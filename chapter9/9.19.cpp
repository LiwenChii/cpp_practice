#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <list>


using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::vector;
using std::string;
using std::list;

int main()
{
	string buf;
	list<string> list;

	while (getline(cin, buf))
	{
		list.push_back(buf);
	}

	for (auto di = list.cbegin(); di != list.cend(); di++)
	{
		cout << *di << endl;
	}
	return 0;
}