#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void elimDups(vector<string> &words);

int main()
{
	vector<string> strVector = { "lai", "lai", "lai", "zi", "zi" };
	elimDups(strVector);
	for (auto s : strVector)
	{
		cout << s << endl;
	}
	return 0;
}

void elimDups(vector<string> &words)
{
	std::sort(words.begin(), words.end());
	auto end_unique = std::unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}