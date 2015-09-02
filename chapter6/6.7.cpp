#include <iostream>

using std::cin;
using std::cout;
using std::endl;

size_t count_calls();

int main()
{
	for (size_t i = 0; i != 10; ++i)
	{
		cout << count_calls() << endl;
	}
}

size_t count_calls()
{
	static size_t count = 0;
	return count++;
}