#include <iostream>
#include <stdexcept>


using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a, b;
	cin >> a >> b;
	if (b == 0)
	{
		throw std::runtime_error("the second number couldn't be zero");
	}

	cout << a / b << endl;
	return 0;
}