#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void testlambda(int i)
{
	auto f = [i]()mutable->bool
	{
		if (i != 0)
		{
			cout << i << endl;
			--i;
		}

		if (i == 0)
		{
			return true;
		}
		else
		{
			return false;
		}

	};
	f();

}

int main()
{
	int i = 6;
	testlambda(i);
}

