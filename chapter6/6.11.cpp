#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(int &p);

int main()
{
	int a = 0;
	cin >> a;
	reset(a);
	cout << a;
}

void reset(int &p)
{
	p = 0;
}