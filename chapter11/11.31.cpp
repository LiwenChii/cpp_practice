#include <string>
#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::multimap;

int main()
{
	multimap<string, string> books = { { "liwenchii", "baiye" },
	{ "liwenchii", "hello" }, {"noone", "worldend"} };

	auto first = books.find("liwenchii");
	auto count = books.count("liwenchii");

	while (count)
	{
		if (first->second == "hello")
		{
			books.erase(first);
			break;
		}
		++first;
		--count;
	}

	for (const auto &b : books)
	{
		cout << b.first << " " << b.second << endl;
	}
	return 0;
}