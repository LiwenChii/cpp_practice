#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>


using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::find_if;
using std::bind;
using std::placeholders::_1;
using std::placeholders::_2;

void lessthan6(vector<string> &vec_str);
bool iflessthan6(const string &str, string::size_type sz);

int main()
{
	string word;
	vector<string> vec_str;
	while (cin >> word)
	{
		vec_str.push_back(word);
	}
	lessthan6(vec_str);
	return 0;
}

void lessthan6(vector<string> &vec_str)
{
	int n = 6;
	stable_sort(vec_str.begin(), vec_str.end(),
		[](const string &lhs, const string &rhs)
		  {return lhs.size() > rhs.size(); });
	auto wc = find_if(vec_str.begin(), vec_str.end(), bind(iflessthan6, _1, n));
	auto cnt = vec_str.end() - wc;
	cout << cnt << " words of length less than 6" << endl;
}

bool iflessthan6(const string &str, string::size_type sz)
{
	return str.size() <= sz;
}