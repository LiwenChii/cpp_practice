#include <iostream>
#include <forward_list>

using std::cin;
using std::cout;
using std::endl;
using std::forward_list;

int main()
{
	forward_list<int> flist = { 0, 2, 4, 5, 6, 7, 9, 9, 0 };
	auto prev = flist.before_begin();
	auto curr = flist.begin();
	while (curr != flist.end())
	{
		if (*curr % 2)
		{
			curr = flist.erase_after(prev);
		}
		else
		{
			prev = curr;
			++curr;
		}
	}

	for (auto i : flist)
	{
		cout << i << " ";
	}

	cout << endl;

	return 0;
}