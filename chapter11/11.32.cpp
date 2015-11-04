#include <string>
#include <iostream>
#include <map>
#include <set>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::multimap;
using std::multiset;


int main()
{
	multimap<string, string> books = 
	{ { "liwenchii", "baiye" },
	  { "liwenchii", "hello" }, 
	  { "liwenchii", "ccc"   },
	  { "noone", "worldend"  } };

	map<string, multiset<string>> order_books;

	for (const auto &b : books)
	{
		order_books[b.first].insert(b.second);
	}

	for (const auto &b : order_books)
	{
		cout << b.first << " ";
		for (const auto &s : b.second)
		{
			cout << s << " ";
		}
		cout << endl;
	}

	return 0;

}