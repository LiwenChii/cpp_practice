#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <functional>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::bind;
using std::placeholders::_1;
using std::partition;
using std::stable_sort;

bool check_size(const string &s, string::size_type sz);
void biggies(vector<string> &words, vector<string>::size_type sz);
void elimDups(vector<string> &words);
string make_plural(size_t st, const string &str, const string &ending);

int main()
{
	vector<string> somewords;
	cout << "Please enter some words" << endl;
	string words;
	while (cin >> words)
	{
		somewords.push_back(words);
	}
	biggies(somewords, 5);

	return 0;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b)
	{return a.size() < b.size(); });

	auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	for_each(wc, words.end(),
		[](const string &s){cout << s << " "; });
	cout << endl;
}

bool check_size(const string &s, string::size_type size)
{
	return s.size() < size;
}

string make_plural(size_t st, const string &str, const string &ending)
{
	return (st < 1) ? str : str + ending;
}

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

