#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;

int main()
{
	map<string, size_t> word_count;
	string word;
	while (cin >> word)
	{
		auto ret = word_count.insert({ word, 1 });
		if (!ret.second)
		{
			++ret.first->second;
		}
	}

	for (const auto &w : word_count)
	{
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times" : " times") << endl;
	}
}