#include <algorithm>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto f = [](int a, int b)
			   {return a + b; };
	cout << "input two nums" << endl;
	int x, y;
	cin >> x >> y;
	cout << f(x, y) << endl;

	return 0;			  
}