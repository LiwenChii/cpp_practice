#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::istream_iterator;
using std::ostream_iterator;
using std::inserter;
using std::sort;

int main()
{

	vector<int> ivec;
	istream_iterator<int> in(cin);
	istream_iterator<int> eof;
	copy(in, eof, inserter(ivec, ivec.begin()));
	sort(ivec.begin(), ivec.end());
	ostream_iterator<int> out(cout);
	for (auto i : ivec)
	{
		*out++ = i;
	}
	cout << endl;
	return 0;
}