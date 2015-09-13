#include <iostream>
#include <list>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::list;
int main()
{
	list<int> ilst = { 0, 1, 2, 3, 4, 5 };
	deque<int> evenDeq;
	deque<int> oddDeq;
	for (auto i : ilst)
	{
		if (i % 2 == 0)
		{
			evenDeq.push_back(i);
		}
		else
		{
			oddDeq.push_back(i);
		}
	}

	for (auto i : evenDeq)
	{
		cout << i << " ";
	}

	cout << endl;
	for (auto i : oddDeq)
	{
		cout << i << " ";
	}

	return 0;
	return 0;
}
