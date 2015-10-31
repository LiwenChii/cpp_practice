#include <functional>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using std::find_if;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::bind;
using std::placeholders::_1;

bool check_size(const string &s, string::size_type sz);
int find_bigger_num(const string &str, const vector<int> &ivec);

int main()
{
	int i = 0;
	vector<int> iv;
	string str = "what?";
	while (i != 10)
	{
		iv.push_back(i);
		i++;
	}
	cout << find_bigger_num(str, iv) << endl;
}

bool check_size(const string &s, string::size_type sz)
{
	return s.size() <= sz;
}

int find_bigger_num(const string &str, const vector<int> &ivec)
{
	auto place = find_if(ivec.begin(), ivec.end(), bind(check_size, str, _1));
	return (*place);
}
