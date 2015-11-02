#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::unique_copy;
using std::vector;
using std::istream_iterator;
using std::ostream_iterator;
using std::inserter;
using std::sort;

int main()
{
	vector<int> ivec;
	istream_iterator<int> in(cin);
	istream_iterator<int> eof;
	ostream_iterator<int> out(cout);
	unique_copy(in, eof, inserter(ivec, ivec.begin()));
	sort(ivec.begin(), ivec.end());
	for (auto i : ivec)
	{
		*out++ = i;
	}
	cout << endl;
	return 0;
}