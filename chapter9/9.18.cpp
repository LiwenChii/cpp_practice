#include <iostream>
#include <vector>
#include <deque>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::vector;
using std::string;
using std::deque;

int main()
{
	string buf;
	deque<string> deq;

	while (getline(cin, buf))
	{
		deq.push_front(buf);
	}

	for (auto di = deq.cbegin(); di != deq.cend(); di++)
	{
		cout << *di << endl;
	}
	return 0;
}