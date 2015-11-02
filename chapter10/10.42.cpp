#include <iostream>
#include <list>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::list;

void elimDups(list<string> &words)
{
	words.sort();
	words.unique();
}

int main()
{
	list<string> str_lst = { "liwen", "newil", "liwen" };
	elimDups(str_lst);
	for (const auto &s : str_lst)
	{
		cout << s << endl;
	}
	return 0;
}