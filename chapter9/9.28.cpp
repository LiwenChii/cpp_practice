#include <iostream>
#include <forward_list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void search_insert(forward_list<string> &flstr, const string &search, const string &insert);

int main()
{
	string str1 = "hell";
	string str2 = "dd";
	forward_list<string> fl = { "hel", "o", "world" };

	search_insert(fl, str1, str2);

	for (auto s : fl)
	{
		cout << s;
	}
	cout << endl;

	return 0;
}

void search_insert(forward_list<string> &flstr, const string &search, const string &insert)
{
	auto prev = flstr.before_begin();
	auto curr = flstr.begin();

	while (curr != flstr.end())
	{
		if (*curr == search)
		{
			flstr.insert_after(curr, insert);
			return;
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
		
	flstr.insert_after(prev, insert);

}